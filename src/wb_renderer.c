
const f32 Sprite_AnchorX[] = {
	0.0f,
	-0.5f,
	0.0f,
	0.5f, 
	0.5f,
	0.5f, 
	0.0f, 
	-0.5f,
	-0.5f
};

const f32 Sprite_AnchorY[] = {
	0.0f,
	-0.5f,
	-0.5f,
	-0.5f,
	0.0f,
	0.5f,
	0.5f,
	0.5f,
	0.0f
};

#ifndef REFLECTED
typedef enum SpriteFlags
{
	Anchor_Center = 0,
	Anchor_TopLeft = 1,
	Anchor_Top = 2,
	Anchor_TopRight = 3,
	Anchor_Right = 4,
	Anchor_BottomRight = 5,
	Anchor_Bottom = 6,
	Anchor_BottomLeft = 7,
	Anchor_Left = 8,
	SpriteFlag_FlipHoriz = Flag(4),
	SpriteFlag_FlipVert = Flag(5),
	SpriteFlag_Primitive = Flag(6),
	SpriteFlag_Null = Flag(10)
} SpriteFlags;


struct TextureRegion
{
	i16 x, y, w, h;
	i32 index;
};

struct Sprite
{
	u32 flags;
	i32 sort;

	Vec2 pos;
	Vec2 size;
	Vec2 anchor;
	Vec2 center;
	Vec2 rotation;
	TextureRegion texture;
	Color color;
};

union SpriteFreeList
{
	struct
	{
		u32 is_link;
		i32 next;
	} link;
	Sprite s;
};

typedef enum RenderGroupKind
{
	Group_RetainedStream,
	Group_RetainedDynamic,
	Group_Immediate
} RenderGroupKind;

union ShaderUniformLocations
{
	struct {
		i32 u_texture_size;
		i32 u_ortho_matrix;
		i32 u_scale;
		i32 u_index_mode;
		i32 u_tint;
	} default_prog;
};

struct ShaderProgram
{
	u32 program;
	string vert_src;
	string frag_src;
	i64 vert_last_edited_time;
	i64 frag_last_edited_time;

	i32 kind;
	ShaderUniformLocations uniforms;
};

struct RenderGroup
{
	i32 index;
	i32 kind;

	ShaderProgram* shader;

	u32 vao;
	u32 vbo;
	u32 texture;
	i32 texture_width;
	i32 texture_height;
	Vec2 inv_texture_size;

	u32 draw_mode;

	Vec2 offset;
	f32 scale;

	f32 ortho[16];
	Vec4 tint;

	SpriteFreeList* free_list;
	isize last_filled;
	
	i32 dirty;
	i32 always_dirty;

	isize count, capacity;
	Sprite* sprites;
};
 
struct GlobalRenderer
{
	MemoryPool* shader_pool;
	ShaderProgram** shaders;
	isize shader_count, shader_capacity;

	MemoryPool* group_pool;
	RenderGroup** groups;
	isize group_count, group_capacity;
};
#endif

TextureRegion texture_region(i16 x, i16 y, i16 w, i16 h, i32 index)
{
	TextureRegion t;
	t.x = x;
	t.y = y;
	t.w = w;
	t.h = h;
	t.index = index;
	return t;
}

void sprite_init(Sprite* s)
{
	s->flags = 0;
	s->sort = 0;
	s->pos = v2(0, 0);
	s->size = v2(16, 16);
	s->center = v2(0, 0);
	s->anchor = v2(0, 0);
	s->rotation = v2(1, 0);
	s->texture = texture_region(0, 0, 16, 16, 0);
	s->color = color_from_rgba(0xFFFFFFFF);
}

Sprite sprite_create(Vec2 pos, TextureRegion texture, u32 flags)
{
	Sprite s;
	sprite_init(&s);
	s.pos = pos;
	s.texture = texture;
	s.size = v2(texture.w, texture.h);
	s.flags = flags;
	return s;
}

/*
void rgroup_init(RenderGroup* group, Sprite* sprites, isize capacity, i32 kind, Renderer* r)
{
	group->sprites = sprites;
	group->capacity = capacity;
	group->free_list = (SpriteFreeList*)sprites;
	group->free_list->link.next = 1;
	group->count = 0;
	group->last_filled = 0;
	group->kind = kind;

	group->texture = r->texture;
	group->texture_width = r->texture_width;
	group->texture_height = r->texture_height; 
	group->inv_texture_size = r->inv_texture_size;

	group->draw_mode = GL_TRIANGLE_STRIP;

	group->offset = v2(0, 0);
	group->scale = 1.0f;
	group->always_dirty = 1;

	group->index = r->group_count;
	group->vbo = r->vbo;
	group->vao = r->vao;

	group->tint = v4(1, 1, 1, 1);

	if(kind <= Group_RetainedDynamic) {
		_render_group_retained_init(group, r);
	} 
}

void _render_group_retained_init(RenderGroup* g, Renderer* r)
{
	SpriteFreeList* handle = NULL;
	for(isize i = 0; i < g->capacity - 1; ++i) {
		handle = (SpriteFreeList*)(g->sprites + i);
		handle->link.is_link = SpriteFlag_Null;
		handle->link.next = i + 1;
	}
	handle = (SpriteFreeList*)(g->sprites + g->capacity - 1);
	handle->link.is_link = SpriteFlag_Null;
	handle->link.next = -1;
	if(g->kind == Group_RetainedDynamic) {
		g->always_dirty = 0;
		g->dirty = 1;

		ogl_create_vao_vbo(&g->vao, &g->vbo);
	}
}


void render_set_texture(Renderer* r, u32 texture, i32 w, i32 h)
{
	r->texture = texture;
	r->texture_width = w;
	r->texture_height = h;
	r->inv_texture_size = v2(1.0f/w, 1.0f/h);
}

void ogl_create_vao_vbo(u32* vao, u32* vbo)
{
	glGenVertexArrays(1, vao);
	glBindVertexArray(*vao);
	glGenBuffers(1, vbo);
	glBindBuffer(GL_ARRAY_BUFFER, *vbo);

	usize stride = sizeof(Sprite);
	usize vertex_count = 1;
	isize array_index = 0;

#define Normalize GL_FALSE
#define _vertexAttrib(size, type, name) \
	do { glVertexAttribPointer(array_index, size, type, Normalize, stride, &((Sprite*)NULL)->name); \
	glEnableVertexAttribArray(array_index); \
	glVertexAttribDivisor(array_index, vertex_count); \
	array_index++; } while(0)

	//You have to use the special "IPointer" variant for integers
	glVertexAttribIPointer(array_index, 1, GL_UNSIGNED_INT, stride, &((Sprite*)NULL)->flags);
	glEnableVertexAttribArray(array_index);
	glVertexAttribDivisor(array_index, vertex_count);
	array_index++;

	//_vertexAttrib(1, GL_FLOAT, sort);
	_vertexAttrib(2, GL_FLOAT, pos);
	_vertexAttrib(2, GL_FLOAT, size);
	_vertexAttrib(2, GL_FLOAT, center);
	_vertexAttrib(2, GL_FLOAT, rotation);
	_vertexAttrib(4, GL_FLOAT, texture);
	_vertexAttrib(4, GL_FLOAT, color);
	_vertexAttrib(4, GL_FLOAT, corners);
	_vertexAttrib(4, GL_FLOAT, corners[2]);
#undef Normalize
#undef _vertexAttrib

	glBindVertexArray(0);
}


u32 ogl_create_shader(string src, u32 shader_type, i32* success_out)
{
	u32 shader = glCreateShader(shader_type);
	glShaderSource(shader, 1, &src, NULL);
	glCompileShader(shader);

	u32 success = 0;
	glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
	if(!success) {
		i32 log_size;
		char shader_log[4096];
		glGetShaderInfoLog(shader, 4096, &log_size, shader_log);
		log_error("\n%s Shader Errors:\n%s\n\n", 
				shader_type == GL_VERTEX_SHADER ? "Vertex": 
				(shader_type == GL_FRAGMENT_SHADER ? "Fragment": "Unknown"),
				shader_log);
		if(success_out) *success_out = 0;
	}
	if(success_out) *success_out = 1;

	return shader;
}

u32 ogl_create_shader_program(u32 vert_shader, u32 frag_shader, i32* success_out)
{
	u32 prog = glCreatePogram();
	glAttachShader(prog, vert_shader);
	glAttachShader(prog, frag_shader);
	glLinkProgram(render->shaders);
	glUseProgram(render->shaders);
	//TODO(will) can you have errors at this stage?

	if(success_out) *success_out = 1;
	return prog;
}

u32 ogl_create_shader_program_from_source(string vert, string frag, i32* success_out) 
{
	i32 total_success = 1;
	i32 success = 0;
	
	u32 vert_shader = ogl_create_shader(vert, GL_VERTEX_SHADER, &success);
	total_success = success && total_success;

	u32 frag_shader = ogl_create_shader(frag, GL_FRAGMENT_SHADER, &success);
	total_success = success && total_success;

	u32 program = ogl_create_program(vert_shader, frag_shader, &success);
	total_success = success && total_success;

	glDeleteShader(vert_shader);
	glDeleteShader(frag_shader);
	if(*success_out) *success_out = total_success;
	return program;
}

/*
#define ogl_store_uniform_location(pre, name, prog) pre##name = glGetUniformLocation(prog, #name)
void renderer_init(Renderer* render, string vert_source, string frag_source, i32 group_count, MemoryArena* arena)
{
	render->group_pool = pool_new("GroupPool", sizeof(RenderGroup) + sizeof(Sprite) * 8192, group_count, arena);
	render->groups = arena_push(arena, sizeof(RenderGroup*) * group_count); 
	render->group_count = 0;
	render->group_capacity = group_count;

	ogl_create_vao_vbo(&render->vao, &render->vbo);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	render->shaders = ogl_create_shader_program_from_source(vert_source, frag_source, NULL);

#if 0
	render->u_texture_size = glGetUniformLocation(render->shaders, "u_texture_size");
	render->u_ortho_matrix = glGetUniformLocation(render->shaders, "u_ortho_matrix");
	render->u_scale = glGetUniformLocation(render->shaders, "u_scale");
	render->u_index_mode = glGetUniformLocation(render->shaders, "u_index_mode");
	render->u_tint = glGetUniformLocation(render->shaders, "u_tint");
#endif

	ogl_store_uniform_location(render->, u_texture_size, render->shaders);
	ogl_store_uniform_location(render->, u_ortho_matrix, render->shaders);
	ogl_store_uniform_location(render->, u_scale, render->shaders);
	ogl_store_uniform_location(render->, u_index_mode, render->shaders);
	ogl_store_uniform_location(render->, u_tint, render->shaders);
}


RenderGroup* render_add_group(Renderer* r, i32 kind)
{
	RenderGroup* g = pool_retrieve(r->group_pool);
	render_group_init(g, (void*)(g + 1), 4096, kind, r);
	r->groups[r->group_count++] = g;
	return g;
}

void render_remove_group(Renderer* r, RenderGroup* g)
{
	i32 index = g->index;
	if(g->vbo != r->vbo && g->vbo != 0) {
		glBindVertexArray(0);
		glDeleteBuffers(1, &g->vbo);
		glDeleteVertexArrays(1, &g->vao);

	}

	pool_release(r->group_pool, &g);
	r->group_count--;
	r->groups[index] = r->groups[r->group_count];
}


RenderGroup* get_group(Renderer* r, i32 i) 
{
	if(i < 0 || i >= r->group_count) return NULL;
	return r->groups[i];
}
*/

Sprite* rgroup_sprite(RenderGroup* group)
{
	if(group->kind == Group_Immediate) {
		group->last_filled = group->count;
		Sprite* s = group->sprites + group->count++;
		sprite_init(s);
		return s;
	} else {

		Sprite* s = &group->free_list->s;
		isize index = ((isize)group->free_list - (isize)group->sprites) / sizeof(Sprite);
		group->free_list = (SpriteFreeList*)group->sprites + group->free_list->link.next;

		sprite_init(s);
		group->count++;
		if(index > group->last_filled) {
			group->last_filled = index;
		}
		group->dirty = 1;

		return s;
	}
}

Sprite* rgroup_sprite_create(RenderGroup* group, Vec2 pos, TextureRegion texture)
{
	Sprite* s = rgroup_sprite(group);
	*s = sprite_create(pos, texture, 0);
	//v2_mul_ip(&s->texture.pos, group->inv_texture_size);
	//v2_mul_ip(&s->texture.size, group->inv_texture_size);
	return s;
}

Sprite* rgroup_sprite_box(RenderGroup* group, Vec2 pos, Vec2 size, Color color, u32 flags)
{
	Sprite* s = rgroup_sprite(group);
	*s = sprite_create(pos, texture_region(0, 0, 0, 0, 0), SpriteFlag_Primitive | flags);
	s->color = color;
	s->size = size;

	return s;
}

/*
Sprite* render_group_query(RenderGroup* g, Vec2 local_pt)
{
	Vec2 corners[4];
	for(isize i = g->last_filled; i >= 0; --i) {
		Sprite* s = g->sprites + i;
		if(HasFlag(s->flags, SpriteFlag_Null)) continue;
		sprite_corners(s, corners);
		if(poly_contains_point(local_pt, 4, corners)) {
			return s;
		}
	}

	return NULL;
}
*/

/*
isize render_group_query_aabb(RenderGroup* g, Rect2 q, isize max_out, Sprite** out)
{
	v2_scale_ip(&q.size, 0.5f);
	Vec2 tl = v2_sub(q.pos, q.size), br = v2_add(q.pos, q.size);
	Vec2 qcorners[4];
	qcorners[0] = tl;
	qcorners[1] = v2(br.x, tl.y);
	qcorners[2] = br;
	qcorners[3] = v2(tl.x, br.y);
	isize len = 0;
	for(isize i = g->last_filled; i >= 0; --i) {
		Sprite* s = g->sprites + i;
		if(HasFlag(s->flags, SpriteFlag_Null)) continue;
		Rect2 paabb = sprite_aabb(s);
		v2_scale_ip(&paabb.size, 0.5f);
		if(aabb_intersect(&q, &paabb)) {
			if(sprite_is_aabb(s)) {
				if(len + 1 >= max_out) return len;
				out[len++] = s;
			} else if(aabb_contains(&q, &paabb)) {
				if(len + 1 >= max_out) return len;
				out[len++] = s;
			} else {
				Vec2 pcorners[4];
				sprite_corners(s, pcorners);

				if(poly_intersect(4, qcorners, 4, pcorners)) {
					if(len + 1 >= max_out) return len;
					out[len++] = s;
				}
			}
		}
	}
	return len;
}
*/


void render_remove_sprite(RenderGroup* group, Sprite* s)
{
	if(group->kind == Group_Immediate) {
		return;
	}
	isize sp = (isize)s;
	isize sprites = (isize)group->sprites;
	if(sp < sprites || sp > sprites + group->capacity * isizeof(Sprite)) {
		return;
	}

	//okay, so we know s is in the pool
	group->count--;
	group->dirty = 1;
	isize index = (sp - sprites) / sizeof(Sprite);
	SpriteFreeList* l = (void*)s;
	l->link.is_link = SpriteFlag_Null;
	l->link.next = ((isize)group->free_list - sprites) / sizeof(Sprite);
	group->free_list = l;

	printf("Prev LF: %d ", group->last_filled);
	if(index == group->last_filled) {
		index--;
		while(group->sprites[index].flags & SpriteFlag_Null) index--;
		group->last_filled = index;
	}
	printf("Now: %d\n", group->last_filled);
}

void render_calculate_ortho_matrix(f32* ortho, Vec4 screen, float nearplane, float farplane)
{
	//v4 == x, y, z, w;
	//   == l, t, r, b
	ortho[0] = 2.0f / (screen.z - screen.x);
	ortho[1] = 0;
	ortho[2] = 0;
	ortho[3] = -1.0f * (screen.x + screen.z) / (screen.z - screen.x);

	ortho[4] = 0;
	ortho[5] = 2.0f / (screen.y - screen.w);
	ortho[6] = 0;
	ortho[7] = -1 * (screen.y + screen.w) / (screen.y - screen.w);

	ortho[8] = 0;
	ortho[9] = 0;
	ortho[10] = (-2.0f / (farplane - nearplane));
	ortho[11] = (-1.0f * (farplane + nearplane) / (farplane - nearplane));

	ortho[12] = 0;
	ortho[13] = 0;
	ortho[14] = 0;
	ortho[15] = 1.0f;
}


void render_clear(RenderGroup* group)
{
	group->count = 0;

	if(group->kind <= Group_RetainedDynamic) {
		SpriteFreeList* handle = group->free_list;
		for(isize i = 0; i < group->last_filled - 1; ++i) {
			sprite_init(&handle->s);
			handle->link.is_link = SpriteFlag_Null;
			handle->link.next = i + 1;
			handle++;
		}
		handle->link.next = -1;
		group->last_filled = 0;
	}
}

/*
void render_draw(Renderer* r, RenderGroup* group, Vec2 size, f32 scale)
{
	if(group->count == 0) return;
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glUseProgram(r->shaders);
	group->offset.x = roundf(group->offset.x);
	group->offset.y = roundf(group->offset.y);
	scale /= group->scale;
	v2_scale_ip(&size, scale);

	glUniform1f(r->u_scale, scale);
	glUniform2f(r->u_texture_size, group->texture_width, group->texture_height);
	glUniform4f(r->u_tint, group->tint.x, group->tint.y, group->tint.z, group->tint.w);

	Vec4 screen = v4(
		group->offset.x, group->offset.y,
		group->offset.x + size.x, group->offset.y + size.y);
	render_calculate_ortho_matrix(group->ortho, screen, 1, -1);
	glUniformMatrix4fv(r->u_ortho_matrix,
		1, GL_FALSE, group->ortho);

	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, group->texture);
	glBindVertexArray(group->vao);
	glBindBuffer(GL_ARRAY_BUFFER, group->vbo);

	if(group->always_dirty) group->dirty = 1;
	if(group->dirty) {
		u32 draw = group->kind == Group_RetainedDynamic ? GL_DYNAMIC_DRAW : GL_STREAM_DRAW;
		glBufferData(GL_ARRAY_BUFFER,
			(group->last_filled+1) * sizeof(Sprite),
			group->sprites,
			draw);
		group->dirty = 0;
	}

	if(group->draw_mode == GL_TRIANGLE_STRIP) {
		glUniform1i(r->u_index_mode, 0);
	} else {
		glUniform1i(r->u_index_mode, 1);
	}

	glDrawArraysInstanced(group->draw_mode, 0, 4, group->last_filled+1);

	glBindVertexArray(0);
	
	if(group->kind == Group_Immediate) {
		render_clear(group);
	}
}
*/

u32 ogl_add_texture(u8* data, isize w, isize h)
{
	u32 texture;
	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	if(w <= 0) w = 1;
	if(h <= 0) h = 1;
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);

	u32 error = glGetError();
	if(error != 0) {
		printf("There was an error adding a texture: %d \n", error);
	}

	glBindTexture(GL_TEXTURE_2D, 0);
	return texture;
}

#if 0 
// we load everything from memory
u32 ogl_load_texture(char* filename, isize* w_o, isize* h_o)
{
	int w, h, n;
	char file[4096];
	char* base_path = SDL_GetBasePath();
	isize len = snprintf(file, 4096, "%s%s", base_path, filename);
	u8* data = (u8*)stbi_load(file, &w, &h, &n, STBI_rgb_alpha);
	u32 texture = ogl_add_texture(data, w, h);
	if(texture == 0) {
		log_error("Error: could not load %s \n", filename);
	}
	if(w_o != NULL) *w_o = w;
	if(h_o != NULL) *h_o = h;

	SDL_free(base_path);
	STBI_FREE(data);
	return texture;
}
#endif

u32 ogl_load_texture_from_memory(u8* buf, i32 size, i32* x, i32* y)
{
	i32 w, h, n;
	u8* data = stbi_load_from_memory(buf, size, &w, &h, &n, STBI_rgb_alpha);
	//printf("%s\n", stbi_failure_reason());
	
	u32 texture = ogl_add_texture(data, w, h);
	if(texture == 0) {
		log_error("Error loading texture\n");
	}
	if(x) *x = w;
	if(y) *y = h;

	free(data);
	return texture;
}

Sprite sprite_make_box(Vec2 pos, Vec2 size, Color color, u32 flags)
{
	Sprite s;
	sprite_init(&s);
	s.pos = pos;
	s.size = size;
	s.color = color;
	s.flags = flags | SpriteFlag_Primitive;
	return s;
}


Sprite sprite_make_line(Vec2 start, Vec2 end, Color color, i32 thickness, u32 flags)
{
	Vec2 dline;
	dline.x = end.x - start.x;
	dline.y = end.y - start.y;
	Sprite s;
	if(dline.y == 0) {
		if(dline.x < 0) {
			dline.x *= -1;
			Vec2 temp = end;
			end = start;
			start = temp;
		}
		Vec2 lstart = start;
		lstart.x += dline.x / 2.0f;
		s = sprite_make_box(lstart, v2(dline.x, thickness), color, flags);
	} else if(dline.x == 0) {
		if(dline.y < 0) {
			dline.y *= -1;
			Vec2 temp = end;
			end = start;
			start = temp;
		}
		Vec2 lstart = start;
		lstart.y += dline.y / 2;
		s = sprite_make_box(lstart, v2(thickness, dline.y), color, flags);
	} else {
		Vec2 lstart = start;
		f32 mag = v2_mag(dline);
		lstart.x += dline.x / 2.0f;
		lstart.y += dline.y / 2.0f;

		s = sprite_make_box(lstart, v2(mag, thickness), color, flags);
		f32 angle = atan2f(dline.y, dline.x);
		s.rotation = v2_from_angle(-angle, 1);
	}
	s.flags = flags;
	return s;
}

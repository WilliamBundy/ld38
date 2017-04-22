typedef struct MemoryArena MemoryArena;
typedef struct PoolHandle PoolHandle;
typedef struct MemoryPool MemoryPool;
typedef struct Vec2 Vec2;
typedef struct Vec3 Vec3;
typedef struct Vec4 Vec4;
typedef struct Vec2i Vec2i;
typedef struct Color Color;
typedef struct Rect2 Rect2;
typedef struct Rect3 Rect3;
typedef struct Rect2i Rect2i;
typedef HANDLE File;
typedef float f32;
typedef int i32;
typedef __m128 vf128;
typedef __m128i vi128;
struct MemoryArena
{
	string name;
	u8 *data;
	u8 *head;
	u8 *temp_head;
	isize size;
};
struct PoolHandle
{
	struct PoolHandle *next;
};
struct MemoryPool
{
	isize element_size;
	void *slots;
	isize count;
	isize capacity;
	string name;
	PoolHandle *free_list;
};
struct Vec2
{
	f32 x;
	f32 y;
};
struct Vec3
{
	f32 x;
	f32 y;
	f32 z;
};
struct Vec4
{
	f32 x;
	f32 y;
	f32 z;
	f32 w;
};
struct Vec2i
{
	i16 x;
	i16 y;
};
struct Color
{
	u8 r;
	u8 g;
	u8 b;
	u8 a;
};
struct Rect2
{
	Vec2 pos;
	Vec2 size;
};
struct Rect3
{
	Vec3 pos;
	Vec3 size;
};
struct Rect2i
{
	i16 x;
	i16 y;
	i16 w;
	i16 h;
};
size_t vfprintf(File file, string fmt, va_list args);
size_t fprintf(File file, string fmt, VariadicArgs);
size_t printf(string fmt, VariadicArgs);
void arena_init(MemoryArena* arena, string name, isize size);
MemoryArena* arena_bootstrap(string name, isize size);
void* arena_push(MemoryArena* arena, isize size);
void arena_start_temp(MemoryArena* arena);
void arena_end_temp(MemoryArena* arena);
void arena_clear(MemoryArena** arena);
void* arena_alloc_wrapper(isize size, void* userdata);
Allocator arena_allocator(MemoryArena* arena);
MemoryArena arena_free(MemoryArena* arena);
void pool_init(MemoryPool* pool, string name, isize element_size, isize capacity, MemoryArena* arena);
MemoryPool* pool_new(string name, isize element_size, isize capacity, MemoryArena* arena);
void* pool_retrieve(MemoryPool* pool);
void pool_release(MemoryPool* pool, void** iptr);
void pool_print(MemoryPool* pool);
void pool_clear(MemoryPool* pool, i8 clear);
f32 wbtm_logf(f32 x);
f32 wbtm_expf(f32 x);
f32 wbtm_sinf(f32 x);
f32 wbtm_cosf(f32 x);
f32 wbtm_tanf(f32 x);
f32 wbtm_ldexpf(f32 x, i32 e);
f32 wbtm_atan2f(f32 y, f32 x);
f32 wbtm_rsqrtf(f32 x);
f32 wbtm_sqrtf(f32 x);
f32 wbtm_ipowf(f32 x, i32 e);
f32 wbtm_powf(f32 x, f32 y);
i32 wbtm_floorf(f32 x);
i32 wbtm_ceilf(f32 x);
f32 wbtm_minf(f32 x, f32 y);
f32 wbtm_maxf(f32 x, f32 y);
f32 wbtm_clampf(f32 low, f32 high, f32 value);
f32 wbtm_absf(f32 x);
vf128 wbtm_sse2_abs_ps(vf128 x);
vf128 wbtm_sse2_min_ps(vf128 x, vf128 y);
vf128 wbtm_sse2_max_ps(vf128 x, vf128 y);
vf128 wbtm_sse2_clamp_ps(vf128 minx, vf128 maxx, vf128 value);
vf128 wbtm_sse2_pow_ps(vf128 x, vf128 e);
vf128 wbtm_sse2_ldexp_ps(vf128 x, vi128 e);
vf128 wbtm_sse2_rsqrt_ps(vf128 x);
vf128 wbtm_sse2_sqrt_ps(vf128 x);
vf128 wbtm_sse2_atan2_ps(vf128 y, vf128 x);
vf128 wbtm_sse2_log_ps(vf128 x);
vf128 wbtm_sse2_exp_ps(vf128 x);
vf128 wbtm_sse2_sin_ps(vf128 x);
vf128 wbtm_sse2_cos_ps(vf128 x);
void wbtm_sse2_sincos_ps(vf128 x, vf128* s, vf128* c);
Vec2 v2_world_to_local(Vec2 pt, Vec2 offset, f32 scale);
Vec2 v2_local_to_world(Vec2 pt, Vec2 offset, f32 scale);
Vec3 v3_v(Vec2 v, f32 z);
Vec3 v3(f32 x, f32 y, f32 z);
Vec3 v3_add(Vec3 a, Vec3 b);
Vec4 v4(f32 x, f32 y, f32 z, f32 w);
Vec2i v2i(i32 x, i32 y);
i32 f_segment_intersect(Vec2 a1, Vec2 a2, Vec2 b1, Vec2 b2, Vec2* result);
i32 poly_contains_point(Vec2 p, i32 side_count, Vec2* poly);
void convex_hull(i32 count, Vec2* points, i32* out_count, Vec2* out);
void ld38_main();
int main(int argc, char** argv);

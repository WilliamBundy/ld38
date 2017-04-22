
#ifndef _WB_RENDERER_IMPL_
typedef void wbRenderer;
typedef void wbPlatform;
#endif

wbRenderer* wbRendererCreate(wbPlatform* platform);

struct wbMiniSprite
{
	u16 flags;
	i16 sort;
	wbVec2i pos;
	wbVec2i size;
	wbColor color;
	wbRect2i texture;
};

struct wbRenderCommandHeader
{
	u32 flags;
	i32 sort;
};

struct wbSprite
{
	u32 flags;
	i32 sort;
	wbVec2 pos;
	wbVec2 size;
	wbVec2 anchor;
	wbVec2 center;
	wbVec2 rotation;
	wbColor color;
	wbTexture texture;
};

struct wbPrimitive
{
	u32 flags;
	i32 sort;
	i32 texture_index;
	wbColor color;
	wbVec2 xy[4];
	wbVec2i uv[4];
};



union wbRenderElement
{
	struct wbRenderCommandHeader;
	struct wbSprite sprite;
	struct wbPrimitive primitive;
	
	f32 f[16];
	i32 i[16];
};


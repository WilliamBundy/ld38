
#include <stdarg.h>
#include <limits.h>
#include <stdint.h>
#include <Windows.h>

typedef ptrdiff_t isize;
typedef unsigned char u8;

#include "thirdparty/wb_pdqsort_macro.c"

#define stbv_uint32_compare(x, y) ((x) < (y) ? -1: (x) > (y))

wbsort_CreateSort(uint32_t, stbv_uint32_compare, stbv_uint32_qsort);

#define stbv_point_compare(a, b) ((a).x < (b).x ? -1: (a).x > (b)->x)
struct Point;
wbsort_CreateSortPrototype(struct Point, stbv_point_sort);

#pragma function(memcmp)
int memcmp(const void* ptr1, const void* ptr2, size_t num)
{
	const u8* a = ptr1;
	const u8* b = ptr2;
	for(size_t i = 0; i < num; ++i) {
		if(a[i] != b[i]) return 0;
	}
	return 1;
}


#define WB_TM_IMPLEMENTATION
#include "wb_transcendental_math.c"

#define STB_SPRINTF_IMPLEMENTATION
#include "thirdparty/stb_sprintf.h"

#define NK_INCLUDE_FIXED_TYPES
#define NK_INCLUDE_STANDARD_VARARGS
#define NK_INCLUDE_VERTEX_BUFFER_OUTPUT
#define NK_INCLUDE_FONT_BAKING
#define NK_BUTTON_TRIGGER_ON_RELEASE
#define NK_IMPLEMENTATION
#define NK_SDL_GL3_IMPLEMENTATION

#define NK_VSNPRINTF stbsp_vsnprintf
#define NK_SQRT wbtm_sqrtf
#define NK_SIN wbtm_sinf
#define NK_COS wbtm_cosf
#define NK_MEMSET memset
#define NK_MEMCPY memcpy

#include "thirdparty/nuklear.h"

#define STB_IMAGE_IMPLEMENTATION
#define STBI_ONLY_PNG
#define STBI_NO_STDIO
#define STBI_NO_HDR
#define STBI_NO_LINEAR
#include "thirdparty/stb_image.h"

#define STB_VORBIS_NO_CRT
#define STB_VORBIS_NO_STDIO
#include "thirdparty/stb_vorbis.c"
wbsort_GenerateSort(Point, stbv_point_compare, stbv_point_sort);


#define WBGL_IMPLEMENTATION
#define WBGL_GL_VERSION_3
#include "thirdparty/wbgl.h"

#define MINIZ_NO_STDIO
//#include "thirdparty/miniz.h"
//#include "thirdparty/miniz.c"

#define DR_WAV_NO_STDIO
#define DR_WAV_IMPLEMENTATION
//#include "thirdparty/dr_wav.h"


#define STS_MIXER_IMPLEMENTATION
//#include "thirdparty/sts_mixer.h"


//#include <SDL.h>
//#include "thirdparty/nuklear_sdl_gl3.h"


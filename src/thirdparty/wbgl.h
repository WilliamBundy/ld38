
#ifndef WBGL_API
#define WBGL_API extern
#endif

#ifndef WBGL_LOAD_PROC_NAME
#define WBGL_LOAD_PROC_NAME wbgl_load
#endif 
typedef unsigned int  GLenum;
typedef float         GLfloat;
typedef int           GLint;
typedef int           GLsizei;
typedef unsigned int  GLbitfield;
typedef double        GLdouble;
typedef unsigned int  GLuint;
typedef unsigned char GLboolean;
typedef unsigned char GLubyte;
typedef char          GLchar;
typedef ptrdiff_t     GLintptr;
typedef ptrdiff_t     GLsizeiptr;
typedef void          GLvoid;
typedef float         GLclampf;
typedef struct __GLsync *GLsync;
typedef uint64_t GLuint64;

#ifdef WBGL_GL_VERSION_2_1
#ifndef wbgl_USE_GL_VERSION_2_1 
#define wbgl_USE_GL_VERSION_2_1 
#endif
#ifndef wbgl_USE_GL_VERSION_2_0 
#define wbgl_USE_GL_VERSION_2_0 
#endif
#ifndef wbgl_USE_GL_VERSION_1_5 
#define wbgl_USE_GL_VERSION_1_5 
#endif
#ifndef wbgl_USE_GL_VERSION_1_4 
#define wbgl_USE_GL_VERSION_1_4 
#endif
#ifndef wbgl_USE_GL_VERSION_1_3 
#define wbgl_USE_GL_VERSION_1_3 
#endif
#ifndef wbgl_USE_GL_VERSION_1_2 
#define wbgl_USE_GL_VERSION_1_2 
#endif
#ifndef wbgl_USE_GL_VERSION_1_1 
#define wbgl_USE_GL_VERSION_1_1 
#endif
#ifndef wbgl_USE_GL_VERSION_1_0 
#define wbgl_USE_GL_VERSION_1_0 
#endif
#endif

#ifdef WBGL_GL_VERSION_3_3
#ifndef wbgl_USE_GL_VERSION_3_3 
#define wbgl_USE_GL_VERSION_3_3 
#endif
#ifndef wbgl_USE_GL_VERSION_3_2 
#define wbgl_USE_GL_VERSION_3_2 
#endif
#ifndef wbgl_USE_GL_VERSION_3_1 
#define wbgl_USE_GL_VERSION_3_1 
#endif
#ifndef wbgl_USE_GL_VERSION_3_0 
#define wbgl_USE_GL_VERSION_3_0 
#endif
#ifndef wbgl_USE_GL_VERSION_2_1 
#define wbgl_USE_GL_VERSION_2_1 
#endif
#ifndef wbgl_USE_GL_VERSION_2_0 
#define wbgl_USE_GL_VERSION_2_0 
#endif
#ifndef wbgl_USE_GL_VERSION_1_5 
#define wbgl_USE_GL_VERSION_1_5 
#endif
#ifndef wbgl_USE_GL_VERSION_1_4 
#define wbgl_USE_GL_VERSION_1_4 
#endif
#ifndef wbgl_USE_GL_VERSION_1_3 
#define wbgl_USE_GL_VERSION_1_3 
#endif
#ifndef wbgl_USE_GL_VERSION_1_2 
#define wbgl_USE_GL_VERSION_1_2 
#endif
#ifndef wbgl_USE_GL_VERSION_1_1 
#define wbgl_USE_GL_VERSION_1_1 
#endif
#ifndef wbgl_USE_GL_VERSION_1_0 
#define wbgl_USE_GL_VERSION_1_0 
#endif
#endif

#ifdef WBGL_GL_VERSION_4_0
#ifndef wbgl_USE_GL_VERSION_4_0 
#define wbgl_USE_GL_VERSION_4_0 
#endif
#ifndef wbgl_USE_GL_VERSION_3_3 
#define wbgl_USE_GL_VERSION_3_3 
#endif
#ifndef wbgl_USE_GL_VERSION_3_2 
#define wbgl_USE_GL_VERSION_3_2 
#endif
#ifndef wbgl_USE_GL_VERSION_3_1 
#define wbgl_USE_GL_VERSION_3_1 
#endif
#ifndef wbgl_USE_GL_VERSION_3_0 
#define wbgl_USE_GL_VERSION_3_0 
#endif
#ifndef wbgl_USE_GL_VERSION_2_1 
#define wbgl_USE_GL_VERSION_2_1 
#endif
#ifndef wbgl_USE_GL_VERSION_2_0 
#define wbgl_USE_GL_VERSION_2_0 
#endif
#ifndef wbgl_USE_GL_VERSION_1_5 
#define wbgl_USE_GL_VERSION_1_5 
#endif
#ifndef wbgl_USE_GL_VERSION_1_4 
#define wbgl_USE_GL_VERSION_1_4 
#endif
#ifndef wbgl_USE_GL_VERSION_1_3 
#define wbgl_USE_GL_VERSION_1_3 
#endif
#ifndef wbgl_USE_GL_VERSION_1_2 
#define wbgl_USE_GL_VERSION_1_2 
#endif
#ifndef wbgl_USE_GL_VERSION_1_1 
#define wbgl_USE_GL_VERSION_1_1 
#endif
#ifndef wbgl_USE_GL_VERSION_1_0 
#define wbgl_USE_GL_VERSION_1_0 
#endif
#endif

#ifdef WBGL_GL_VERSION_4_5
#ifndef wbgl_USE_GL_VERSION_4_5 
#define wbgl_USE_GL_VERSION_4_5 
#endif
#ifndef wbgl_USE_GL_VERSION_4_4 
#define wbgl_USE_GL_VERSION_4_4 
#endif
#ifndef wbgl_USE_GL_VERSION_4_3 
#define wbgl_USE_GL_VERSION_4_3 
#endif
#ifndef wbgl_USE_GL_VERSION_4_2 
#define wbgl_USE_GL_VERSION_4_2 
#endif
#ifndef wbgl_USE_GL_VERSION_4_1 
#define wbgl_USE_GL_VERSION_4_1 
#endif
#ifndef wbgl_USE_GL_VERSION_4_0 
#define wbgl_USE_GL_VERSION_4_0 
#endif
#ifndef wbgl_USE_GL_VERSION_3_3 
#define wbgl_USE_GL_VERSION_3_3 
#endif
#ifndef wbgl_USE_GL_VERSION_3_2 
#define wbgl_USE_GL_VERSION_3_2 
#endif
#ifndef wbgl_USE_GL_VERSION_3_1 
#define wbgl_USE_GL_VERSION_3_1 
#endif
#ifndef wbgl_USE_GL_VERSION_3_0 
#define wbgl_USE_GL_VERSION_3_0 
#endif
#ifndef wbgl_USE_GL_VERSION_2_1 
#define wbgl_USE_GL_VERSION_2_1 
#endif
#ifndef wbgl_USE_GL_VERSION_2_0 
#define wbgl_USE_GL_VERSION_2_0 
#endif
#ifndef wbgl_USE_GL_VERSION_1_5 
#define wbgl_USE_GL_VERSION_1_5 
#endif
#ifndef wbgl_USE_GL_VERSION_1_4 
#define wbgl_USE_GL_VERSION_1_4 
#endif
#ifndef wbgl_USE_GL_VERSION_1_3 
#define wbgl_USE_GL_VERSION_1_3 
#endif
#ifndef wbgl_USE_GL_VERSION_1_2 
#define wbgl_USE_GL_VERSION_1_2 
#endif
#ifndef wbgl_USE_GL_VERSION_1_1 
#define wbgl_USE_GL_VERSION_1_1 
#endif
#ifndef wbgl_USE_GL_VERSION_1_0 
#define wbgl_USE_GL_VERSION_1_0 
#endif
#endif

#ifdef WBGL_ONLY_GL_VERSION_2
#ifndef wbgl_USE_GL_VERSION_1_1 
#define wbgl_USE_GL_VERSION_1_1 
#endif
#ifndef wbgl_USE_GL_VERSION_1_2 
#define wbgl_USE_GL_VERSION_1_2 
#endif
#ifndef wbgl_USE_GL_VERSION_1_3 
#define wbgl_USE_GL_VERSION_1_3 
#endif
#ifndef wbgl_USE_GL_VERSION_1_4 
#define wbgl_USE_GL_VERSION_1_4 
#endif
#ifndef wbgl_USE_GL_VERSION_1_5 
#define wbgl_USE_GL_VERSION_1_5 
#endif
#ifndef wbgl_USE_GL_VERSION_2_0 
#define wbgl_USE_GL_VERSION_2_0 
#endif
#ifndef wbgl_USE_GL_VERSION_2_1 
#define wbgl_USE_GL_VERSION_2_1 
#endif
#endif

#ifdef WBGL_ONLY_GL_VERSION_3
#ifndef wbgl_USE_GL_VERSION_3_0 
#define wbgl_USE_GL_VERSION_3_0 
#endif
#ifndef wbgl_USE_GL_VERSION_3_1 
#define wbgl_USE_GL_VERSION_3_1 
#endif
#ifndef wbgl_USE_GL_VERSION_3_2 
#define wbgl_USE_GL_VERSION_3_2 
#endif
#ifndef wbgl_USE_GL_VERSION_3_3 
#define wbgl_USE_GL_VERSION_3_3 
#endif
#endif

#ifdef WBGL_ONLY_GL_VERSION_4
#ifndef wbgl_USE_GL_VERSION_4_0 
#define wbgl_USE_GL_VERSION_4_0 
#endif
#ifndef wbgl_USE_GL_VERSION_4_1 
#define wbgl_USE_GL_VERSION_4_1 
#endif
#ifndef wbgl_USE_GL_VERSION_4_2 
#define wbgl_USE_GL_VERSION_4_2 
#endif
#ifndef wbgl_USE_GL_VERSION_4_3 
#define wbgl_USE_GL_VERSION_4_3 
#endif
#ifndef wbgl_USE_GL_VERSION_4_4 
#define wbgl_USE_GL_VERSION_4_4 
#endif
#ifndef wbgl_USE_GL_VERSION_4_5 
#define wbgl_USE_GL_VERSION_4_5 
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_1_0
#ifdef WBGL_NO_GL_VERSION_1_0
#undef wbgl_USE_GL_VERSION_1_0
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_1_1
#ifdef WBGL_NO_GL_VERSION_1_1
#undef wbgl_USE_GL_VERSION_1_1
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_1_2
#ifdef WBGL_NO_GL_VERSION_1_2
#undef wbgl_USE_GL_VERSION_1_2
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_1_3
#ifdef WBGL_NO_GL_VERSION_1_3
#undef wbgl_USE_GL_VERSION_1_3
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_1_4
#ifdef WBGL_NO_GL_VERSION_1_4
#undef wbgl_USE_GL_VERSION_1_4
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_1_5
#ifdef WBGL_NO_GL_VERSION_1_5
#undef wbgl_USE_GL_VERSION_1_5
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_2_0
#ifdef WBGL_NO_GL_VERSION_2_0
#undef wbgl_USE_GL_VERSION_2_0
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_2_1
#ifdef WBGL_NO_GL_VERSION_2_1
#undef wbgl_USE_GL_VERSION_2_1
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_3_0
#ifdef WBGL_NO_GL_VERSION_3_0
#undef wbgl_USE_GL_VERSION_3_0
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_3_1
#ifdef WBGL_NO_GL_VERSION_3_1
#undef wbgl_USE_GL_VERSION_3_1
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_3_2
#ifdef WBGL_NO_GL_VERSION_3_2
#undef wbgl_USE_GL_VERSION_3_2
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_3_3
#ifdef WBGL_NO_GL_VERSION_3_3
#undef wbgl_USE_GL_VERSION_3_3
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_4_0
#ifdef WBGL_NO_GL_VERSION_4_0
#undef wbgl_USE_GL_VERSION_4_0
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_4_1
#ifdef WBGL_NO_GL_VERSION_4_1
#undef wbgl_USE_GL_VERSION_4_1
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_4_2
#ifdef WBGL_NO_GL_VERSION_4_2
#undef wbgl_USE_GL_VERSION_4_2
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_4_3
#ifdef WBGL_NO_GL_VERSION_4_3
#undef wbgl_USE_GL_VERSION_4_3
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_4_4
#ifdef WBGL_NO_GL_VERSION_4_4
#undef wbgl_USE_GL_VERSION_4_4
#endif
#endif

#ifdef wbgl_USE_GL_VERSION_4_5
#ifdef WBGL_NO_GL_VERSION_4_5
#undef wbgl_USE_GL_VERSION_4_5
#endif
#endif

#ifndef GL_DEPTH_BUFFER_BIT
#define GL_DEPTH_BUFFER_BIT 0x00000100
#endif
#ifndef GL_STENCIL_BUFFER_BIT
#define GL_STENCIL_BUFFER_BIT 0x00000400
#endif
#ifndef GL_COLOR_BUFFER_BIT
#define GL_COLOR_BUFFER_BIT 0x00004000
#endif
#ifndef GL_FALSE
#define GL_FALSE 0
#endif
#ifndef GL_TRUE
#define GL_TRUE 1
#endif
#ifndef GL_POINTS
#define GL_POINTS 0x0000
#endif
#ifndef GL_LINES
#define GL_LINES 0x0001
#endif
#ifndef GL_LINE_LOOP
#define GL_LINE_LOOP 0x0002
#endif
#ifndef GL_LINE_STRIP
#define GL_LINE_STRIP 0x0003
#endif
#ifndef GL_TRIANGLES
#define GL_TRIANGLES 0x0004
#endif
#ifndef GL_TRIANGLE_STRIP
#define GL_TRIANGLE_STRIP 0x0005
#endif
#ifndef GL_TRIANGLE_FAN
#define GL_TRIANGLE_FAN 0x0006
#endif
#ifndef GL_QUADS
#define GL_QUADS 0x0007
#endif
#ifndef GL_NEVER
#define GL_NEVER 0x0200
#endif
#ifndef GL_LESS
#define GL_LESS 0x0201
#endif
#ifndef GL_EQUAL
#define GL_EQUAL 0x0202
#endif
#ifndef GL_LEQUAL
#define GL_LEQUAL 0x0203
#endif
#ifndef GL_GREATER
#define GL_GREATER 0x0204
#endif
#ifndef GL_NOTEQUAL
#define GL_NOTEQUAL 0x0205
#endif
#ifndef GL_GEQUAL
#define GL_GEQUAL 0x0206
#endif
#ifndef GL_ALWAYS
#define GL_ALWAYS 0x0207
#endif
#ifndef GL_ZERO
#define GL_ZERO 0
#endif
#ifndef GL_ONE
#define GL_ONE 1
#endif
#ifndef GL_SRC_COLOR
#define GL_SRC_COLOR 0x0300
#endif
#ifndef GL_ONE_MINUS_SRC_COLOR
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#endif
#ifndef GL_SRC_ALPHA
#define GL_SRC_ALPHA 0x0302
#endif
#ifndef GL_ONE_MINUS_SRC_ALPHA
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#endif
#ifndef GL_DST_ALPHA
#define GL_DST_ALPHA 0x0304
#endif
#ifndef GL_ONE_MINUS_DST_ALPHA
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#endif
#ifndef GL_DST_COLOR
#define GL_DST_COLOR 0x0306
#endif
#ifndef GL_ONE_MINUS_DST_COLOR
#define GL_ONE_MINUS_DST_COLOR 0x0307
#endif
#ifndef GL_SRC_ALPHA_SATURATE
#define GL_SRC_ALPHA_SATURATE 0x0308
#endif
#ifndef GL_NONE
#define GL_NONE 0
#endif
#ifndef GL_FRONT_LEFT
#define GL_FRONT_LEFT 0x0400
#endif
#ifndef GL_FRONT_RIGHT
#define GL_FRONT_RIGHT 0x0401
#endif
#ifndef GL_BACK_LEFT
#define GL_BACK_LEFT 0x0402
#endif
#ifndef GL_BACK_RIGHT
#define GL_BACK_RIGHT 0x0403
#endif
#ifndef GL_FRONT
#define GL_FRONT 0x0404
#endif
#ifndef GL_BACK
#define GL_BACK 0x0405
#endif
#ifndef GL_LEFT
#define GL_LEFT 0x0406
#endif
#ifndef GL_RIGHT
#define GL_RIGHT 0x0407
#endif
#ifndef GL_FRONT_AND_BACK
#define GL_FRONT_AND_BACK 0x0408
#endif
#ifndef GL_NO_ERROR
#define GL_NO_ERROR 0
#endif
#ifndef GL_INVALID_ENUM
#define GL_INVALID_ENUM 0x0500
#endif
#ifndef GL_INVALID_VALUE
#define GL_INVALID_VALUE 0x0501
#endif
#ifndef GL_INVALID_OPERATION
#define GL_INVALID_OPERATION 0x0502
#endif
#ifndef GL_OUT_OF_MEMORY
#define GL_OUT_OF_MEMORY 0x0505
#endif
#ifndef GL_CW
#define GL_CW 0x0900
#endif
#ifndef GL_CCW
#define GL_CCW 0x0901
#endif
#ifndef GL_POINT_SIZE
#define GL_POINT_SIZE 0x0B11
#endif
#ifndef GL_POINT_SIZE_RANGE
#define GL_POINT_SIZE_RANGE 0x0B12
#endif
#ifndef GL_POINT_SIZE_GRANULARITY
#define GL_POINT_SIZE_GRANULARITY 0x0B13
#endif
#ifndef GL_LINE_SMOOTH
#define GL_LINE_SMOOTH 0x0B20
#endif
#ifndef GL_LINE_WIDTH
#define GL_LINE_WIDTH 0x0B21
#endif
#ifndef GL_LINE_WIDTH_RANGE
#define GL_LINE_WIDTH_RANGE 0x0B22
#endif
#ifndef GL_LINE_WIDTH_GRANULARITY
#define GL_LINE_WIDTH_GRANULARITY 0x0B23
#endif
#ifndef GL_POLYGON_MODE
#define GL_POLYGON_MODE 0x0B40
#endif
#ifndef GL_POLYGON_SMOOTH
#define GL_POLYGON_SMOOTH 0x0B41
#endif
#ifndef GL_CULL_FACE
#define GL_CULL_FACE 0x0B44
#endif
#ifndef GL_CULL_FACE_MODE
#define GL_CULL_FACE_MODE 0x0B45
#endif
#ifndef GL_FRONT_FACE
#define GL_FRONT_FACE 0x0B46
#endif
#ifndef GL_DEPTH_RANGE
#define GL_DEPTH_RANGE 0x0B70
#endif
#ifndef GL_DEPTH_TEST
#define GL_DEPTH_TEST 0x0B71
#endif
#ifndef GL_DEPTH_WRITEMASK
#define GL_DEPTH_WRITEMASK 0x0B72
#endif
#ifndef GL_DEPTH_CLEAR_VALUE
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#endif
#ifndef GL_DEPTH_FUNC
#define GL_DEPTH_FUNC 0x0B74
#endif
#ifndef GL_STENCIL_TEST
#define GL_STENCIL_TEST 0x0B90
#endif
#ifndef GL_STENCIL_CLEAR_VALUE
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#endif
#ifndef GL_STENCIL_FUNC
#define GL_STENCIL_FUNC 0x0B92
#endif
#ifndef GL_STENCIL_VALUE_MASK
#define GL_STENCIL_VALUE_MASK 0x0B93
#endif
#ifndef GL_STENCIL_FAIL
#define GL_STENCIL_FAIL 0x0B94
#endif
#ifndef GL_STENCIL_PASS_DEPTH_FAIL
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#endif
#ifndef GL_STENCIL_PASS_DEPTH_PASS
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#endif
#ifndef GL_STENCIL_REF
#define GL_STENCIL_REF 0x0B97
#endif
#ifndef GL_STENCIL_WRITEMASK
#define GL_STENCIL_WRITEMASK 0x0B98
#endif
#ifndef GL_VIEWPORT
#define GL_VIEWPORT 0x0BA2
#endif
#ifndef GL_DITHER
#define GL_DITHER 0x0BD0
#endif
#ifndef GL_BLEND_DST
#define GL_BLEND_DST 0x0BE0
#endif
#ifndef GL_BLEND_SRC
#define GL_BLEND_SRC 0x0BE1
#endif
#ifndef GL_BLEND
#define GL_BLEND 0x0BE2
#endif
#ifndef GL_LOGIC_OP_MODE
#define GL_LOGIC_OP_MODE 0x0BF0
#endif
#ifndef GL_COLOR_LOGIC_OP
#define GL_COLOR_LOGIC_OP 0x0BF2
#endif
#ifndef GL_DRAW_BUFFER
#define GL_DRAW_BUFFER 0x0C01
#endif
#ifndef GL_READ_BUFFER
#define GL_READ_BUFFER 0x0C02
#endif
#ifndef GL_SCISSOR_BOX
#define GL_SCISSOR_BOX 0x0C10
#endif
#ifndef GL_SCISSOR_TEST
#define GL_SCISSOR_TEST 0x0C11
#endif
#ifndef GL_COLOR_CLEAR_VALUE
#define GL_COLOR_CLEAR_VALUE 0x0C22
#endif
#ifndef GL_COLOR_WRITEMASK
#define GL_COLOR_WRITEMASK 0x0C23
#endif
#ifndef GL_DOUBLEBUFFER
#define GL_DOUBLEBUFFER 0x0C32
#endif
#ifndef GL_STEREO
#define GL_STEREO 0x0C33
#endif
#ifndef GL_LINE_SMOOTH_HINT
#define GL_LINE_SMOOTH_HINT 0x0C52
#endif
#ifndef GL_POLYGON_SMOOTH_HINT
#define GL_POLYGON_SMOOTH_HINT 0x0C53
#endif
#ifndef GL_UNPACK_SWAP_BYTES
#define GL_UNPACK_SWAP_BYTES 0x0CF0
#endif
#ifndef GL_UNPACK_LSB_FIRST
#define GL_UNPACK_LSB_FIRST 0x0CF1
#endif
#ifndef GL_UNPACK_ROW_LENGTH
#define GL_UNPACK_ROW_LENGTH 0x0CF2
#endif
#ifndef GL_UNPACK_SKIP_ROWS
#define GL_UNPACK_SKIP_ROWS 0x0CF3
#endif
#ifndef GL_UNPACK_SKIP_PIXELS
#define GL_UNPACK_SKIP_PIXELS 0x0CF4
#endif
#ifndef GL_UNPACK_ALIGNMENT
#define GL_UNPACK_ALIGNMENT 0x0CF5
#endif
#ifndef GL_PACK_SWAP_BYTES
#define GL_PACK_SWAP_BYTES 0x0D00
#endif
#ifndef GL_PACK_LSB_FIRST
#define GL_PACK_LSB_FIRST 0x0D01
#endif
#ifndef GL_PACK_ROW_LENGTH
#define GL_PACK_ROW_LENGTH 0x0D02
#endif
#ifndef GL_PACK_SKIP_ROWS
#define GL_PACK_SKIP_ROWS 0x0D03
#endif
#ifndef GL_PACK_SKIP_PIXELS
#define GL_PACK_SKIP_PIXELS 0x0D04
#endif
#ifndef GL_PACK_ALIGNMENT
#define GL_PACK_ALIGNMENT 0x0D05
#endif
#ifndef GL_MAX_TEXTURE_SIZE
#define GL_MAX_TEXTURE_SIZE 0x0D33
#endif
#ifndef GL_MAX_VIEWPORT_DIMS
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#endif
#ifndef GL_SUBPIXEL_BITS
#define GL_SUBPIXEL_BITS 0x0D50
#endif
#ifndef GL_TEXTURE_1D
#define GL_TEXTURE_1D 0x0DE0
#endif
#ifndef GL_TEXTURE_2D
#define GL_TEXTURE_2D 0x0DE1
#endif
#ifndef GL_POLYGON_OFFSET_UNITS
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#endif
#ifndef GL_POLYGON_OFFSET_POINT
#define GL_POLYGON_OFFSET_POINT 0x2A01
#endif
#ifndef GL_POLYGON_OFFSET_LINE
#define GL_POLYGON_OFFSET_LINE 0x2A02
#endif
#ifndef GL_POLYGON_OFFSET_FILL
#define GL_POLYGON_OFFSET_FILL 0x8037
#endif
#ifndef GL_POLYGON_OFFSET_FACTOR
#define GL_POLYGON_OFFSET_FACTOR 0x8038
#endif
#ifndef GL_TEXTURE_BINDING_1D
#define GL_TEXTURE_BINDING_1D 0x8068
#endif
#ifndef GL_TEXTURE_BINDING_2D
#define GL_TEXTURE_BINDING_2D 0x8069
#endif
#ifndef GL_TEXTURE_WIDTH
#define GL_TEXTURE_WIDTH 0x1000
#endif
#ifndef GL_TEXTURE_HEIGHT
#define GL_TEXTURE_HEIGHT 0x1001
#endif
#ifndef GL_TEXTURE_INTERNAL_FORMAT
#define GL_TEXTURE_INTERNAL_FORMAT 0x1003
#endif
#ifndef GL_TEXTURE_BORDER_COLOR
#define GL_TEXTURE_BORDER_COLOR 0x1004
#endif
#ifndef GL_TEXTURE_RED_SIZE
#define GL_TEXTURE_RED_SIZE 0x805C
#endif
#ifndef GL_TEXTURE_GREEN_SIZE
#define GL_TEXTURE_GREEN_SIZE 0x805D
#endif
#ifndef GL_TEXTURE_BLUE_SIZE
#define GL_TEXTURE_BLUE_SIZE 0x805E
#endif
#ifndef GL_TEXTURE_ALPHA_SIZE
#define GL_TEXTURE_ALPHA_SIZE 0x805F
#endif
#ifndef GL_DONT_CARE
#define GL_DONT_CARE 0x1100
#endif
#ifndef GL_FASTEST
#define GL_FASTEST 0x1101
#endif
#ifndef GL_NICEST
#define GL_NICEST 0x1102
#endif
#ifndef GL_BYTE
#define GL_BYTE 0x1400
#endif
#ifndef GL_UNSIGNED_BYTE
#define GL_UNSIGNED_BYTE 0x1401
#endif
#ifndef GL_SHORT
#define GL_SHORT 0x1402
#endif
#ifndef GL_UNSIGNED_SHORT
#define GL_UNSIGNED_SHORT 0x1403
#endif
#ifndef GL_INT
#define GL_INT 0x1404
#endif
#ifndef GL_UNSIGNED_INT
#define GL_UNSIGNED_INT 0x1405
#endif
#ifndef GL_FLOAT
#define GL_FLOAT 0x1406
#endif
#ifndef GL_DOUBLE
#define GL_DOUBLE 0x140A
#endif
#ifndef GL_STACK_OVERFLOW
#define GL_STACK_OVERFLOW 0x0503
#endif
#ifndef GL_STACK_UNDERFLOW
#define GL_STACK_UNDERFLOW 0x0504
#endif
#ifndef GL_CLEAR
#define GL_CLEAR 0x1500
#endif
#ifndef GL_AND
#define GL_AND 0x1501
#endif
#ifndef GL_AND_REVERSE
#define GL_AND_REVERSE 0x1502
#endif
#ifndef GL_COPY
#define GL_COPY 0x1503
#endif
#ifndef GL_AND_INVERTED
#define GL_AND_INVERTED 0x1504
#endif
#ifndef GL_NOOP
#define GL_NOOP 0x1505
#endif
#ifndef GL_XOR
#define GL_XOR 0x1506
#endif
#ifndef GL_OR
#define GL_OR 0x1507
#endif
#ifndef GL_NOR
#define GL_NOR 0x1508
#endif
#ifndef GL_EQUIV
#define GL_EQUIV 0x1509
#endif
#ifndef GL_INVERT
#define GL_INVERT 0x150A
#endif
#ifndef GL_OR_REVERSE
#define GL_OR_REVERSE 0x150B
#endif
#ifndef GL_COPY_INVERTED
#define GL_COPY_INVERTED 0x150C
#endif
#ifndef GL_OR_INVERTED
#define GL_OR_INVERTED 0x150D
#endif
#ifndef GL_NAND
#define GL_NAND 0x150E
#endif
#ifndef GL_SET
#define GL_SET 0x150F
#endif
#ifndef GL_TEXTURE
#define GL_TEXTURE 0x1702
#endif
#ifndef GL_COLOR
#define GL_COLOR 0x1800
#endif
#ifndef GL_DEPTH
#define GL_DEPTH 0x1801
#endif
#ifndef GL_STENCIL
#define GL_STENCIL 0x1802
#endif
#ifndef GL_STENCIL_INDEX
#define GL_STENCIL_INDEX 0x1901
#endif
#ifndef GL_DEPTH_COMPONENT
#define GL_DEPTH_COMPONENT 0x1902
#endif
#ifndef GL_RED
#define GL_RED 0x1903
#endif
#ifndef GL_GREEN
#define GL_GREEN 0x1904
#endif
#ifndef GL_BLUE
#define GL_BLUE 0x1905
#endif
#ifndef GL_ALPHA
#define GL_ALPHA 0x1906
#endif
#ifndef GL_RGB
#define GL_RGB 0x1907
#endif
#ifndef GL_RGBA
#define GL_RGBA 0x1908
#endif
#ifndef GL_POINT
#define GL_POINT 0x1B00
#endif
#ifndef GL_LINE
#define GL_LINE 0x1B01
#endif
#ifndef GL_FILL
#define GL_FILL 0x1B02
#endif
#ifndef GL_KEEP
#define GL_KEEP 0x1E00
#endif
#ifndef GL_REPLACE
#define GL_REPLACE 0x1E01
#endif
#ifndef GL_INCR
#define GL_INCR 0x1E02
#endif
#ifndef GL_DECR
#define GL_DECR 0x1E03
#endif
#ifndef GL_VENDOR
#define GL_VENDOR 0x1F00
#endif
#ifndef GL_RENDERER
#define GL_RENDERER 0x1F01
#endif
#ifndef GL_VERSION
#define GL_VERSION 0x1F02
#endif
#ifndef GL_EXTENSIONS
#define GL_EXTENSIONS 0x1F03
#endif
#ifndef GL_NEAREST
#define GL_NEAREST 0x2600
#endif
#ifndef GL_LINEAR
#define GL_LINEAR 0x2601
#endif
#ifndef GL_NEAREST_MIPMAP_NEAREST
#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#endif
#ifndef GL_LINEAR_MIPMAP_NEAREST
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#endif
#ifndef GL_NEAREST_MIPMAP_LINEAR
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#endif
#ifndef GL_LINEAR_MIPMAP_LINEAR
#define GL_LINEAR_MIPMAP_LINEAR 0x2703
#endif
#ifndef GL_TEXTURE_MAG_FILTER
#define GL_TEXTURE_MAG_FILTER 0x2800
#endif
#ifndef GL_TEXTURE_MIN_FILTER
#define GL_TEXTURE_MIN_FILTER 0x2801
#endif
#ifndef GL_TEXTURE_WRAP_S
#define GL_TEXTURE_WRAP_S 0x2802
#endif
#ifndef GL_TEXTURE_WRAP_T
#define GL_TEXTURE_WRAP_T 0x2803
#endif
#ifndef GL_PROXY_TEXTURE_1D
#define GL_PROXY_TEXTURE_1D 0x8063
#endif
#ifndef GL_PROXY_TEXTURE_2D
#define GL_PROXY_TEXTURE_2D 0x8064
#endif
#ifndef GL_REPEAT
#define GL_REPEAT 0x2901
#endif
#ifndef GL_R3_G3_B2
#define GL_R3_G3_B2 0x2A10
#endif
#ifndef GL_RGB4
#define GL_RGB4 0x804F
#endif
#ifndef GL_RGB5
#define GL_RGB5 0x8050
#endif
#ifndef GL_RGB8
#define GL_RGB8 0x8051
#endif
#ifndef GL_RGB10
#define GL_RGB10 0x8052
#endif
#ifndef GL_RGB12
#define GL_RGB12 0x8053
#endif
#ifndef GL_RGB16
#define GL_RGB16 0x8054
#endif
#ifndef GL_RGBA2
#define GL_RGBA2 0x8055
#endif
#ifndef GL_RGBA4
#define GL_RGBA4 0x8056
#endif
#ifndef GL_RGB5_A1
#define GL_RGB5_A1 0x8057
#endif
#ifndef GL_RGBA8
#define GL_RGBA8 0x8058
#endif
#ifndef GL_RGB10_A2
#define GL_RGB10_A2 0x8059
#endif
#ifndef GL_RGBA12
#define GL_RGBA12 0x805A
#endif
#ifndef GL_RGBA16
#define GL_RGBA16 0x805B
#endif
#ifndef GL_CURRENT_BIT
#define GL_CURRENT_BIT 0x00000001
#endif
#ifndef GL_POINT_BIT
#define GL_POINT_BIT 0x00000002
#endif
#ifndef GL_LINE_BIT
#define GL_LINE_BIT 0x00000004
#endif
#ifndef GL_POLYGON_BIT
#define GL_POLYGON_BIT 0x00000008
#endif
#ifndef GL_POLYGON_STIPPLE_BIT
#define GL_POLYGON_STIPPLE_BIT 0x00000010
#endif
#ifndef GL_PIXEL_MODE_BIT
#define GL_PIXEL_MODE_BIT 0x00000020
#endif
#ifndef GL_LIGHTING_BIT
#define GL_LIGHTING_BIT 0x00000040
#endif
#ifndef GL_FOG_BIT
#define GL_FOG_BIT 0x00000080
#endif
#ifndef GL_ACCUM_BUFFER_BIT
#define GL_ACCUM_BUFFER_BIT 0x00000200
#endif
#ifndef GL_VIEWPORT_BIT
#define GL_VIEWPORT_BIT 0x00000800
#endif
#ifndef GL_TRANSFORM_BIT
#define GL_TRANSFORM_BIT 0x00001000
#endif
#ifndef GL_ENABLE_BIT
#define GL_ENABLE_BIT 0x00002000
#endif
#ifndef GL_HINT_BIT
#define GL_HINT_BIT 0x00008000
#endif
#ifndef GL_EVAL_BIT
#define GL_EVAL_BIT 0x00010000
#endif
#ifndef GL_LIST_BIT
#define GL_LIST_BIT 0x00020000
#endif
#ifndef GL_TEXTURE_BIT
#define GL_TEXTURE_BIT 0x00040000
#endif
#ifndef GL_SCISSOR_BIT
#define GL_SCISSOR_BIT 0x00080000
#endif
#ifndef GL_ALL_ATTRIB_BITS
#define GL_ALL_ATTRIB_BITS 0xFFFFFFFF
#endif
#ifndef GL_CLIENT_PIXEL_STORE_BIT
#define GL_CLIENT_PIXEL_STORE_BIT 0x00000001
#endif
#ifndef GL_CLIENT_VERTEX_ARRAY_BIT
#define GL_CLIENT_VERTEX_ARRAY_BIT 0x00000002
#endif
#ifndef GL_CLIENT_ALL_ATTRIB_BITS
#define GL_CLIENT_ALL_ATTRIB_BITS 0xFFFFFFFF
#endif
#ifndef GL_QUAD_STRIP
#define GL_QUAD_STRIP 0x0008
#endif
#ifndef GL_POLYGON
#define GL_POLYGON 0x0009
#endif
#ifndef GL_ACCUM
#define GL_ACCUM 0x0100
#endif
#ifndef GL_LOAD
#define GL_LOAD 0x0101
#endif
#ifndef GL_RETURN
#define GL_RETURN 0x0102
#endif
#ifndef GL_MULT
#define GL_MULT 0x0103
#endif
#ifndef GL_ADD
#define GL_ADD 0x0104
#endif
#ifndef GL_AUX0
#define GL_AUX0 0x0409
#endif
#ifndef GL_AUX1
#define GL_AUX1 0x040A
#endif
#ifndef GL_AUX2
#define GL_AUX2 0x040B
#endif
#ifndef GL_AUX3
#define GL_AUX3 0x040C
#endif
#ifndef GL_2D
#define GL_2D 0x0600
#endif
#ifndef GL_3D
#define GL_3D 0x0601
#endif
#ifndef GL_3D_COLOR
#define GL_3D_COLOR 0x0602
#endif
#ifndef GL_3D_COLOR_TEXTURE
#define GL_3D_COLOR_TEXTURE 0x0603
#endif
#ifndef GL_4D_COLOR_TEXTURE
#define GL_4D_COLOR_TEXTURE 0x0604
#endif
#ifndef GL_PASS_THROUGH_TOKEN
#define GL_PASS_THROUGH_TOKEN 0x0700
#endif
#ifndef GL_POINT_TOKEN
#define GL_POINT_TOKEN 0x0701
#endif
#ifndef GL_LINE_TOKEN
#define GL_LINE_TOKEN 0x0702
#endif
#ifndef GL_POLYGON_TOKEN
#define GL_POLYGON_TOKEN 0x0703
#endif
#ifndef GL_BITMAP_TOKEN
#define GL_BITMAP_TOKEN 0x0704
#endif
#ifndef GL_DRAW_PIXEL_TOKEN
#define GL_DRAW_PIXEL_TOKEN 0x0705
#endif
#ifndef GL_COPY_PIXEL_TOKEN
#define GL_COPY_PIXEL_TOKEN 0x0706
#endif
#ifndef GL_LINE_RESET_TOKEN
#define GL_LINE_RESET_TOKEN 0x0707
#endif
#ifndef GL_EXP
#define GL_EXP 0x0800
#endif
#ifndef GL_EXP2
#define GL_EXP2 0x0801
#endif
#ifndef GL_COEFF
#define GL_COEFF 0x0A00
#endif
#ifndef GL_ORDER
#define GL_ORDER 0x0A01
#endif
#ifndef GL_DOMAIN
#define GL_DOMAIN 0x0A02
#endif
#ifndef GL_PIXEL_MAP_I_TO_I
#define GL_PIXEL_MAP_I_TO_I 0x0C70
#endif
#ifndef GL_PIXEL_MAP_S_TO_S
#define GL_PIXEL_MAP_S_TO_S 0x0C71
#endif
#ifndef GL_PIXEL_MAP_I_TO_R
#define GL_PIXEL_MAP_I_TO_R 0x0C72
#endif
#ifndef GL_PIXEL_MAP_I_TO_G
#define GL_PIXEL_MAP_I_TO_G 0x0C73
#endif
#ifndef GL_PIXEL_MAP_I_TO_B
#define GL_PIXEL_MAP_I_TO_B 0x0C74
#endif
#ifndef GL_PIXEL_MAP_I_TO_A
#define GL_PIXEL_MAP_I_TO_A 0x0C75
#endif
#ifndef GL_PIXEL_MAP_R_TO_R
#define GL_PIXEL_MAP_R_TO_R 0x0C76
#endif
#ifndef GL_PIXEL_MAP_G_TO_G
#define GL_PIXEL_MAP_G_TO_G 0x0C77
#endif
#ifndef GL_PIXEL_MAP_B_TO_B
#define GL_PIXEL_MAP_B_TO_B 0x0C78
#endif
#ifndef GL_PIXEL_MAP_A_TO_A
#define GL_PIXEL_MAP_A_TO_A 0x0C79
#endif
#ifndef GL_VERTEX_ARRAY_POINTER
#define GL_VERTEX_ARRAY_POINTER 0x808E
#endif
#ifndef GL_NORMAL_ARRAY_POINTER
#define GL_NORMAL_ARRAY_POINTER 0x808F
#endif
#ifndef GL_COLOR_ARRAY_POINTER
#define GL_COLOR_ARRAY_POINTER 0x8090
#endif
#ifndef GL_INDEX_ARRAY_POINTER
#define GL_INDEX_ARRAY_POINTER 0x8091
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_POINTER
#define GL_TEXTURE_COORD_ARRAY_POINTER 0x8092
#endif
#ifndef GL_EDGE_FLAG_ARRAY_POINTER
#define GL_EDGE_FLAG_ARRAY_POINTER 0x8093
#endif
#ifndef GL_FEEDBACK_BUFFER_POINTER
#define GL_FEEDBACK_BUFFER_POINTER 0x0DF0
#endif
#ifndef GL_SELECTION_BUFFER_POINTER
#define GL_SELECTION_BUFFER_POINTER 0x0DF3
#endif
#ifndef GL_CURRENT_COLOR
#define GL_CURRENT_COLOR 0x0B00
#endif
#ifndef GL_CURRENT_INDEX
#define GL_CURRENT_INDEX 0x0B01
#endif
#ifndef GL_CURRENT_NORMAL
#define GL_CURRENT_NORMAL 0x0B02
#endif
#ifndef GL_CURRENT_TEXTURE_COORDS
#define GL_CURRENT_TEXTURE_COORDS 0x0B03
#endif
#ifndef GL_CURRENT_RASTER_COLOR
#define GL_CURRENT_RASTER_COLOR 0x0B04
#endif
#ifndef GL_CURRENT_RASTER_INDEX
#define GL_CURRENT_RASTER_INDEX 0x0B05
#endif
#ifndef GL_CURRENT_RASTER_TEXTURE_COORDS
#define GL_CURRENT_RASTER_TEXTURE_COORDS 0x0B06
#endif
#ifndef GL_CURRENT_RASTER_POSITION
#define GL_CURRENT_RASTER_POSITION 0x0B07
#endif
#ifndef GL_CURRENT_RASTER_POSITION_VALID
#define GL_CURRENT_RASTER_POSITION_VALID 0x0B08
#endif
#ifndef GL_CURRENT_RASTER_DISTANCE
#define GL_CURRENT_RASTER_DISTANCE 0x0B09
#endif
#ifndef GL_POINT_SMOOTH
#define GL_POINT_SMOOTH 0x0B10
#endif
#ifndef GL_LINE_STIPPLE
#define GL_LINE_STIPPLE 0x0B24
#endif
#ifndef GL_LINE_STIPPLE_PATTERN
#define GL_LINE_STIPPLE_PATTERN 0x0B25
#endif
#ifndef GL_LINE_STIPPLE_REPEAT
#define GL_LINE_STIPPLE_REPEAT 0x0B26
#endif
#ifndef GL_LIST_MODE
#define GL_LIST_MODE 0x0B30
#endif
#ifndef GL_MAX_LIST_NESTING
#define GL_MAX_LIST_NESTING 0x0B31
#endif
#ifndef GL_LIST_BASE
#define GL_LIST_BASE 0x0B32
#endif
#ifndef GL_LIST_INDEX
#define GL_LIST_INDEX 0x0B33
#endif
#ifndef GL_POLYGON_STIPPLE
#define GL_POLYGON_STIPPLE 0x0B42
#endif
#ifndef GL_EDGE_FLAG
#define GL_EDGE_FLAG 0x0B43
#endif
#ifndef GL_LIGHTING
#define GL_LIGHTING 0x0B50
#endif
#ifndef GL_LIGHT_MODEL_LOCAL_VIEWER
#define GL_LIGHT_MODEL_LOCAL_VIEWER 0x0B51
#endif
#ifndef GL_LIGHT_MODEL_TWO_SIDE
#define GL_LIGHT_MODEL_TWO_SIDE 0x0B52
#endif
#ifndef GL_LIGHT_MODEL_AMBIENT
#define GL_LIGHT_MODEL_AMBIENT 0x0B53
#endif
#ifndef GL_SHADE_MODEL
#define GL_SHADE_MODEL 0x0B54
#endif
#ifndef GL_COLOR_MATERIAL_FACE
#define GL_COLOR_MATERIAL_FACE 0x0B55
#endif
#ifndef GL_COLOR_MATERIAL_PARAMETER
#define GL_COLOR_MATERIAL_PARAMETER 0x0B56
#endif
#ifndef GL_COLOR_MATERIAL
#define GL_COLOR_MATERIAL 0x0B57
#endif
#ifndef GL_FOG
#define GL_FOG 0x0B60
#endif
#ifndef GL_FOG_INDEX
#define GL_FOG_INDEX 0x0B61
#endif
#ifndef GL_FOG_DENSITY
#define GL_FOG_DENSITY 0x0B62
#endif
#ifndef GL_FOG_START
#define GL_FOG_START 0x0B63
#endif
#ifndef GL_FOG_END
#define GL_FOG_END 0x0B64
#endif
#ifndef GL_FOG_MODE
#define GL_FOG_MODE 0x0B65
#endif
#ifndef GL_FOG_COLOR
#define GL_FOG_COLOR 0x0B66
#endif
#ifndef GL_ACCUM_CLEAR_VALUE
#define GL_ACCUM_CLEAR_VALUE 0x0B80
#endif
#ifndef GL_MATRIX_MODE
#define GL_MATRIX_MODE 0x0BA0
#endif
#ifndef GL_NORMALIZE
#define GL_NORMALIZE 0x0BA1
#endif
#ifndef GL_MODELVIEW_STACK_DEPTH
#define GL_MODELVIEW_STACK_DEPTH 0x0BA3
#endif
#ifndef GL_PROJECTION_STACK_DEPTH
#define GL_PROJECTION_STACK_DEPTH 0x0BA4
#endif
#ifndef GL_TEXTURE_STACK_DEPTH
#define GL_TEXTURE_STACK_DEPTH 0x0BA5
#endif
#ifndef GL_MODELVIEW_MATRIX
#define GL_MODELVIEW_MATRIX 0x0BA6
#endif
#ifndef GL_PROJECTION_MATRIX
#define GL_PROJECTION_MATRIX 0x0BA7
#endif
#ifndef GL_TEXTURE_MATRIX
#define GL_TEXTURE_MATRIX 0x0BA8
#endif
#ifndef GL_ATTRIB_STACK_DEPTH
#define GL_ATTRIB_STACK_DEPTH 0x0BB0
#endif
#ifndef GL_CLIENT_ATTRIB_STACK_DEPTH
#define GL_CLIENT_ATTRIB_STACK_DEPTH 0x0BB1
#endif
#ifndef GL_ALPHA_TEST
#define GL_ALPHA_TEST 0x0BC0
#endif
#ifndef GL_ALPHA_TEST_FUNC
#define GL_ALPHA_TEST_FUNC 0x0BC1
#endif
#ifndef GL_ALPHA_TEST_REF
#define GL_ALPHA_TEST_REF 0x0BC2
#endif
#ifndef GL_INDEX_LOGIC_OP
#define GL_INDEX_LOGIC_OP 0x0BF1
#endif
#ifndef GL_LOGIC_OP
#define GL_LOGIC_OP 0x0BF1
#endif
#ifndef GL_AUX_BUFFERS
#define GL_AUX_BUFFERS 0x0C00
#endif
#ifndef GL_INDEX_CLEAR_VALUE
#define GL_INDEX_CLEAR_VALUE 0x0C20
#endif
#ifndef GL_INDEX_WRITEMASK
#define GL_INDEX_WRITEMASK 0x0C21
#endif
#ifndef GL_INDEX_MODE
#define GL_INDEX_MODE 0x0C30
#endif
#ifndef GL_RGBA_MODE
#define GL_RGBA_MODE 0x0C31
#endif
#ifndef GL_RENDER_MODE
#define GL_RENDER_MODE 0x0C40
#endif
#ifndef GL_PERSPECTIVE_CORRECTION_HINT
#define GL_PERSPECTIVE_CORRECTION_HINT 0x0C50
#endif
#ifndef GL_POINT_SMOOTH_HINT
#define GL_POINT_SMOOTH_HINT 0x0C51
#endif
#ifndef GL_FOG_HINT
#define GL_FOG_HINT 0x0C54
#endif
#ifndef GL_TEXTURE_GEN_S
#define GL_TEXTURE_GEN_S 0x0C60
#endif
#ifndef GL_TEXTURE_GEN_T
#define GL_TEXTURE_GEN_T 0x0C61
#endif
#ifndef GL_TEXTURE_GEN_R
#define GL_TEXTURE_GEN_R 0x0C62
#endif
#ifndef GL_TEXTURE_GEN_Q
#define GL_TEXTURE_GEN_Q 0x0C63
#endif
#ifndef GL_PIXEL_MAP_I_TO_I_SIZE
#define GL_PIXEL_MAP_I_TO_I_SIZE 0x0CB0
#endif
#ifndef GL_PIXEL_MAP_S_TO_S_SIZE
#define GL_PIXEL_MAP_S_TO_S_SIZE 0x0CB1
#endif
#ifndef GL_PIXEL_MAP_I_TO_R_SIZE
#define GL_PIXEL_MAP_I_TO_R_SIZE 0x0CB2
#endif
#ifndef GL_PIXEL_MAP_I_TO_G_SIZE
#define GL_PIXEL_MAP_I_TO_G_SIZE 0x0CB3
#endif
#ifndef GL_PIXEL_MAP_I_TO_B_SIZE
#define GL_PIXEL_MAP_I_TO_B_SIZE 0x0CB4
#endif
#ifndef GL_PIXEL_MAP_I_TO_A_SIZE
#define GL_PIXEL_MAP_I_TO_A_SIZE 0x0CB5
#endif
#ifndef GL_PIXEL_MAP_R_TO_R_SIZE
#define GL_PIXEL_MAP_R_TO_R_SIZE 0x0CB6
#endif
#ifndef GL_PIXEL_MAP_G_TO_G_SIZE
#define GL_PIXEL_MAP_G_TO_G_SIZE 0x0CB7
#endif
#ifndef GL_PIXEL_MAP_B_TO_B_SIZE
#define GL_PIXEL_MAP_B_TO_B_SIZE 0x0CB8
#endif
#ifndef GL_PIXEL_MAP_A_TO_A_SIZE
#define GL_PIXEL_MAP_A_TO_A_SIZE 0x0CB9
#endif
#ifndef GL_MAP_COLOR
#define GL_MAP_COLOR 0x0D10
#endif
#ifndef GL_MAP_STENCIL
#define GL_MAP_STENCIL 0x0D11
#endif
#ifndef GL_INDEX_SHIFT
#define GL_INDEX_SHIFT 0x0D12
#endif
#ifndef GL_INDEX_OFFSET
#define GL_INDEX_OFFSET 0x0D13
#endif
#ifndef GL_RED_SCALE
#define GL_RED_SCALE 0x0D14
#endif
#ifndef GL_RED_BIAS
#define GL_RED_BIAS 0x0D15
#endif
#ifndef GL_ZOOM_X
#define GL_ZOOM_X 0x0D16
#endif
#ifndef GL_ZOOM_Y
#define GL_ZOOM_Y 0x0D17
#endif
#ifndef GL_GREEN_SCALE
#define GL_GREEN_SCALE 0x0D18
#endif
#ifndef GL_GREEN_BIAS
#define GL_GREEN_BIAS 0x0D19
#endif
#ifndef GL_BLUE_SCALE
#define GL_BLUE_SCALE 0x0D1A
#endif
#ifndef GL_BLUE_BIAS
#define GL_BLUE_BIAS 0x0D1B
#endif
#ifndef GL_ALPHA_SCALE
#define GL_ALPHA_SCALE 0x0D1C
#endif
#ifndef GL_ALPHA_BIAS
#define GL_ALPHA_BIAS 0x0D1D
#endif
#ifndef GL_DEPTH_SCALE
#define GL_DEPTH_SCALE 0x0D1E
#endif
#ifndef GL_DEPTH_BIAS
#define GL_DEPTH_BIAS 0x0D1F
#endif
#ifndef GL_MAX_EVAL_ORDER
#define GL_MAX_EVAL_ORDER 0x0D30
#endif
#ifndef GL_MAX_LIGHTS
#define GL_MAX_LIGHTS 0x0D31
#endif
#ifndef GL_MAX_CLIP_PLANES
#define GL_MAX_CLIP_PLANES 0x0D32
#endif
#ifndef GL_MAX_PIXEL_MAP_TABLE
#define GL_MAX_PIXEL_MAP_TABLE 0x0D34
#endif
#ifndef GL_MAX_ATTRIB_STACK_DEPTH
#define GL_MAX_ATTRIB_STACK_DEPTH 0x0D35
#endif
#ifndef GL_MAX_MODELVIEW_STACK_DEPTH
#define GL_MAX_MODELVIEW_STACK_DEPTH 0x0D36
#endif
#ifndef GL_MAX_NAME_STACK_DEPTH
#define GL_MAX_NAME_STACK_DEPTH 0x0D37
#endif
#ifndef GL_MAX_PROJECTION_STACK_DEPTH
#define GL_MAX_PROJECTION_STACK_DEPTH 0x0D38
#endif
#ifndef GL_MAX_TEXTURE_STACK_DEPTH
#define GL_MAX_TEXTURE_STACK_DEPTH 0x0D39
#endif
#ifndef GL_MAX_CLIENT_ATTRIB_STACK_DEPTH
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH 0x0D3B
#endif
#ifndef GL_INDEX_BITS
#define GL_INDEX_BITS 0x0D51
#endif
#ifndef GL_RED_BITS
#define GL_RED_BITS 0x0D52
#endif
#ifndef GL_GREEN_BITS
#define GL_GREEN_BITS 0x0D53
#endif
#ifndef GL_BLUE_BITS
#define GL_BLUE_BITS 0x0D54
#endif
#ifndef GL_ALPHA_BITS
#define GL_ALPHA_BITS 0x0D55
#endif
#ifndef GL_DEPTH_BITS
#define GL_DEPTH_BITS 0x0D56
#endif
#ifndef GL_STENCIL_BITS
#define GL_STENCIL_BITS 0x0D57
#endif
#ifndef GL_ACCUM_RED_BITS
#define GL_ACCUM_RED_BITS 0x0D58
#endif
#ifndef GL_ACCUM_GREEN_BITS
#define GL_ACCUM_GREEN_BITS 0x0D59
#endif
#ifndef GL_ACCUM_BLUE_BITS
#define GL_ACCUM_BLUE_BITS 0x0D5A
#endif
#ifndef GL_ACCUM_ALPHA_BITS
#define GL_ACCUM_ALPHA_BITS 0x0D5B
#endif
#ifndef GL_NAME_STACK_DEPTH
#define GL_NAME_STACK_DEPTH 0x0D70
#endif
#ifndef GL_AUTO_NORMAL
#define GL_AUTO_NORMAL 0x0D80
#endif
#ifndef GL_MAP1_COLOR_4
#define GL_MAP1_COLOR_4 0x0D90
#endif
#ifndef GL_MAP1_INDEX
#define GL_MAP1_INDEX 0x0D91
#endif
#ifndef GL_MAP1_NORMAL
#define GL_MAP1_NORMAL 0x0D92
#endif
#ifndef GL_MAP1_TEXTURE_COORD_1
#define GL_MAP1_TEXTURE_COORD_1 0x0D93
#endif
#ifndef GL_MAP1_TEXTURE_COORD_2
#define GL_MAP1_TEXTURE_COORD_2 0x0D94
#endif
#ifndef GL_MAP1_TEXTURE_COORD_3
#define GL_MAP1_TEXTURE_COORD_3 0x0D95
#endif
#ifndef GL_MAP1_TEXTURE_COORD_4
#define GL_MAP1_TEXTURE_COORD_4 0x0D96
#endif
#ifndef GL_MAP1_VERTEX_3
#define GL_MAP1_VERTEX_3 0x0D97
#endif
#ifndef GL_MAP1_VERTEX_4
#define GL_MAP1_VERTEX_4 0x0D98
#endif
#ifndef GL_MAP2_COLOR_4
#define GL_MAP2_COLOR_4 0x0DB0
#endif
#ifndef GL_MAP2_INDEX
#define GL_MAP2_INDEX 0x0DB1
#endif
#ifndef GL_MAP2_NORMAL
#define GL_MAP2_NORMAL 0x0DB2
#endif
#ifndef GL_MAP2_TEXTURE_COORD_1
#define GL_MAP2_TEXTURE_COORD_1 0x0DB3
#endif
#ifndef GL_MAP2_TEXTURE_COORD_2
#define GL_MAP2_TEXTURE_COORD_2 0x0DB4
#endif
#ifndef GL_MAP2_TEXTURE_COORD_3
#define GL_MAP2_TEXTURE_COORD_3 0x0DB5
#endif
#ifndef GL_MAP2_TEXTURE_COORD_4
#define GL_MAP2_TEXTURE_COORD_4 0x0DB6
#endif
#ifndef GL_MAP2_VERTEX_3
#define GL_MAP2_VERTEX_3 0x0DB7
#endif
#ifndef GL_MAP2_VERTEX_4
#define GL_MAP2_VERTEX_4 0x0DB8
#endif
#ifndef GL_MAP1_GRID_DOMAIN
#define GL_MAP1_GRID_DOMAIN 0x0DD0
#endif
#ifndef GL_MAP1_GRID_SEGMENTS
#define GL_MAP1_GRID_SEGMENTS 0x0DD1
#endif
#ifndef GL_MAP2_GRID_DOMAIN
#define GL_MAP2_GRID_DOMAIN 0x0DD2
#endif
#ifndef GL_MAP2_GRID_SEGMENTS
#define GL_MAP2_GRID_SEGMENTS 0x0DD3
#endif
#ifndef GL_FEEDBACK_BUFFER_SIZE
#define GL_FEEDBACK_BUFFER_SIZE 0x0DF1
#endif
#ifndef GL_FEEDBACK_BUFFER_TYPE
#define GL_FEEDBACK_BUFFER_TYPE 0x0DF2
#endif
#ifndef GL_SELECTION_BUFFER_SIZE
#define GL_SELECTION_BUFFER_SIZE 0x0DF4
#endif
#ifndef GL_VERTEX_ARRAY
#define GL_VERTEX_ARRAY 0x8074
#endif
#ifndef GL_NORMAL_ARRAY
#define GL_NORMAL_ARRAY 0x8075
#endif
#ifndef GL_COLOR_ARRAY
#define GL_COLOR_ARRAY 0x8076
#endif
#ifndef GL_INDEX_ARRAY
#define GL_INDEX_ARRAY 0x8077
#endif
#ifndef GL_TEXTURE_COORD_ARRAY
#define GL_TEXTURE_COORD_ARRAY 0x8078
#endif
#ifndef GL_EDGE_FLAG_ARRAY
#define GL_EDGE_FLAG_ARRAY 0x8079
#endif
#ifndef GL_VERTEX_ARRAY_SIZE
#define GL_VERTEX_ARRAY_SIZE 0x807A
#endif
#ifndef GL_VERTEX_ARRAY_TYPE
#define GL_VERTEX_ARRAY_TYPE 0x807B
#endif
#ifndef GL_VERTEX_ARRAY_STRIDE
#define GL_VERTEX_ARRAY_STRIDE 0x807C
#endif
#ifndef GL_NORMAL_ARRAY_TYPE
#define GL_NORMAL_ARRAY_TYPE 0x807E
#endif
#ifndef GL_NORMAL_ARRAY_STRIDE
#define GL_NORMAL_ARRAY_STRIDE 0x807F
#endif
#ifndef GL_COLOR_ARRAY_SIZE
#define GL_COLOR_ARRAY_SIZE 0x8081
#endif
#ifndef GL_COLOR_ARRAY_TYPE
#define GL_COLOR_ARRAY_TYPE 0x8082
#endif
#ifndef GL_COLOR_ARRAY_STRIDE
#define GL_COLOR_ARRAY_STRIDE 0x8083
#endif
#ifndef GL_INDEX_ARRAY_TYPE
#define GL_INDEX_ARRAY_TYPE 0x8085
#endif
#ifndef GL_INDEX_ARRAY_STRIDE
#define GL_INDEX_ARRAY_STRIDE 0x8086
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_SIZE
#define GL_TEXTURE_COORD_ARRAY_SIZE 0x8088
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_TYPE
#define GL_TEXTURE_COORD_ARRAY_TYPE 0x8089
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_STRIDE
#define GL_TEXTURE_COORD_ARRAY_STRIDE 0x808A
#endif
#ifndef GL_EDGE_FLAG_ARRAY_STRIDE
#define GL_EDGE_FLAG_ARRAY_STRIDE 0x808C
#endif
#ifndef GL_TEXTURE_COMPONENTS
#define GL_TEXTURE_COMPONENTS 0x1003
#endif
#ifndef GL_TEXTURE_BORDER
#define GL_TEXTURE_BORDER 0x1005
#endif
#ifndef GL_TEXTURE_LUMINANCE_SIZE
#define GL_TEXTURE_LUMINANCE_SIZE 0x8060
#endif
#ifndef GL_TEXTURE_INTENSITY_SIZE
#define GL_TEXTURE_INTENSITY_SIZE 0x8061
#endif
#ifndef GL_TEXTURE_PRIORITY
#define GL_TEXTURE_PRIORITY 0x8066
#endif
#ifndef GL_TEXTURE_RESIDENT
#define GL_TEXTURE_RESIDENT 0x8067
#endif
#ifndef GL_AMBIENT
#define GL_AMBIENT 0x1200
#endif
#ifndef GL_DIFFUSE
#define GL_DIFFUSE 0x1201
#endif
#ifndef GL_SPECULAR
#define GL_SPECULAR 0x1202
#endif
#ifndef GL_POSITION
#define GL_POSITION 0x1203
#endif
#ifndef GL_SPOT_DIRECTION
#define GL_SPOT_DIRECTION 0x1204
#endif
#ifndef GL_SPOT_EXPONENT
#define GL_SPOT_EXPONENT 0x1205
#endif
#ifndef GL_SPOT_CUTOFF
#define GL_SPOT_CUTOFF 0x1206
#endif
#ifndef GL_CONSTANT_ATTENUATION
#define GL_CONSTANT_ATTENUATION 0x1207
#endif
#ifndef GL_LINEAR_ATTENUATION
#define GL_LINEAR_ATTENUATION 0x1208
#endif
#ifndef GL_QUADRATIC_ATTENUATION
#define GL_QUADRATIC_ATTENUATION 0x1209
#endif
#ifndef GL_COMPILE
#define GL_COMPILE 0x1300
#endif
#ifndef GL_COMPILE_AND_EXECUTE
#define GL_COMPILE_AND_EXECUTE 0x1301
#endif
#ifndef GL_2_BYTES
#define GL_2_BYTES 0x1407
#endif
#ifndef GL_3_BYTES
#define GL_3_BYTES 0x1408
#endif
#ifndef GL_4_BYTES
#define GL_4_BYTES 0x1409
#endif
#ifndef GL_EMISSION
#define GL_EMISSION 0x1600
#endif
#ifndef GL_SHININESS
#define GL_SHININESS 0x1601
#endif
#ifndef GL_AMBIENT_AND_DIFFUSE
#define GL_AMBIENT_AND_DIFFUSE 0x1602
#endif
#ifndef GL_COLOR_INDEXES
#define GL_COLOR_INDEXES 0x1603
#endif
#ifndef GL_MODELVIEW
#define GL_MODELVIEW 0x1700
#endif
#ifndef GL_PROJECTION
#define GL_PROJECTION 0x1701
#endif
#ifndef GL_COLOR_INDEX
#define GL_COLOR_INDEX 0x1900
#endif
#ifndef GL_LUMINANCE
#define GL_LUMINANCE 0x1909
#endif
#ifndef GL_LUMINANCE_ALPHA
#define GL_LUMINANCE_ALPHA 0x190A
#endif
#ifndef GL_BITMAP
#define GL_BITMAP 0x1A00
#endif
#ifndef GL_RENDER
#define GL_RENDER 0x1C00
#endif
#ifndef GL_FEEDBACK
#define GL_FEEDBACK 0x1C01
#endif
#ifndef GL_SELECT
#define GL_SELECT 0x1C02
#endif
#ifndef GL_FLAT
#define GL_FLAT 0x1D00
#endif
#ifndef GL_SMOOTH
#define GL_SMOOTH 0x1D01
#endif
#ifndef GL_S
#define GL_S 0x2000
#endif
#ifndef GL_T
#define GL_T 0x2001
#endif
#ifndef GL_R
#define GL_R 0x2002
#endif
#ifndef GL_Q
#define GL_Q 0x2003
#endif
#ifndef GL_MODULATE
#define GL_MODULATE 0x2100
#endif
#ifndef GL_DECAL
#define GL_DECAL 0x2101
#endif
#ifndef GL_TEXTURE_ENV_MODE
#define GL_TEXTURE_ENV_MODE 0x2200
#endif
#ifndef GL_TEXTURE_ENV_COLOR
#define GL_TEXTURE_ENV_COLOR 0x2201
#endif
#ifndef GL_TEXTURE_ENV
#define GL_TEXTURE_ENV 0x2300
#endif
#ifndef GL_EYE_LINEAR
#define GL_EYE_LINEAR 0x2400
#endif
#ifndef GL_OBJECT_LINEAR
#define GL_OBJECT_LINEAR 0x2401
#endif
#ifndef GL_SPHERE_MAP
#define GL_SPHERE_MAP 0x2402
#endif
#ifndef GL_TEXTURE_GEN_MODE
#define GL_TEXTURE_GEN_MODE 0x2500
#endif
#ifndef GL_OBJECT_PLANE
#define GL_OBJECT_PLANE 0x2501
#endif
#ifndef GL_EYE_PLANE
#define GL_EYE_PLANE 0x2502
#endif
#ifndef GL_CLAMP
#define GL_CLAMP 0x2900
#endif
#ifndef GL_ALPHA4
#define GL_ALPHA4 0x803B
#endif
#ifndef GL_ALPHA8
#define GL_ALPHA8 0x803C
#endif
#ifndef GL_ALPHA12
#define GL_ALPHA12 0x803D
#endif
#ifndef GL_ALPHA16
#define GL_ALPHA16 0x803E
#endif
#ifndef GL_LUMINANCE4
#define GL_LUMINANCE4 0x803F
#endif
#ifndef GL_LUMINANCE8
#define GL_LUMINANCE8 0x8040
#endif
#ifndef GL_LUMINANCE12
#define GL_LUMINANCE12 0x8041
#endif
#ifndef GL_LUMINANCE16
#define GL_LUMINANCE16 0x8042
#endif
#ifndef GL_LUMINANCE4_ALPHA4
#define GL_LUMINANCE4_ALPHA4 0x8043
#endif
#ifndef GL_LUMINANCE6_ALPHA2
#define GL_LUMINANCE6_ALPHA2 0x8044
#endif
#ifndef GL_LUMINANCE8_ALPHA8
#define GL_LUMINANCE8_ALPHA8 0x8045
#endif
#ifndef GL_LUMINANCE12_ALPHA4
#define GL_LUMINANCE12_ALPHA4 0x8046
#endif
#ifndef GL_LUMINANCE12_ALPHA12
#define GL_LUMINANCE12_ALPHA12 0x8047
#endif
#ifndef GL_LUMINANCE16_ALPHA16
#define GL_LUMINANCE16_ALPHA16 0x8048
#endif
#ifndef GL_INTENSITY
#define GL_INTENSITY 0x8049
#endif
#ifndef GL_INTENSITY4
#define GL_INTENSITY4 0x804A
#endif
#ifndef GL_INTENSITY8
#define GL_INTENSITY8 0x804B
#endif
#ifndef GL_INTENSITY12
#define GL_INTENSITY12 0x804C
#endif
#ifndef GL_INTENSITY16
#define GL_INTENSITY16 0x804D
#endif
#ifndef GL_V2F
#define GL_V2F 0x2A20
#endif
#ifndef GL_V3F
#define GL_V3F 0x2A21
#endif
#ifndef GL_C4UB_V2F
#define GL_C4UB_V2F 0x2A22
#endif
#ifndef GL_C4UB_V3F
#define GL_C4UB_V3F 0x2A23
#endif
#ifndef GL_C3F_V3F
#define GL_C3F_V3F 0x2A24
#endif
#ifndef GL_N3F_V3F
#define GL_N3F_V3F 0x2A25
#endif
#ifndef GL_C4F_N3F_V3F
#define GL_C4F_N3F_V3F 0x2A26
#endif
#ifndef GL_T2F_V3F
#define GL_T2F_V3F 0x2A27
#endif
#ifndef GL_T4F_V4F
#define GL_T4F_V4F 0x2A28
#endif
#ifndef GL_T2F_C4UB_V3F
#define GL_T2F_C4UB_V3F 0x2A29
#endif
#ifndef GL_T2F_C3F_V3F
#define GL_T2F_C3F_V3F 0x2A2A
#endif
#ifndef GL_T2F_N3F_V3F
#define GL_T2F_N3F_V3F 0x2A2B
#endif
#ifndef GL_T2F_C4F_N3F_V3F
#define GL_T2F_C4F_N3F_V3F 0x2A2C
#endif
#ifndef GL_T4F_C4F_N3F_V4F
#define GL_T4F_C4F_N3F_V4F 0x2A2D
#endif
#ifndef GL_CLIP_PLANE0
#define GL_CLIP_PLANE0 0x3000
#endif
#ifndef GL_CLIP_PLANE1
#define GL_CLIP_PLANE1 0x3001
#endif
#ifndef GL_CLIP_PLANE2
#define GL_CLIP_PLANE2 0x3002
#endif
#ifndef GL_CLIP_PLANE3
#define GL_CLIP_PLANE3 0x3003
#endif
#ifndef GL_CLIP_PLANE4
#define GL_CLIP_PLANE4 0x3004
#endif
#ifndef GL_CLIP_PLANE5
#define GL_CLIP_PLANE5 0x3005
#endif
#ifndef GL_LIGHT0
#define GL_LIGHT0 0x4000
#endif
#ifndef GL_LIGHT1
#define GL_LIGHT1 0x4001
#endif
#ifndef GL_LIGHT2
#define GL_LIGHT2 0x4002
#endif
#ifndef GL_LIGHT3
#define GL_LIGHT3 0x4003
#endif
#ifndef GL_LIGHT4
#define GL_LIGHT4 0x4004
#endif
#ifndef GL_LIGHT5
#define GL_LIGHT5 0x4005
#endif
#ifndef GL_LIGHT6
#define GL_LIGHT6 0x4006
#endif
#ifndef GL_LIGHT7
#define GL_LIGHT7 0x4007
#endif
#ifndef GL_UNSIGNED_BYTE_3_3_2
#define GL_UNSIGNED_BYTE_3_3_2 0x8032
#endif
#ifndef GL_UNSIGNED_SHORT_4_4_4_4
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#endif
#ifndef GL_UNSIGNED_SHORT_5_5_5_1
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#endif
#ifndef GL_UNSIGNED_INT_8_8_8_8
#define GL_UNSIGNED_INT_8_8_8_8 0x8035
#endif
#ifndef GL_UNSIGNED_INT_10_10_10_2
#define GL_UNSIGNED_INT_10_10_10_2 0x8036
#endif
#ifndef GL_TEXTURE_BINDING_3D
#define GL_TEXTURE_BINDING_3D 0x806A
#endif
#ifndef GL_PACK_SKIP_IMAGES
#define GL_PACK_SKIP_IMAGES 0x806B
#endif
#ifndef GL_PACK_IMAGE_HEIGHT
#define GL_PACK_IMAGE_HEIGHT 0x806C
#endif
#ifndef GL_UNPACK_SKIP_IMAGES
#define GL_UNPACK_SKIP_IMAGES 0x806D
#endif
#ifndef GL_UNPACK_IMAGE_HEIGHT
#define GL_UNPACK_IMAGE_HEIGHT 0x806E
#endif
#ifndef GL_TEXTURE_3D
#define GL_TEXTURE_3D 0x806F
#endif
#ifndef GL_PROXY_TEXTURE_3D
#define GL_PROXY_TEXTURE_3D 0x8070
#endif
#ifndef GL_TEXTURE_DEPTH
#define GL_TEXTURE_DEPTH 0x8071
#endif
#ifndef GL_TEXTURE_WRAP_R
#define GL_TEXTURE_WRAP_R 0x8072
#endif
#ifndef GL_MAX_3D_TEXTURE_SIZE
#define GL_MAX_3D_TEXTURE_SIZE 0x8073
#endif
#ifndef GL_UNSIGNED_BYTE_2_3_3_REV
#define GL_UNSIGNED_BYTE_2_3_3_REV 0x8362
#endif
#ifndef GL_UNSIGNED_SHORT_5_6_5
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#endif
#ifndef GL_UNSIGNED_SHORT_5_6_5_REV
#define GL_UNSIGNED_SHORT_5_6_5_REV 0x8364
#endif
#ifndef GL_UNSIGNED_SHORT_4_4_4_4_REV
#define GL_UNSIGNED_SHORT_4_4_4_4_REV 0x8365
#endif
#ifndef GL_UNSIGNED_SHORT_1_5_5_5_REV
#define GL_UNSIGNED_SHORT_1_5_5_5_REV 0x8366
#endif
#ifndef GL_UNSIGNED_INT_8_8_8_8_REV
#define GL_UNSIGNED_INT_8_8_8_8_REV 0x8367
#endif
#ifndef GL_UNSIGNED_INT_2_10_10_10_REV
#define GL_UNSIGNED_INT_2_10_10_10_REV 0x8368
#endif
#ifndef GL_BGR
#define GL_BGR 0x80E0
#endif
#ifndef GL_BGRA
#define GL_BGRA 0x80E1
#endif
#ifndef GL_MAX_ELEMENTS_VERTICES
#define GL_MAX_ELEMENTS_VERTICES 0x80E8
#endif
#ifndef GL_MAX_ELEMENTS_INDICES
#define GL_MAX_ELEMENTS_INDICES 0x80E9
#endif
#ifndef GL_CLAMP_TO_EDGE
#define GL_CLAMP_TO_EDGE 0x812F
#endif
#ifndef GL_TEXTURE_MIN_LOD
#define GL_TEXTURE_MIN_LOD 0x813A
#endif
#ifndef GL_TEXTURE_MAX_LOD
#define GL_TEXTURE_MAX_LOD 0x813B
#endif
#ifndef GL_TEXTURE_BASE_LEVEL
#define GL_TEXTURE_BASE_LEVEL 0x813C
#endif
#ifndef GL_TEXTURE_MAX_LEVEL
#define GL_TEXTURE_MAX_LEVEL 0x813D
#endif
#ifndef GL_SMOOTH_POINT_SIZE_RANGE
#define GL_SMOOTH_POINT_SIZE_RANGE 0x0B12
#endif
#ifndef GL_SMOOTH_POINT_SIZE_GRANULARITY
#define GL_SMOOTH_POINT_SIZE_GRANULARITY 0x0B13
#endif
#ifndef GL_SMOOTH_LINE_WIDTH_RANGE
#define GL_SMOOTH_LINE_WIDTH_RANGE 0x0B22
#endif
#ifndef GL_SMOOTH_LINE_WIDTH_GRANULARITY
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY 0x0B23
#endif
#ifndef GL_ALIASED_LINE_WIDTH_RANGE
#define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#endif
#ifndef GL_RESCALE_NORMAL
#define GL_RESCALE_NORMAL 0x803A
#endif
#ifndef GL_LIGHT_MODEL_COLOR_CONTROL
#define GL_LIGHT_MODEL_COLOR_CONTROL 0x81F8
#endif
#ifndef GL_SINGLE_COLOR
#define GL_SINGLE_COLOR 0x81F9
#endif
#ifndef GL_SEPARATE_SPECULAR_COLOR
#define GL_SEPARATE_SPECULAR_COLOR 0x81FA
#endif
#ifndef GL_ALIASED_POINT_SIZE_RANGE
#define GL_ALIASED_POINT_SIZE_RANGE 0x846D
#endif
#ifndef GL_TEXTURE0
#define GL_TEXTURE0 0x84C0
#endif
#ifndef GL_TEXTURE1
#define GL_TEXTURE1 0x84C1
#endif
#ifndef GL_TEXTURE2
#define GL_TEXTURE2 0x84C2
#endif
#ifndef GL_TEXTURE3
#define GL_TEXTURE3 0x84C3
#endif
#ifndef GL_TEXTURE4
#define GL_TEXTURE4 0x84C4
#endif
#ifndef GL_TEXTURE5
#define GL_TEXTURE5 0x84C5
#endif
#ifndef GL_TEXTURE6
#define GL_TEXTURE6 0x84C6
#endif
#ifndef GL_TEXTURE7
#define GL_TEXTURE7 0x84C7
#endif
#ifndef GL_TEXTURE8
#define GL_TEXTURE8 0x84C8
#endif
#ifndef GL_TEXTURE9
#define GL_TEXTURE9 0x84C9
#endif
#ifndef GL_TEXTURE10
#define GL_TEXTURE10 0x84CA
#endif
#ifndef GL_TEXTURE11
#define GL_TEXTURE11 0x84CB
#endif
#ifndef GL_TEXTURE12
#define GL_TEXTURE12 0x84CC
#endif
#ifndef GL_TEXTURE13
#define GL_TEXTURE13 0x84CD
#endif
#ifndef GL_TEXTURE14
#define GL_TEXTURE14 0x84CE
#endif
#ifndef GL_TEXTURE15
#define GL_TEXTURE15 0x84CF
#endif
#ifndef GL_TEXTURE16
#define GL_TEXTURE16 0x84D0
#endif
#ifndef GL_TEXTURE17
#define GL_TEXTURE17 0x84D1
#endif
#ifndef GL_TEXTURE18
#define GL_TEXTURE18 0x84D2
#endif
#ifndef GL_TEXTURE19
#define GL_TEXTURE19 0x84D3
#endif
#ifndef GL_TEXTURE20
#define GL_TEXTURE20 0x84D4
#endif
#ifndef GL_TEXTURE21
#define GL_TEXTURE21 0x84D5
#endif
#ifndef GL_TEXTURE22
#define GL_TEXTURE22 0x84D6
#endif
#ifndef GL_TEXTURE23
#define GL_TEXTURE23 0x84D7
#endif
#ifndef GL_TEXTURE24
#define GL_TEXTURE24 0x84D8
#endif
#ifndef GL_TEXTURE25
#define GL_TEXTURE25 0x84D9
#endif
#ifndef GL_TEXTURE26
#define GL_TEXTURE26 0x84DA
#endif
#ifndef GL_TEXTURE27
#define GL_TEXTURE27 0x84DB
#endif
#ifndef GL_TEXTURE28
#define GL_TEXTURE28 0x84DC
#endif
#ifndef GL_TEXTURE29
#define GL_TEXTURE29 0x84DD
#endif
#ifndef GL_TEXTURE30
#define GL_TEXTURE30 0x84DE
#endif
#ifndef GL_TEXTURE31
#define GL_TEXTURE31 0x84DF
#endif
#ifndef GL_ACTIVE_TEXTURE
#define GL_ACTIVE_TEXTURE 0x84E0
#endif
#ifndef GL_MULTISAMPLE
#define GL_MULTISAMPLE 0x809D
#endif
#ifndef GL_SAMPLE_ALPHA_TO_COVERAGE
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#endif
#ifndef GL_SAMPLE_ALPHA_TO_ONE
#define GL_SAMPLE_ALPHA_TO_ONE 0x809F
#endif
#ifndef GL_SAMPLE_COVERAGE
#define GL_SAMPLE_COVERAGE 0x80A0
#endif
#ifndef GL_SAMPLE_BUFFERS
#define GL_SAMPLE_BUFFERS 0x80A8
#endif
#ifndef GL_SAMPLES
#define GL_SAMPLES 0x80A9
#endif
#ifndef GL_SAMPLE_COVERAGE_VALUE
#define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#endif
#ifndef GL_SAMPLE_COVERAGE_INVERT
#define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#endif
#ifndef GL_TEXTURE_CUBE_MAP
#define GL_TEXTURE_CUBE_MAP 0x8513
#endif
#ifndef GL_TEXTURE_BINDING_CUBE_MAP
#define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_X
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_X
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Y
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Z
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#endif
#ifndef GL_PROXY_TEXTURE_CUBE_MAP
#define GL_PROXY_TEXTURE_CUBE_MAP 0x851B
#endif
#ifndef GL_MAX_CUBE_MAP_TEXTURE_SIZE
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#endif
#ifndef GL_COMPRESSED_RGB
#define GL_COMPRESSED_RGB 0x84ED
#endif
#ifndef GL_COMPRESSED_RGBA
#define GL_COMPRESSED_RGBA 0x84EE
#endif
#ifndef GL_TEXTURE_COMPRESSION_HINT
#define GL_TEXTURE_COMPRESSION_HINT 0x84EF
#endif
#ifndef GL_TEXTURE_COMPRESSED_IMAGE_SIZE
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE 0x86A0
#endif
#ifndef GL_TEXTURE_COMPRESSED
#define GL_TEXTURE_COMPRESSED 0x86A1
#endif
#ifndef GL_NUM_COMPRESSED_TEXTURE_FORMATS
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#endif
#ifndef GL_COMPRESSED_TEXTURE_FORMATS
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#endif
#ifndef GL_CLAMP_TO_BORDER
#define GL_CLAMP_TO_BORDER 0x812D
#endif
#ifndef GL_CLIENT_ACTIVE_TEXTURE
#define GL_CLIENT_ACTIVE_TEXTURE 0x84E1
#endif
#ifndef GL_MAX_TEXTURE_UNITS
#define GL_MAX_TEXTURE_UNITS 0x84E2
#endif
#ifndef GL_TRANSPOSE_MODELVIEW_MATRIX
#define GL_TRANSPOSE_MODELVIEW_MATRIX 0x84E3
#endif
#ifndef GL_TRANSPOSE_PROJECTION_MATRIX
#define GL_TRANSPOSE_PROJECTION_MATRIX 0x84E4
#endif
#ifndef GL_TRANSPOSE_TEXTURE_MATRIX
#define GL_TRANSPOSE_TEXTURE_MATRIX 0x84E5
#endif
#ifndef GL_TRANSPOSE_COLOR_MATRIX
#define GL_TRANSPOSE_COLOR_MATRIX 0x84E6
#endif
#ifndef GL_MULTISAMPLE_BIT
#define GL_MULTISAMPLE_BIT 0x20000000
#endif
#ifndef GL_NORMAL_MAP
#define GL_NORMAL_MAP 0x8511
#endif
#ifndef GL_REFLECTION_MAP
#define GL_REFLECTION_MAP 0x8512
#endif
#ifndef GL_COMPRESSED_ALPHA
#define GL_COMPRESSED_ALPHA 0x84E9
#endif
#ifndef GL_COMPRESSED_LUMINANCE
#define GL_COMPRESSED_LUMINANCE 0x84EA
#endif
#ifndef GL_COMPRESSED_LUMINANCE_ALPHA
#define GL_COMPRESSED_LUMINANCE_ALPHA 0x84EB
#endif
#ifndef GL_COMPRESSED_INTENSITY
#define GL_COMPRESSED_INTENSITY 0x84EC
#endif
#ifndef GL_COMBINE
#define GL_COMBINE 0x8570
#endif
#ifndef GL_COMBINE_RGB
#define GL_COMBINE_RGB 0x8571
#endif
#ifndef GL_COMBINE_ALPHA
#define GL_COMBINE_ALPHA 0x8572
#endif
#ifndef GL_SOURCE0_RGB
#define GL_SOURCE0_RGB 0x8580
#endif
#ifndef GL_SOURCE1_RGB
#define GL_SOURCE1_RGB 0x8581
#endif
#ifndef GL_SOURCE2_RGB
#define GL_SOURCE2_RGB 0x8582
#endif
#ifndef GL_SOURCE0_ALPHA
#define GL_SOURCE0_ALPHA 0x8588
#endif
#ifndef GL_SOURCE1_ALPHA
#define GL_SOURCE1_ALPHA 0x8589
#endif
#ifndef GL_SOURCE2_ALPHA
#define GL_SOURCE2_ALPHA 0x858A
#endif
#ifndef GL_OPERAND0_RGB
#define GL_OPERAND0_RGB 0x8590
#endif
#ifndef GL_OPERAND1_RGB
#define GL_OPERAND1_RGB 0x8591
#endif
#ifndef GL_OPERAND2_RGB
#define GL_OPERAND2_RGB 0x8592
#endif
#ifndef GL_OPERAND0_ALPHA
#define GL_OPERAND0_ALPHA 0x8598
#endif
#ifndef GL_OPERAND1_ALPHA
#define GL_OPERAND1_ALPHA 0x8599
#endif
#ifndef GL_OPERAND2_ALPHA
#define GL_OPERAND2_ALPHA 0x859A
#endif
#ifndef GL_RGB_SCALE
#define GL_RGB_SCALE 0x8573
#endif
#ifndef GL_ADD_SIGNED
#define GL_ADD_SIGNED 0x8574
#endif
#ifndef GL_INTERPOLATE
#define GL_INTERPOLATE 0x8575
#endif
#ifndef GL_SUBTRACT
#define GL_SUBTRACT 0x84E7
#endif
#ifndef GL_CONSTANT
#define GL_CONSTANT 0x8576
#endif
#ifndef GL_PRIMARY_COLOR
#define GL_PRIMARY_COLOR 0x8577
#endif
#ifndef GL_PREVIOUS
#define GL_PREVIOUS 0x8578
#endif
#ifndef GL_DOT3_RGB
#define GL_DOT3_RGB 0x86AE
#endif
#ifndef GL_DOT3_RGBA
#define GL_DOT3_RGBA 0x86AF
#endif
#ifndef GL_BLEND_DST_RGB
#define GL_BLEND_DST_RGB 0x80C8
#endif
#ifndef GL_BLEND_SRC_RGB
#define GL_BLEND_SRC_RGB 0x80C9
#endif
#ifndef GL_BLEND_DST_ALPHA
#define GL_BLEND_DST_ALPHA 0x80CA
#endif
#ifndef GL_BLEND_SRC_ALPHA
#define GL_BLEND_SRC_ALPHA 0x80CB
#endif
#ifndef GL_POINT_FADE_THRESHOLD_SIZE
#define GL_POINT_FADE_THRESHOLD_SIZE 0x8128
#endif
#ifndef GL_DEPTH_COMPONENT16
#define GL_DEPTH_COMPONENT16 0x81A5
#endif
#ifndef GL_DEPTH_COMPONENT24
#define GL_DEPTH_COMPONENT24 0x81A6
#endif
#ifndef GL_DEPTH_COMPONENT32
#define GL_DEPTH_COMPONENT32 0x81A7
#endif
#ifndef GL_MIRRORED_REPEAT
#define GL_MIRRORED_REPEAT 0x8370
#endif
#ifndef GL_MAX_TEXTURE_LOD_BIAS
#define GL_MAX_TEXTURE_LOD_BIAS 0x84FD
#endif
#ifndef GL_TEXTURE_LOD_BIAS
#define GL_TEXTURE_LOD_BIAS 0x8501
#endif
#ifndef GL_INCR_WRAP
#define GL_INCR_WRAP 0x8507
#endif
#ifndef GL_DECR_WRAP
#define GL_DECR_WRAP 0x8508
#endif
#ifndef GL_TEXTURE_DEPTH_SIZE
#define GL_TEXTURE_DEPTH_SIZE 0x884A
#endif
#ifndef GL_TEXTURE_COMPARE_MODE
#define GL_TEXTURE_COMPARE_MODE 0x884C
#endif
#ifndef GL_TEXTURE_COMPARE_FUNC
#define GL_TEXTURE_COMPARE_FUNC 0x884D
#endif
#ifndef GL_POINT_SIZE_MIN
#define GL_POINT_SIZE_MIN 0x8126
#endif
#ifndef GL_POINT_SIZE_MAX
#define GL_POINT_SIZE_MAX 0x8127
#endif
#ifndef GL_POINT_DISTANCE_ATTENUATION
#define GL_POINT_DISTANCE_ATTENUATION 0x8129
#endif
#ifndef GL_GENERATE_MIPMAP
#define GL_GENERATE_MIPMAP 0x8191
#endif
#ifndef GL_GENERATE_MIPMAP_HINT
#define GL_GENERATE_MIPMAP_HINT 0x8192
#endif
#ifndef GL_FOG_COORDINATE_SOURCE
#define GL_FOG_COORDINATE_SOURCE 0x8450
#endif
#ifndef GL_FOG_COORDINATE
#define GL_FOG_COORDINATE 0x8451
#endif
#ifndef GL_FRAGMENT_DEPTH
#define GL_FRAGMENT_DEPTH 0x8452
#endif
#ifndef GL_CURRENT_FOG_COORDINATE
#define GL_CURRENT_FOG_COORDINATE 0x8453
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_TYPE
#define GL_FOG_COORDINATE_ARRAY_TYPE 0x8454
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_STRIDE
#define GL_FOG_COORDINATE_ARRAY_STRIDE 0x8455
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_POINTER
#define GL_FOG_COORDINATE_ARRAY_POINTER 0x8456
#endif
#ifndef GL_FOG_COORDINATE_ARRAY
#define GL_FOG_COORDINATE_ARRAY 0x8457
#endif
#ifndef GL_COLOR_SUM
#define GL_COLOR_SUM 0x8458
#endif
#ifndef GL_CURRENT_SECONDARY_COLOR
#define GL_CURRENT_SECONDARY_COLOR 0x8459
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_SIZE
#define GL_SECONDARY_COLOR_ARRAY_SIZE 0x845A
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_TYPE
#define GL_SECONDARY_COLOR_ARRAY_TYPE 0x845B
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_STRIDE
#define GL_SECONDARY_COLOR_ARRAY_STRIDE 0x845C
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_POINTER
#define GL_SECONDARY_COLOR_ARRAY_POINTER 0x845D
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY
#define GL_SECONDARY_COLOR_ARRAY 0x845E
#endif
#ifndef GL_TEXTURE_FILTER_CONTROL
#define GL_TEXTURE_FILTER_CONTROL 0x8500
#endif
#ifndef GL_DEPTH_TEXTURE_MODE
#define GL_DEPTH_TEXTURE_MODE 0x884B
#endif
#ifndef GL_COMPARE_R_TO_TEXTURE
#define GL_COMPARE_R_TO_TEXTURE 0x884E
#endif
#ifndef GL_FUNC_ADD
#define GL_FUNC_ADD 0x8006
#endif
#ifndef GL_FUNC_SUBTRACT
#define GL_FUNC_SUBTRACT 0x800A
#endif
#ifndef GL_FUNC_REVERSE_SUBTRACT
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#endif
#ifndef GL_MIN
#define GL_MIN 0x8007
#endif
#ifndef GL_MAX
#define GL_MAX 0x8008
#endif
#ifndef GL_CONSTANT_COLOR
#define GL_CONSTANT_COLOR 0x8001
#endif
#ifndef GL_ONE_MINUS_CONSTANT_COLOR
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#endif
#ifndef GL_CONSTANT_ALPHA
#define GL_CONSTANT_ALPHA 0x8003
#endif
#ifndef GL_ONE_MINUS_CONSTANT_ALPHA
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#endif
#ifndef GL_BUFFER_SIZE
#define GL_BUFFER_SIZE 0x8764
#endif
#ifndef GL_BUFFER_USAGE
#define GL_BUFFER_USAGE 0x8765
#endif
#ifndef GL_QUERY_COUNTER_BITS
#define GL_QUERY_COUNTER_BITS 0x8864
#endif
#ifndef GL_CURRENT_QUERY
#define GL_CURRENT_QUERY 0x8865
#endif
#ifndef GL_QUERY_RESULT
#define GL_QUERY_RESULT 0x8866
#endif
#ifndef GL_QUERY_RESULT_AVAILABLE
#define GL_QUERY_RESULT_AVAILABLE 0x8867
#endif
#ifndef GL_ARRAY_BUFFER
#define GL_ARRAY_BUFFER 0x8892
#endif
#ifndef GL_ELEMENT_ARRAY_BUFFER
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#endif
#ifndef GL_ARRAY_BUFFER_BINDING
#define GL_ARRAY_BUFFER_BINDING 0x8894
#endif
#ifndef GL_ELEMENT_ARRAY_BUFFER_BINDING
#define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#endif
#ifndef GL_READ_ONLY
#define GL_READ_ONLY 0x88B8
#endif
#ifndef GL_WRITE_ONLY
#define GL_WRITE_ONLY 0x88B9
#endif
#ifndef GL_READ_WRITE
#define GL_READ_WRITE 0x88BA
#endif
#ifndef GL_BUFFER_ACCESS
#define GL_BUFFER_ACCESS 0x88BB
#endif
#ifndef GL_BUFFER_MAPPED
#define GL_BUFFER_MAPPED 0x88BC
#endif
#ifndef GL_BUFFER_MAP_POINTER
#define GL_BUFFER_MAP_POINTER 0x88BD
#endif
#ifndef GL_STREAM_DRAW
#define GL_STREAM_DRAW 0x88E0
#endif
#ifndef GL_STREAM_READ
#define GL_STREAM_READ 0x88E1
#endif
#ifndef GL_STREAM_COPY
#define GL_STREAM_COPY 0x88E2
#endif
#ifndef GL_STATIC_DRAW
#define GL_STATIC_DRAW 0x88E4
#endif
#ifndef GL_STATIC_READ
#define GL_STATIC_READ 0x88E5
#endif
#ifndef GL_STATIC_COPY
#define GL_STATIC_COPY 0x88E6
#endif
#ifndef GL_DYNAMIC_DRAW
#define GL_DYNAMIC_DRAW 0x88E8
#endif
#ifndef GL_DYNAMIC_READ
#define GL_DYNAMIC_READ 0x88E9
#endif
#ifndef GL_DYNAMIC_COPY
#define GL_DYNAMIC_COPY 0x88EA
#endif
#ifndef GL_SAMPLES_PASSED
#define GL_SAMPLES_PASSED 0x8914
#endif
#ifndef GL_SRC1_ALPHA
#define GL_SRC1_ALPHA 0x8589
#endif
#ifndef GL_VERTEX_ARRAY_BUFFER_BINDING
#define GL_VERTEX_ARRAY_BUFFER_BINDING 0x8896
#endif
#ifndef GL_NORMAL_ARRAY_BUFFER_BINDING
#define GL_NORMAL_ARRAY_BUFFER_BINDING 0x8897
#endif
#ifndef GL_COLOR_ARRAY_BUFFER_BINDING
#define GL_COLOR_ARRAY_BUFFER_BINDING 0x8898
#endif
#ifndef GL_INDEX_ARRAY_BUFFER_BINDING
#define GL_INDEX_ARRAY_BUFFER_BINDING 0x8899
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#endif
#ifndef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING 0x889B
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING 0x889C
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#endif
#ifndef GL_WEIGHT_ARRAY_BUFFER_BINDING
#define GL_WEIGHT_ARRAY_BUFFER_BINDING 0x889E
#endif
#ifndef GL_FOG_COORD_SRC
#define GL_FOG_COORD_SRC 0x8450
#endif
#ifndef GL_FOG_COORD
#define GL_FOG_COORD 0x8451
#endif
#ifndef GL_CURRENT_FOG_COORD
#define GL_CURRENT_FOG_COORD 0x8453
#endif
#ifndef GL_FOG_COORD_ARRAY_TYPE
#define GL_FOG_COORD_ARRAY_TYPE 0x8454
#endif
#ifndef GL_FOG_COORD_ARRAY_STRIDE
#define GL_FOG_COORD_ARRAY_STRIDE 0x8455
#endif
#ifndef GL_FOG_COORD_ARRAY_POINTER
#define GL_FOG_COORD_ARRAY_POINTER 0x8456
#endif
#ifndef GL_FOG_COORD_ARRAY
#define GL_FOG_COORD_ARRAY 0x8457
#endif
#ifndef GL_FOG_COORD_ARRAY_BUFFER_BINDING
#define GL_FOG_COORD_ARRAY_BUFFER_BINDING 0x889D
#endif
#ifndef GL_SRC0_RGB
#define GL_SRC0_RGB 0x8580
#endif
#ifndef GL_SRC1_RGB
#define GL_SRC1_RGB 0x8581
#endif
#ifndef GL_SRC2_RGB
#define GL_SRC2_RGB 0x8582
#endif
#ifndef GL_SRC0_ALPHA
#define GL_SRC0_ALPHA 0x8588
#endif
#ifndef GL_SRC2_ALPHA
#define GL_SRC2_ALPHA 0x858A
#endif
#ifndef GL_BLEND_EQUATION_RGB
#define GL_BLEND_EQUATION_RGB 0x8009
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_ENABLED
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_SIZE
#define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_STRIDE
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_TYPE
#define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#endif
#ifndef GL_CURRENT_VERTEX_ATTRIB
#define GL_CURRENT_VERTEX_ATTRIB 0x8626
#endif
#ifndef GL_VERTEX_PROGRAM_POINT_SIZE
#define GL_VERTEX_PROGRAM_POINT_SIZE 0x8642
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_POINTER
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#endif
#ifndef GL_STENCIL_BACK_FUNC
#define GL_STENCIL_BACK_FUNC 0x8800
#endif
#ifndef GL_STENCIL_BACK_FAIL
#define GL_STENCIL_BACK_FAIL 0x8801
#endif
#ifndef GL_STENCIL_BACK_PASS_DEPTH_FAIL
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#endif
#ifndef GL_STENCIL_BACK_PASS_DEPTH_PASS
#define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
#endif
#ifndef GL_MAX_DRAW_BUFFERS
#define GL_MAX_DRAW_BUFFERS 0x8824
#endif
#ifndef GL_DRAW_BUFFER0
#define GL_DRAW_BUFFER0 0x8825
#endif
#ifndef GL_DRAW_BUFFER1
#define GL_DRAW_BUFFER1 0x8826
#endif
#ifndef GL_DRAW_BUFFER2
#define GL_DRAW_BUFFER2 0x8827
#endif
#ifndef GL_DRAW_BUFFER3
#define GL_DRAW_BUFFER3 0x8828
#endif
#ifndef GL_DRAW_BUFFER4
#define GL_DRAW_BUFFER4 0x8829
#endif
#ifndef GL_DRAW_BUFFER5
#define GL_DRAW_BUFFER5 0x882A
#endif
#ifndef GL_DRAW_BUFFER6
#define GL_DRAW_BUFFER6 0x882B
#endif
#ifndef GL_DRAW_BUFFER7
#define GL_DRAW_BUFFER7 0x882C
#endif
#ifndef GL_DRAW_BUFFER8
#define GL_DRAW_BUFFER8 0x882D
#endif
#ifndef GL_DRAW_BUFFER9
#define GL_DRAW_BUFFER9 0x882E
#endif
#ifndef GL_DRAW_BUFFER10
#define GL_DRAW_BUFFER10 0x882F
#endif
#ifndef GL_DRAW_BUFFER11
#define GL_DRAW_BUFFER11 0x8830
#endif
#ifndef GL_DRAW_BUFFER12
#define GL_DRAW_BUFFER12 0x8831
#endif
#ifndef GL_DRAW_BUFFER13
#define GL_DRAW_BUFFER13 0x8832
#endif
#ifndef GL_DRAW_BUFFER14
#define GL_DRAW_BUFFER14 0x8833
#endif
#ifndef GL_DRAW_BUFFER15
#define GL_DRAW_BUFFER15 0x8834
#endif
#ifndef GL_BLEND_EQUATION_ALPHA
#define GL_BLEND_EQUATION_ALPHA 0x883D
#endif
#ifndef GL_MAX_VERTEX_ATTRIBS
#define GL_MAX_VERTEX_ATTRIBS 0x8869
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#endif
#ifndef GL_MAX_TEXTURE_IMAGE_UNITS
#define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#endif
#ifndef GL_FRAGMENT_SHADER
#define GL_FRAGMENT_SHADER 0x8B30
#endif
#ifndef GL_VERTEX_SHADER
#define GL_VERTEX_SHADER 0x8B31
#endif
#ifndef GL_MAX_FRAGMENT_UNIFORM_COMPONENTS
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#endif
#ifndef GL_MAX_VERTEX_UNIFORM_COMPONENTS
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS 0x8B4A
#endif
#ifndef GL_MAX_VARYING_FLOATS
#define GL_MAX_VARYING_FLOATS 0x8B4B
#endif
#ifndef GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#endif
#ifndef GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#endif
#ifndef GL_SHADER_TYPE
#define GL_SHADER_TYPE 0x8B4F
#endif
#ifndef GL_FLOAT_VEC2
#define GL_FLOAT_VEC2 0x8B50
#endif
#ifndef GL_FLOAT_VEC3
#define GL_FLOAT_VEC3 0x8B51
#endif
#ifndef GL_FLOAT_VEC4
#define GL_FLOAT_VEC4 0x8B52
#endif
#ifndef GL_INT_VEC2
#define GL_INT_VEC2 0x8B53
#endif
#ifndef GL_INT_VEC3
#define GL_INT_VEC3 0x8B54
#endif
#ifndef GL_INT_VEC4
#define GL_INT_VEC4 0x8B55
#endif
#ifndef GL_BOOL
#define GL_BOOL 0x8B56
#endif
#ifndef GL_BOOL_VEC2
#define GL_BOOL_VEC2 0x8B57
#endif
#ifndef GL_BOOL_VEC3
#define GL_BOOL_VEC3 0x8B58
#endif
#ifndef GL_BOOL_VEC4
#define GL_BOOL_VEC4 0x8B59
#endif
#ifndef GL_FLOAT_MAT2
#define GL_FLOAT_MAT2 0x8B5A
#endif
#ifndef GL_FLOAT_MAT3
#define GL_FLOAT_MAT3 0x8B5B
#endif
#ifndef GL_FLOAT_MAT4
#define GL_FLOAT_MAT4 0x8B5C
#endif
#ifndef GL_SAMPLER_1D
#define GL_SAMPLER_1D 0x8B5D
#endif
#ifndef GL_SAMPLER_2D
#define GL_SAMPLER_2D 0x8B5E
#endif
#ifndef GL_SAMPLER_3D
#define GL_SAMPLER_3D 0x8B5F
#endif
#ifndef GL_SAMPLER_CUBE
#define GL_SAMPLER_CUBE 0x8B60
#endif
#ifndef GL_SAMPLER_1D_SHADOW
#define GL_SAMPLER_1D_SHADOW 0x8B61
#endif
#ifndef GL_SAMPLER_2D_SHADOW
#define GL_SAMPLER_2D_SHADOW 0x8B62
#endif
#ifndef GL_DELETE_STATUS
#define GL_DELETE_STATUS 0x8B80
#endif
#ifndef GL_COMPILE_STATUS
#define GL_COMPILE_STATUS 0x8B81
#endif
#ifndef GL_LINK_STATUS
#define GL_LINK_STATUS 0x8B82
#endif
#ifndef GL_VALIDATE_STATUS
#define GL_VALIDATE_STATUS 0x8B83
#endif
#ifndef GL_INFO_LOG_LENGTH
#define GL_INFO_LOG_LENGTH 0x8B84
#endif
#ifndef GL_ATTACHED_SHADERS
#define GL_ATTACHED_SHADERS 0x8B85
#endif
#ifndef GL_ACTIVE_UNIFORMS
#define GL_ACTIVE_UNIFORMS 0x8B86
#endif
#ifndef GL_ACTIVE_UNIFORM_MAX_LENGTH
#define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#endif
#ifndef GL_SHADER_SOURCE_LENGTH
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#endif
#ifndef GL_ACTIVE_ATTRIBUTES
#define GL_ACTIVE_ATTRIBUTES 0x8B89
#endif
#ifndef GL_ACTIVE_ATTRIBUTE_MAX_LENGTH
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#endif
#ifndef GL_FRAGMENT_SHADER_DERIVATIVE_HINT
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#endif
#ifndef GL_SHADING_LANGUAGE_VERSION
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#endif
#ifndef GL_CURRENT_PROGRAM
#define GL_CURRENT_PROGRAM 0x8B8D
#endif
#ifndef GL_POINT_SPRITE_COORD_ORIGIN
#define GL_POINT_SPRITE_COORD_ORIGIN 0x8CA0
#endif
#ifndef GL_LOWER_LEFT
#define GL_LOWER_LEFT 0x8CA1
#endif
#ifndef GL_UPPER_LEFT
#define GL_UPPER_LEFT 0x8CA2
#endif
#ifndef GL_STENCIL_BACK_REF
#define GL_STENCIL_BACK_REF 0x8CA3
#endif
#ifndef GL_STENCIL_BACK_VALUE_MASK
#define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#endif
#ifndef GL_STENCIL_BACK_WRITEMASK
#define GL_STENCIL_BACK_WRITEMASK 0x8CA5
#endif
#ifndef GL_VERTEX_PROGRAM_TWO_SIDE
#define GL_VERTEX_PROGRAM_TWO_SIDE 0x8643
#endif
#ifndef GL_POINT_SPRITE
#define GL_POINT_SPRITE 0x8861
#endif
#ifndef GL_COORD_REPLACE
#define GL_COORD_REPLACE 0x8862
#endif
#ifndef GL_MAX_TEXTURE_COORDS
#define GL_MAX_TEXTURE_COORDS 0x8871
#endif
#ifndef GL_PIXEL_PACK_BUFFER
#define GL_PIXEL_PACK_BUFFER 0x88EB
#endif
#ifndef GL_PIXEL_UNPACK_BUFFER
#define GL_PIXEL_UNPACK_BUFFER 0x88EC
#endif
#ifndef GL_PIXEL_PACK_BUFFER_BINDING
#define GL_PIXEL_PACK_BUFFER_BINDING 0x88ED
#endif
#ifndef GL_PIXEL_UNPACK_BUFFER_BINDING
#define GL_PIXEL_UNPACK_BUFFER_BINDING 0x88EF
#endif
#ifndef GL_FLOAT_MAT2x3
#define GL_FLOAT_MAT2x3 0x8B65
#endif
#ifndef GL_FLOAT_MAT2x4
#define GL_FLOAT_MAT2x4 0x8B66
#endif
#ifndef GL_FLOAT_MAT3x2
#define GL_FLOAT_MAT3x2 0x8B67
#endif
#ifndef GL_FLOAT_MAT3x4
#define GL_FLOAT_MAT3x4 0x8B68
#endif
#ifndef GL_FLOAT_MAT4x2
#define GL_FLOAT_MAT4x2 0x8B69
#endif
#ifndef GL_FLOAT_MAT4x3
#define GL_FLOAT_MAT4x3 0x8B6A
#endif
#ifndef GL_SRGB
#define GL_SRGB 0x8C40
#endif
#ifndef GL_SRGB8
#define GL_SRGB8 0x8C41
#endif
#ifndef GL_SRGB_ALPHA
#define GL_SRGB_ALPHA 0x8C42
#endif
#ifndef GL_SRGB8_ALPHA8
#define GL_SRGB8_ALPHA8 0x8C43
#endif
#ifndef GL_COMPRESSED_SRGB
#define GL_COMPRESSED_SRGB 0x8C48
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA
#define GL_COMPRESSED_SRGB_ALPHA 0x8C49
#endif
#ifndef GL_CURRENT_RASTER_SECONDARY_COLOR
#define GL_CURRENT_RASTER_SECONDARY_COLOR 0x845F
#endif
#ifndef GL_SLUMINANCE_ALPHA
#define GL_SLUMINANCE_ALPHA 0x8C44
#endif
#ifndef GL_SLUMINANCE8_ALPHA8
#define GL_SLUMINANCE8_ALPHA8 0x8C45
#endif
#ifndef GL_SLUMINANCE
#define GL_SLUMINANCE 0x8C46
#endif
#ifndef GL_SLUMINANCE8
#define GL_SLUMINANCE8 0x8C47
#endif
#ifndef GL_COMPRESSED_SLUMINANCE
#define GL_COMPRESSED_SLUMINANCE 0x8C4A
#endif
#ifndef GL_COMPRESSED_SLUMINANCE_ALPHA
#define GL_COMPRESSED_SLUMINANCE_ALPHA 0x8C4B
#endif
#ifndef GL_COMPARE_REF_TO_TEXTURE
#define GL_COMPARE_REF_TO_TEXTURE 0x884E
#endif
#ifndef GL_CLIP_DISTANCE0
#define GL_CLIP_DISTANCE0 0x3000
#endif
#ifndef GL_CLIP_DISTANCE1
#define GL_CLIP_DISTANCE1 0x3001
#endif
#ifndef GL_CLIP_DISTANCE2
#define GL_CLIP_DISTANCE2 0x3002
#endif
#ifndef GL_CLIP_DISTANCE3
#define GL_CLIP_DISTANCE3 0x3003
#endif
#ifndef GL_CLIP_DISTANCE4
#define GL_CLIP_DISTANCE4 0x3004
#endif
#ifndef GL_CLIP_DISTANCE5
#define GL_CLIP_DISTANCE5 0x3005
#endif
#ifndef GL_CLIP_DISTANCE6
#define GL_CLIP_DISTANCE6 0x3006
#endif
#ifndef GL_CLIP_DISTANCE7
#define GL_CLIP_DISTANCE7 0x3007
#endif
#ifndef GL_MAX_CLIP_DISTANCES
#define GL_MAX_CLIP_DISTANCES 0x0D32
#endif
#ifndef GL_MAJOR_VERSION
#define GL_MAJOR_VERSION 0x821B
#endif
#ifndef GL_MINOR_VERSION
#define GL_MINOR_VERSION 0x821C
#endif
#ifndef GL_NUM_EXTENSIONS
#define GL_NUM_EXTENSIONS 0x821D
#endif
#ifndef GL_CONTEXT_FLAGS
#define GL_CONTEXT_FLAGS 0x821E
#endif
#ifndef GL_COMPRESSED_RED
#define GL_COMPRESSED_RED 0x8225
#endif
#ifndef GL_COMPRESSED_RG
#define GL_COMPRESSED_RG 0x8226
#endif
#ifndef GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
#endif
#ifndef GL_RGBA32F
#define GL_RGBA32F 0x8814
#endif
#ifndef GL_RGB32F
#define GL_RGB32F 0x8815
#endif
#ifndef GL_RGBA16F
#define GL_RGBA16F 0x881A
#endif
#ifndef GL_RGB16F
#define GL_RGB16F 0x881B
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_INTEGER
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER 0x88FD
#endif
#ifndef GL_MAX_ARRAY_TEXTURE_LAYERS
#define GL_MAX_ARRAY_TEXTURE_LAYERS 0x88FF
#endif
#ifndef GL_MIN_PROGRAM_TEXEL_OFFSET
#define GL_MIN_PROGRAM_TEXEL_OFFSET 0x8904
#endif
#ifndef GL_MAX_PROGRAM_TEXEL_OFFSET
#define GL_MAX_PROGRAM_TEXEL_OFFSET 0x8905
#endif
#ifndef GL_CLAMP_READ_COLOR
#define GL_CLAMP_READ_COLOR 0x891C
#endif
#ifndef GL_FIXED_ONLY
#define GL_FIXED_ONLY 0x891D
#endif
#ifndef GL_MAX_VARYING_COMPONENTS
#define GL_MAX_VARYING_COMPONENTS 0x8B4B
#endif
#ifndef GL_TEXTURE_1D_ARRAY
#define GL_TEXTURE_1D_ARRAY 0x8C18
#endif
#ifndef GL_PROXY_TEXTURE_1D_ARRAY
#define GL_PROXY_TEXTURE_1D_ARRAY 0x8C19
#endif
#ifndef GL_TEXTURE_2D_ARRAY
#define GL_TEXTURE_2D_ARRAY 0x8C1A
#endif
#ifndef GL_PROXY_TEXTURE_2D_ARRAY
#define GL_PROXY_TEXTURE_2D_ARRAY 0x8C1B
#endif
#ifndef GL_TEXTURE_BINDING_1D_ARRAY
#define GL_TEXTURE_BINDING_1D_ARRAY 0x8C1C
#endif
#ifndef GL_TEXTURE_BINDING_2D_ARRAY
#define GL_TEXTURE_BINDING_2D_ARRAY 0x8C1D
#endif
#ifndef GL_R11F_G11F_B10F
#define GL_R11F_G11F_B10F 0x8C3A
#endif
#ifndef GL_UNSIGNED_INT_10F_11F_11F_REV
#define GL_UNSIGNED_INT_10F_11F_11F_REV 0x8C3B
#endif
#ifndef GL_RGB9_E5
#define GL_RGB9_E5 0x8C3D
#endif
#ifndef GL_UNSIGNED_INT_5_9_9_9_REV
#define GL_UNSIGNED_INT_5_9_9_9_REV 0x8C3E
#endif
#ifndef GL_TEXTURE_SHARED_SIZE
#define GL_TEXTURE_SHARED_SIZE 0x8C3F
#endif
#ifndef GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_MODE
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#endif
#ifndef GL_TRANSFORM_FEEDBACK_VARYINGS
#define GL_TRANSFORM_FEEDBACK_VARYINGS 0x8C83
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_START
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_SIZE
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#endif
#ifndef GL_PRIMITIVES_GENERATED
#define GL_PRIMITIVES_GENERATED 0x8C87
#endif
#ifndef GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#endif
#ifndef GL_RASTERIZER_DISCARD
#define GL_RASTERIZER_DISCARD 0x8C89
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#endif
#ifndef GL_INTERLEAVED_ATTRIBS
#define GL_INTERLEAVED_ATTRIBS 0x8C8C
#endif
#ifndef GL_SEPARATE_ATTRIBS
#define GL_SEPARATE_ATTRIBS 0x8C8D
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER
#define GL_TRANSFORM_FEEDBACK_BUFFER 0x8C8E
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_BINDING
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#endif
#ifndef GL_RGBA32UI
#define GL_RGBA32UI 0x8D70
#endif
#ifndef GL_RGB32UI
#define GL_RGB32UI 0x8D71
#endif
#ifndef GL_RGBA16UI
#define GL_RGBA16UI 0x8D76
#endif
#ifndef GL_RGB16UI
#define GL_RGB16UI 0x8D77
#endif
#ifndef GL_RGBA8UI
#define GL_RGBA8UI 0x8D7C
#endif
#ifndef GL_RGB8UI
#define GL_RGB8UI 0x8D7D
#endif
#ifndef GL_RGBA32I
#define GL_RGBA32I 0x8D82
#endif
#ifndef GL_RGB32I
#define GL_RGB32I 0x8D83
#endif
#ifndef GL_RGBA16I
#define GL_RGBA16I 0x8D88
#endif
#ifndef GL_RGB16I
#define GL_RGB16I 0x8D89
#endif
#ifndef GL_RGBA8I
#define GL_RGBA8I 0x8D8E
#endif
#ifndef GL_RGB8I
#define GL_RGB8I 0x8D8F
#endif
#ifndef GL_RED_INTEGER
#define GL_RED_INTEGER 0x8D94
#endif
#ifndef GL_GREEN_INTEGER
#define GL_GREEN_INTEGER 0x8D95
#endif
#ifndef GL_BLUE_INTEGER
#define GL_BLUE_INTEGER 0x8D96
#endif
#ifndef GL_RGB_INTEGER
#define GL_RGB_INTEGER 0x8D98
#endif
#ifndef GL_RGBA_INTEGER
#define GL_RGBA_INTEGER 0x8D99
#endif
#ifndef GL_BGR_INTEGER
#define GL_BGR_INTEGER 0x8D9A
#endif
#ifndef GL_BGRA_INTEGER
#define GL_BGRA_INTEGER 0x8D9B
#endif
#ifndef GL_SAMPLER_1D_ARRAY
#define GL_SAMPLER_1D_ARRAY 0x8DC0
#endif
#ifndef GL_SAMPLER_2D_ARRAY
#define GL_SAMPLER_2D_ARRAY 0x8DC1
#endif
#ifndef GL_SAMPLER_1D_ARRAY_SHADOW
#define GL_SAMPLER_1D_ARRAY_SHADOW 0x8DC3
#endif
#ifndef GL_SAMPLER_2D_ARRAY_SHADOW
#define GL_SAMPLER_2D_ARRAY_SHADOW 0x8DC4
#endif
#ifndef GL_SAMPLER_CUBE_SHADOW
#define GL_SAMPLER_CUBE_SHADOW 0x8DC5
#endif
#ifndef GL_UNSIGNED_INT_VEC2
#define GL_UNSIGNED_INT_VEC2 0x8DC6
#endif
#ifndef GL_UNSIGNED_INT_VEC3
#define GL_UNSIGNED_INT_VEC3 0x8DC7
#endif
#ifndef GL_UNSIGNED_INT_VEC4
#define GL_UNSIGNED_INT_VEC4 0x8DC8
#endif
#ifndef GL_INT_SAMPLER_1D
#define GL_INT_SAMPLER_1D 0x8DC9
#endif
#ifndef GL_INT_SAMPLER_2D
#define GL_INT_SAMPLER_2D 0x8DCA
#endif
#ifndef GL_INT_SAMPLER_3D
#define GL_INT_SAMPLER_3D 0x8DCB
#endif
#ifndef GL_INT_SAMPLER_CUBE
#define GL_INT_SAMPLER_CUBE 0x8DCC
#endif
#ifndef GL_INT_SAMPLER_1D_ARRAY
#define GL_INT_SAMPLER_1D_ARRAY 0x8DCE
#endif
#ifndef GL_INT_SAMPLER_2D_ARRAY
#define GL_INT_SAMPLER_2D_ARRAY 0x8DCF
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_1D
#define GL_UNSIGNED_INT_SAMPLER_1D 0x8DD1
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D
#define GL_UNSIGNED_INT_SAMPLER_2D 0x8DD2
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_3D
#define GL_UNSIGNED_INT_SAMPLER_3D 0x8DD3
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_CUBE
#define GL_UNSIGNED_INT_SAMPLER_CUBE 0x8DD4
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_1D_ARRAY
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY 0x8DD6
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_ARRAY
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY 0x8DD7
#endif
#ifndef GL_QUERY_WAIT
#define GL_QUERY_WAIT 0x8E13
#endif
#ifndef GL_QUERY_NO_WAIT
#define GL_QUERY_NO_WAIT 0x8E14
#endif
#ifndef GL_QUERY_BY_REGION_WAIT
#define GL_QUERY_BY_REGION_WAIT 0x8E15
#endif
#ifndef GL_QUERY_BY_REGION_NO_WAIT
#define GL_QUERY_BY_REGION_NO_WAIT 0x8E16
#endif
#ifndef GL_BUFFER_ACCESS_FLAGS
#define GL_BUFFER_ACCESS_FLAGS 0x911F
#endif
#ifndef GL_BUFFER_MAP_LENGTH
#define GL_BUFFER_MAP_LENGTH 0x9120
#endif
#ifndef GL_BUFFER_MAP_OFFSET
#define GL_BUFFER_MAP_OFFSET 0x9121
#endif
#ifndef GL_DEPTH_COMPONENT32F
#define GL_DEPTH_COMPONENT32F 0x8CAC
#endif
#ifndef GL_DEPTH32F_STENCIL8
#define GL_DEPTH32F_STENCIL8 0x8CAD
#endif
#ifndef GL_FLOAT_32_UNSIGNED_INT_24_8_REV
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#endif
#ifndef GL_INVALID_FRAMEBUFFER_OPERATION
#define GL_INVALID_FRAMEBUFFER_OPERATION 0x0506
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#endif
#ifndef GL_FRAMEBUFFER_DEFAULT
#define GL_FRAMEBUFFER_DEFAULT 0x8218
#endif
#ifndef GL_FRAMEBUFFER_UNDEFINED
#define GL_FRAMEBUFFER_UNDEFINED 0x8219
#endif
#ifndef GL_DEPTH_STENCIL_ATTACHMENT
#define GL_DEPTH_STENCIL_ATTACHMENT 0x821A
#endif
#ifndef GL_MAX_RENDERBUFFER_SIZE
#define GL_MAX_RENDERBUFFER_SIZE 0x84E8
#endif
#ifndef GL_DEPTH_STENCIL
#define GL_DEPTH_STENCIL 0x84F9
#endif
#ifndef GL_UNSIGNED_INT_24_8
#define GL_UNSIGNED_INT_24_8 0x84FA
#endif
#ifndef GL_DEPTH24_STENCIL8
#define GL_DEPTH24_STENCIL8 0x88F0
#endif
#ifndef GL_TEXTURE_STENCIL_SIZE
#define GL_TEXTURE_STENCIL_SIZE 0x88F1
#endif
#ifndef GL_TEXTURE_RED_TYPE
#define GL_TEXTURE_RED_TYPE 0x8C10
#endif
#ifndef GL_TEXTURE_GREEN_TYPE
#define GL_TEXTURE_GREEN_TYPE 0x8C11
#endif
#ifndef GL_TEXTURE_BLUE_TYPE
#define GL_TEXTURE_BLUE_TYPE 0x8C12
#endif
#ifndef GL_TEXTURE_ALPHA_TYPE
#define GL_TEXTURE_ALPHA_TYPE 0x8C13
#endif
#ifndef GL_TEXTURE_DEPTH_TYPE
#define GL_TEXTURE_DEPTH_TYPE 0x8C16
#endif
#ifndef GL_UNSIGNED_NORMALIZED
#define GL_UNSIGNED_NORMALIZED 0x8C17
#endif
#ifndef GL_FRAMEBUFFER_BINDING
#define GL_FRAMEBUFFER_BINDING 0x8CA6
#endif
#ifndef GL_DRAW_FRAMEBUFFER_BINDING
#define GL_DRAW_FRAMEBUFFER_BINDING 0x8CA6
#endif
#ifndef GL_RENDERBUFFER_BINDING
#define GL_RENDERBUFFER_BINDING 0x8CA7
#endif
#ifndef GL_READ_FRAMEBUFFER
#define GL_READ_FRAMEBUFFER 0x8CA8
#endif
#ifndef GL_DRAW_FRAMEBUFFER
#define GL_DRAW_FRAMEBUFFER 0x8CA9
#endif
#ifndef GL_READ_FRAMEBUFFER_BINDING
#define GL_READ_FRAMEBUFFER_BINDING 0x8CAA
#endif
#ifndef GL_RENDERBUFFER_SAMPLES
#define GL_RENDERBUFFER_SAMPLES 0x8CAB
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#endif
#ifndef GL_FRAMEBUFFER_COMPLETE
#define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#endif
#ifndef GL_FRAMEBUFFER_UNSUPPORTED
#define GL_FRAMEBUFFER_UNSUPPORTED 0x8CDD
#endif
#ifndef GL_MAX_COLOR_ATTACHMENTS
#define GL_MAX_COLOR_ATTACHMENTS 0x8CDF
#endif
#ifndef GL_COLOR_ATTACHMENT0
#define GL_COLOR_ATTACHMENT0 0x8CE0
#endif
#ifndef GL_COLOR_ATTACHMENT1
#define GL_COLOR_ATTACHMENT1 0x8CE1
#endif
#ifndef GL_COLOR_ATTACHMENT2
#define GL_COLOR_ATTACHMENT2 0x8CE2
#endif
#ifndef GL_COLOR_ATTACHMENT3
#define GL_COLOR_ATTACHMENT3 0x8CE3
#endif
#ifndef GL_COLOR_ATTACHMENT4
#define GL_COLOR_ATTACHMENT4 0x8CE4
#endif
#ifndef GL_COLOR_ATTACHMENT5
#define GL_COLOR_ATTACHMENT5 0x8CE5
#endif
#ifndef GL_COLOR_ATTACHMENT6
#define GL_COLOR_ATTACHMENT6 0x8CE6
#endif
#ifndef GL_COLOR_ATTACHMENT7
#define GL_COLOR_ATTACHMENT7 0x8CE7
#endif
#ifndef GL_COLOR_ATTACHMENT8
#define GL_COLOR_ATTACHMENT8 0x8CE8
#endif
#ifndef GL_COLOR_ATTACHMENT9
#define GL_COLOR_ATTACHMENT9 0x8CE9
#endif
#ifndef GL_COLOR_ATTACHMENT10
#define GL_COLOR_ATTACHMENT10 0x8CEA
#endif
#ifndef GL_COLOR_ATTACHMENT11
#define GL_COLOR_ATTACHMENT11 0x8CEB
#endif
#ifndef GL_COLOR_ATTACHMENT12
#define GL_COLOR_ATTACHMENT12 0x8CEC
#endif
#ifndef GL_COLOR_ATTACHMENT13
#define GL_COLOR_ATTACHMENT13 0x8CED
#endif
#ifndef GL_COLOR_ATTACHMENT14
#define GL_COLOR_ATTACHMENT14 0x8CEE
#endif
#ifndef GL_COLOR_ATTACHMENT15
#define GL_COLOR_ATTACHMENT15 0x8CEF
#endif
#ifndef GL_COLOR_ATTACHMENT16
#define GL_COLOR_ATTACHMENT16 0x8CF0
#endif
#ifndef GL_COLOR_ATTACHMENT17
#define GL_COLOR_ATTACHMENT17 0x8CF1
#endif
#ifndef GL_COLOR_ATTACHMENT18
#define GL_COLOR_ATTACHMENT18 0x8CF2
#endif
#ifndef GL_COLOR_ATTACHMENT19
#define GL_COLOR_ATTACHMENT19 0x8CF3
#endif
#ifndef GL_COLOR_ATTACHMENT20
#define GL_COLOR_ATTACHMENT20 0x8CF4
#endif
#ifndef GL_COLOR_ATTACHMENT21
#define GL_COLOR_ATTACHMENT21 0x8CF5
#endif
#ifndef GL_COLOR_ATTACHMENT22
#define GL_COLOR_ATTACHMENT22 0x8CF6
#endif
#ifndef GL_COLOR_ATTACHMENT23
#define GL_COLOR_ATTACHMENT23 0x8CF7
#endif
#ifndef GL_COLOR_ATTACHMENT24
#define GL_COLOR_ATTACHMENT24 0x8CF8
#endif
#ifndef GL_COLOR_ATTACHMENT25
#define GL_COLOR_ATTACHMENT25 0x8CF9
#endif
#ifndef GL_COLOR_ATTACHMENT26
#define GL_COLOR_ATTACHMENT26 0x8CFA
#endif
#ifndef GL_COLOR_ATTACHMENT27
#define GL_COLOR_ATTACHMENT27 0x8CFB
#endif
#ifndef GL_COLOR_ATTACHMENT28
#define GL_COLOR_ATTACHMENT28 0x8CFC
#endif
#ifndef GL_COLOR_ATTACHMENT29
#define GL_COLOR_ATTACHMENT29 0x8CFD
#endif
#ifndef GL_COLOR_ATTACHMENT30
#define GL_COLOR_ATTACHMENT30 0x8CFE
#endif
#ifndef GL_COLOR_ATTACHMENT31
#define GL_COLOR_ATTACHMENT31 0x8CFF
#endif
#ifndef GL_DEPTH_ATTACHMENT
#define GL_DEPTH_ATTACHMENT 0x8D00
#endif
#ifndef GL_STENCIL_ATTACHMENT
#define GL_STENCIL_ATTACHMENT 0x8D20
#endif
#ifndef GL_FRAMEBUFFER
#define GL_FRAMEBUFFER 0x8D40
#endif
#ifndef GL_RENDERBUFFER
#define GL_RENDERBUFFER 0x8D41
#endif
#ifndef GL_RENDERBUFFER_WIDTH
#define GL_RENDERBUFFER_WIDTH 0x8D42
#endif
#ifndef GL_RENDERBUFFER_HEIGHT
#define GL_RENDERBUFFER_HEIGHT 0x8D43
#endif
#ifndef GL_RENDERBUFFER_INTERNAL_FORMAT
#define GL_RENDERBUFFER_INTERNAL_FORMAT 0x8D44
#endif
#ifndef GL_STENCIL_INDEX1
#define GL_STENCIL_INDEX1 0x8D46
#endif
#ifndef GL_STENCIL_INDEX4
#define GL_STENCIL_INDEX4 0x8D47
#endif
#ifndef GL_STENCIL_INDEX8
#define GL_STENCIL_INDEX8 0x8D48
#endif
#ifndef GL_STENCIL_INDEX16
#define GL_STENCIL_INDEX16 0x8D49
#endif
#ifndef GL_RENDERBUFFER_RED_SIZE
#define GL_RENDERBUFFER_RED_SIZE 0x8D50
#endif
#ifndef GL_RENDERBUFFER_GREEN_SIZE
#define GL_RENDERBUFFER_GREEN_SIZE 0x8D51
#endif
#ifndef GL_RENDERBUFFER_BLUE_SIZE
#define GL_RENDERBUFFER_BLUE_SIZE 0x8D52
#endif
#ifndef GL_RENDERBUFFER_ALPHA_SIZE
#define GL_RENDERBUFFER_ALPHA_SIZE 0x8D53
#endif
#ifndef GL_RENDERBUFFER_DEPTH_SIZE
#define GL_RENDERBUFFER_DEPTH_SIZE 0x8D54
#endif
#ifndef GL_RENDERBUFFER_STENCIL_SIZE
#define GL_RENDERBUFFER_STENCIL_SIZE 0x8D55
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#endif
#ifndef GL_MAX_SAMPLES
#define GL_MAX_SAMPLES 0x8D57
#endif
#ifndef GL_INDEX
#define GL_INDEX 0x8222
#endif
#ifndef GL_TEXTURE_LUMINANCE_TYPE
#define GL_TEXTURE_LUMINANCE_TYPE 0x8C14
#endif
#ifndef GL_TEXTURE_INTENSITY_TYPE
#define GL_TEXTURE_INTENSITY_TYPE 0x8C15
#endif
#ifndef GL_FRAMEBUFFER_SRGB
#define GL_FRAMEBUFFER_SRGB 0x8DB9
#endif
#ifndef GL_HALF_FLOAT
#define GL_HALF_FLOAT 0x140B
#endif
#ifndef GL_MAP_READ_BIT
#define GL_MAP_READ_BIT 0x0001
#endif
#ifndef GL_MAP_WRITE_BIT
#define GL_MAP_WRITE_BIT 0x0002
#endif
#ifndef GL_MAP_INVALIDATE_RANGE_BIT
#define GL_MAP_INVALIDATE_RANGE_BIT 0x0004
#endif
#ifndef GL_MAP_INVALIDATE_BUFFER_BIT
#define GL_MAP_INVALIDATE_BUFFER_BIT 0x0008
#endif
#ifndef GL_MAP_FLUSH_EXPLICIT_BIT
#define GL_MAP_FLUSH_EXPLICIT_BIT 0x0010
#endif
#ifndef GL_MAP_UNSYNCHRONIZED_BIT
#define GL_MAP_UNSYNCHRONIZED_BIT 0x0020
#endif
#ifndef GL_COMPRESSED_RED_RGTC1
#define GL_COMPRESSED_RED_RGTC1 0x8DBB
#endif
#ifndef GL_COMPRESSED_SIGNED_RED_RGTC1
#define GL_COMPRESSED_SIGNED_RED_RGTC1 0x8DBC
#endif
#ifndef GL_COMPRESSED_RG_RGTC2
#define GL_COMPRESSED_RG_RGTC2 0x8DBD
#endif
#ifndef GL_COMPRESSED_SIGNED_RG_RGTC2
#define GL_COMPRESSED_SIGNED_RG_RGTC2 0x8DBE
#endif
#ifndef GL_RG
#define GL_RG 0x8227
#endif
#ifndef GL_RG_INTEGER
#define GL_RG_INTEGER 0x8228
#endif
#ifndef GL_R8
#define GL_R8 0x8229
#endif
#ifndef GL_R16
#define GL_R16 0x822A
#endif
#ifndef GL_RG8
#define GL_RG8 0x822B
#endif
#ifndef GL_RG16
#define GL_RG16 0x822C
#endif
#ifndef GL_R16F
#define GL_R16F 0x822D
#endif
#ifndef GL_R32F
#define GL_R32F 0x822E
#endif
#ifndef GL_RG16F
#define GL_RG16F 0x822F
#endif
#ifndef GL_RG32F
#define GL_RG32F 0x8230
#endif
#ifndef GL_R8I
#define GL_R8I 0x8231
#endif
#ifndef GL_R8UI
#define GL_R8UI 0x8232
#endif
#ifndef GL_R16I
#define GL_R16I 0x8233
#endif
#ifndef GL_R16UI
#define GL_R16UI 0x8234
#endif
#ifndef GL_R32I
#define GL_R32I 0x8235
#endif
#ifndef GL_R32UI
#define GL_R32UI 0x8236
#endif
#ifndef GL_RG8I
#define GL_RG8I 0x8237
#endif
#ifndef GL_RG8UI
#define GL_RG8UI 0x8238
#endif
#ifndef GL_RG16I
#define GL_RG16I 0x8239
#endif
#ifndef GL_RG16UI
#define GL_RG16UI 0x823A
#endif
#ifndef GL_RG32I
#define GL_RG32I 0x823B
#endif
#ifndef GL_RG32UI
#define GL_RG32UI 0x823C
#endif
#ifndef GL_VERTEX_ARRAY_BINDING
#define GL_VERTEX_ARRAY_BINDING 0x85B5
#endif
#ifndef GL_CLAMP_VERTEX_COLOR
#define GL_CLAMP_VERTEX_COLOR 0x891A
#endif
#ifndef GL_CLAMP_FRAGMENT_COLOR
#define GL_CLAMP_FRAGMENT_COLOR 0x891B
#endif
#ifndef GL_ALPHA_INTEGER
#define GL_ALPHA_INTEGER 0x8D97
#endif
#ifndef GL_SAMPLER_2D_RECT
#define GL_SAMPLER_2D_RECT 0x8B63
#endif
#ifndef GL_SAMPLER_2D_RECT_SHADOW
#define GL_SAMPLER_2D_RECT_SHADOW 0x8B64
#endif
#ifndef GL_SAMPLER_BUFFER
#define GL_SAMPLER_BUFFER 0x8DC2
#endif
#ifndef GL_INT_SAMPLER_2D_RECT
#define GL_INT_SAMPLER_2D_RECT 0x8DCD
#endif
#ifndef GL_INT_SAMPLER_BUFFER
#define GL_INT_SAMPLER_BUFFER 0x8DD0
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_RECT
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT 0x8DD5
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_BUFFER
#define GL_UNSIGNED_INT_SAMPLER_BUFFER 0x8DD8
#endif
#ifndef GL_TEXTURE_BUFFER
#define GL_TEXTURE_BUFFER 0x8C2A
#endif
#ifndef GL_MAX_TEXTURE_BUFFER_SIZE
#define GL_MAX_TEXTURE_BUFFER_SIZE 0x8C2B
#endif
#ifndef GL_TEXTURE_BINDING_BUFFER
#define GL_TEXTURE_BINDING_BUFFER 0x8C2C
#endif
#ifndef GL_TEXTURE_BUFFER_DATA_STORE_BINDING
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#endif
#ifndef GL_TEXTURE_RECTANGLE
#define GL_TEXTURE_RECTANGLE 0x84F5
#endif
#ifndef GL_TEXTURE_BINDING_RECTANGLE
#define GL_TEXTURE_BINDING_RECTANGLE 0x84F6
#endif
#ifndef GL_PROXY_TEXTURE_RECTANGLE
#define GL_PROXY_TEXTURE_RECTANGLE 0x84F7
#endif
#ifndef GL_MAX_RECTANGLE_TEXTURE_SIZE
#define GL_MAX_RECTANGLE_TEXTURE_SIZE 0x84F8
#endif
#ifndef GL_R8_SNORM
#define GL_R8_SNORM 0x8F94
#endif
#ifndef GL_RG8_SNORM
#define GL_RG8_SNORM 0x8F95
#endif
#ifndef GL_RGB8_SNORM
#define GL_RGB8_SNORM 0x8F96
#endif
#ifndef GL_RGBA8_SNORM
#define GL_RGBA8_SNORM 0x8F97
#endif
#ifndef GL_R16_SNORM
#define GL_R16_SNORM 0x8F98
#endif
#ifndef GL_RG16_SNORM
#define GL_RG16_SNORM 0x8F99
#endif
#ifndef GL_RGB16_SNORM
#define GL_RGB16_SNORM 0x8F9A
#endif
#ifndef GL_RGBA16_SNORM
#define GL_RGBA16_SNORM 0x8F9B
#endif
#ifndef GL_SIGNED_NORMALIZED
#define GL_SIGNED_NORMALIZED 0x8F9C
#endif
#ifndef GL_PRIMITIVE_RESTART
#define GL_PRIMITIVE_RESTART 0x8F9D
#endif
#ifndef GL_PRIMITIVE_RESTART_INDEX
#define GL_PRIMITIVE_RESTART_INDEX 0x8F9E
#endif
#ifndef GL_COPY_READ_BUFFER
#define GL_COPY_READ_BUFFER 0x8F36
#endif
#ifndef GL_COPY_WRITE_BUFFER
#define GL_COPY_WRITE_BUFFER 0x8F37
#endif
#ifndef GL_UNIFORM_BUFFER
#define GL_UNIFORM_BUFFER 0x8A11
#endif
#ifndef GL_UNIFORM_BUFFER_BINDING
#define GL_UNIFORM_BUFFER_BINDING 0x8A28
#endif
#ifndef GL_UNIFORM_BUFFER_START
#define GL_UNIFORM_BUFFER_START 0x8A29
#endif
#ifndef GL_UNIFORM_BUFFER_SIZE
#define GL_UNIFORM_BUFFER_SIZE 0x8A2A
#endif
#ifndef GL_MAX_VERTEX_UNIFORM_BLOCKS
#define GL_MAX_VERTEX_UNIFORM_BLOCKS 0x8A2B
#endif
#ifndef GL_MAX_GEOMETRY_UNIFORM_BLOCKS
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS 0x8A2C
#endif
#ifndef GL_MAX_FRAGMENT_UNIFORM_BLOCKS
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS 0x8A2D
#endif
#ifndef GL_MAX_COMBINED_UNIFORM_BLOCKS
#define GL_MAX_COMBINED_UNIFORM_BLOCKS 0x8A2E
#endif
#ifndef GL_MAX_UNIFORM_BUFFER_BINDINGS
#define GL_MAX_UNIFORM_BUFFER_BINDINGS 0x8A2F
#endif
#ifndef GL_MAX_UNIFORM_BLOCK_SIZE
#define GL_MAX_UNIFORM_BLOCK_SIZE 0x8A30
#endif
#ifndef GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#endif
#ifndef GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#endif
#ifndef GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#endif
#ifndef GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#endif
#ifndef GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#endif
#ifndef GL_ACTIVE_UNIFORM_BLOCKS
#define GL_ACTIVE_UNIFORM_BLOCKS 0x8A36
#endif
#ifndef GL_UNIFORM_TYPE
#define GL_UNIFORM_TYPE 0x8A37
#endif
#ifndef GL_UNIFORM_SIZE
#define GL_UNIFORM_SIZE 0x8A38
#endif
#ifndef GL_UNIFORM_NAME_LENGTH
#define GL_UNIFORM_NAME_LENGTH 0x8A39
#endif
#ifndef GL_UNIFORM_BLOCK_INDEX
#define GL_UNIFORM_BLOCK_INDEX 0x8A3A
#endif
#ifndef GL_UNIFORM_OFFSET
#define GL_UNIFORM_OFFSET 0x8A3B
#endif
#ifndef GL_UNIFORM_ARRAY_STRIDE
#define GL_UNIFORM_ARRAY_STRIDE 0x8A3C
#endif
#ifndef GL_UNIFORM_MATRIX_STRIDE
#define GL_UNIFORM_MATRIX_STRIDE 0x8A3D
#endif
#ifndef GL_UNIFORM_IS_ROW_MAJOR
#define GL_UNIFORM_IS_ROW_MAJOR 0x8A3E
#endif
#ifndef GL_UNIFORM_BLOCK_BINDING
#define GL_UNIFORM_BLOCK_BINDING 0x8A3F
#endif
#ifndef GL_UNIFORM_BLOCK_DATA_SIZE
#define GL_UNIFORM_BLOCK_DATA_SIZE 0x8A40
#endif
#ifndef GL_UNIFORM_BLOCK_NAME_LENGTH
#define GL_UNIFORM_BLOCK_NAME_LENGTH 0x8A41
#endif
#ifndef GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS 0x8A42
#endif
#ifndef GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#endif
#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#endif
#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#endif
#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#endif
#ifndef GL_INVALID_INDEX
#define GL_INVALID_INDEX 0xFFFFFFFF
#endif
#ifndef GL_CONTEXT_CORE_PROFILE_BIT
#define GL_CONTEXT_CORE_PROFILE_BIT 0x00000001
#endif
#ifndef GL_CONTEXT_COMPATIBILITY_PROFILE_BIT
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#endif
#ifndef GL_LINES_ADJACENCY
#define GL_LINES_ADJACENCY 0x000A
#endif
#ifndef GL_LINE_STRIP_ADJACENCY
#define GL_LINE_STRIP_ADJACENCY 0x000B
#endif
#ifndef GL_TRIANGLES_ADJACENCY
#define GL_TRIANGLES_ADJACENCY 0x000C
#endif
#ifndef GL_TRIANGLE_STRIP_ADJACENCY
#define GL_TRIANGLE_STRIP_ADJACENCY 0x000D
#endif
#ifndef GL_PROGRAM_POINT_SIZE
#define GL_PROGRAM_POINT_SIZE 0x8642
#endif
#ifndef GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_LAYERED
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#endif
#ifndef GL_GEOMETRY_SHADER
#define GL_GEOMETRY_SHADER 0x8DD9
#endif
#ifndef GL_GEOMETRY_VERTICES_OUT
#define GL_GEOMETRY_VERTICES_OUT 0x8916
#endif
#ifndef GL_GEOMETRY_INPUT_TYPE
#define GL_GEOMETRY_INPUT_TYPE 0x8917
#endif
#ifndef GL_GEOMETRY_OUTPUT_TYPE
#define GL_GEOMETRY_OUTPUT_TYPE 0x8918
#endif
#ifndef GL_MAX_GEOMETRY_UNIFORM_COMPONENTS
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#endif
#ifndef GL_MAX_GEOMETRY_OUTPUT_VERTICES
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES 0x8DE0
#endif
#ifndef GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#endif
#ifndef GL_MAX_VERTEX_OUTPUT_COMPONENTS
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS 0x9122
#endif
#ifndef GL_MAX_GEOMETRY_INPUT_COMPONENTS
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS 0x9123
#endif
#ifndef GL_MAX_GEOMETRY_OUTPUT_COMPONENTS
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#endif
#ifndef GL_MAX_FRAGMENT_INPUT_COMPONENTS
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS 0x9125
#endif
#ifndef GL_CONTEXT_PROFILE_MASK
#define GL_CONTEXT_PROFILE_MASK 0x9126
#endif
#ifndef GL_DEPTH_CLAMP
#define GL_DEPTH_CLAMP 0x864F
#endif
#ifndef GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#endif
#ifndef GL_FIRST_VERTEX_CONVENTION
#define GL_FIRST_VERTEX_CONVENTION 0x8E4D
#endif
#ifndef GL_LAST_VERTEX_CONVENTION
#define GL_LAST_VERTEX_CONVENTION 0x8E4E
#endif
#ifndef GL_PROVOKING_VERTEX
#define GL_PROVOKING_VERTEX 0x8E4F
#endif
#ifndef GL_TEXTURE_CUBE_MAP_SEAMLESS
#define GL_TEXTURE_CUBE_MAP_SEAMLESS 0x884F
#endif
#ifndef GL_MAX_SERVER_WAIT_TIMEOUT
#define GL_MAX_SERVER_WAIT_TIMEOUT 0x9111
#endif
#ifndef GL_OBJECT_TYPE
#define GL_OBJECT_TYPE 0x9112
#endif
#ifndef GL_SYNC_CONDITION
#define GL_SYNC_CONDITION 0x9113
#endif
#ifndef GL_SYNC_STATUS
#define GL_SYNC_STATUS 0x9114
#endif
#ifndef GL_SYNC_FLAGS
#define GL_SYNC_FLAGS 0x9115
#endif
#ifndef GL_SYNC_FENCE
#define GL_SYNC_FENCE 0x9116
#endif
#ifndef GL_SYNC_GPU_COMMANDS_COMPLETE
#define GL_SYNC_GPU_COMMANDS_COMPLETE 0x9117
#endif
#ifndef GL_UNSIGNALED
#define GL_UNSIGNALED 0x9118
#endif
#ifndef GL_SIGNALED
#define GL_SIGNALED 0x9119
#endif
#ifndef GL_ALREADY_SIGNALED
#define GL_ALREADY_SIGNALED 0x911A
#endif
#ifndef GL_TIMEOUT_EXPIRED
#define GL_TIMEOUT_EXPIRED 0x911B
#endif
#ifndef GL_CONDITION_SATISFIED
#define GL_CONDITION_SATISFIED 0x911C
#endif
#ifndef GL_WAIT_FAILED
#define GL_WAIT_FAILED 0x911D
#endif
#ifndef GL_TIMEOUT_IGNORED
#define GL_TIMEOUT_IGNORED 0xFFFFFFFFFFFFFFFF
#endif
#ifndef GL_SYNC_FLUSH_COMMANDS_BIT
#define GL_SYNC_FLUSH_COMMANDS_BIT 0x00000001
#endif
#ifndef GL_SAMPLE_POSITION
#define GL_SAMPLE_POSITION 0x8E50
#endif
#ifndef GL_SAMPLE_MASK
#define GL_SAMPLE_MASK 0x8E51
#endif
#ifndef GL_SAMPLE_MASK_VALUE
#define GL_SAMPLE_MASK_VALUE 0x8E52
#endif
#ifndef GL_MAX_SAMPLE_MASK_WORDS
#define GL_MAX_SAMPLE_MASK_WORDS 0x8E59
#endif
#ifndef GL_TEXTURE_2D_MULTISAMPLE
#define GL_TEXTURE_2D_MULTISAMPLE 0x9100
#endif
#ifndef GL_PROXY_TEXTURE_2D_MULTISAMPLE
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE 0x9101
#endif
#ifndef GL_TEXTURE_2D_MULTISAMPLE_ARRAY
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9102
#endif
#ifndef GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#endif
#ifndef GL_TEXTURE_BINDING_2D_MULTISAMPLE
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#endif
#ifndef GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#endif
#ifndef GL_TEXTURE_SAMPLES
#define GL_TEXTURE_SAMPLES 0x9106
#endif
#ifndef GL_TEXTURE_FIXED_SAMPLE_LOCATIONS
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#endif
#ifndef GL_SAMPLER_2D_MULTISAMPLE
#define GL_SAMPLER_2D_MULTISAMPLE 0x9108
#endif
#ifndef GL_INT_SAMPLER_2D_MULTISAMPLE
#define GL_INT_SAMPLER_2D_MULTISAMPLE 0x9109
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#endif
#ifndef GL_SAMPLER_2D_MULTISAMPLE_ARRAY
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910B
#endif
#ifndef GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#endif
#ifndef GL_MAX_COLOR_TEXTURE_SAMPLES
#define GL_MAX_COLOR_TEXTURE_SAMPLES 0x910E
#endif
#ifndef GL_MAX_DEPTH_TEXTURE_SAMPLES
#define GL_MAX_DEPTH_TEXTURE_SAMPLES 0x910F
#endif
#ifndef GL_MAX_INTEGER_SAMPLES
#define GL_MAX_INTEGER_SAMPLES 0x9110
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_DIVISOR
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR 0x88FE
#endif
#ifndef GL_SRC1_COLOR
#define GL_SRC1_COLOR 0x88F9
#endif
#ifndef GL_ONE_MINUS_SRC1_COLOR
#define GL_ONE_MINUS_SRC1_COLOR 0x88FA
#endif
#ifndef GL_ONE_MINUS_SRC1_ALPHA
#define GL_ONE_MINUS_SRC1_ALPHA 0x88FB
#endif
#ifndef GL_MAX_DUAL_SOURCE_DRAW_BUFFERS
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS 0x88FC
#endif
#ifndef GL_ANY_SAMPLES_PASSED
#define GL_ANY_SAMPLES_PASSED 0x8C2F
#endif
#ifndef GL_SAMPLER_BINDING
#define GL_SAMPLER_BINDING 0x8919
#endif
#ifndef GL_RGB10_A2UI
#define GL_RGB10_A2UI 0x906F
#endif
#ifndef GL_TEXTURE_SWIZZLE_R
#define GL_TEXTURE_SWIZZLE_R 0x8E42
#endif
#ifndef GL_TEXTURE_SWIZZLE_G
#define GL_TEXTURE_SWIZZLE_G 0x8E43
#endif
#ifndef GL_TEXTURE_SWIZZLE_B
#define GL_TEXTURE_SWIZZLE_B 0x8E44
#endif
#ifndef GL_TEXTURE_SWIZZLE_A
#define GL_TEXTURE_SWIZZLE_A 0x8E45
#endif
#ifndef GL_TEXTURE_SWIZZLE_RGBA
#define GL_TEXTURE_SWIZZLE_RGBA 0x8E46
#endif
#ifndef GL_TIME_ELAPSED
#define GL_TIME_ELAPSED 0x88BF
#endif
#ifndef GL_TIMESTAMP
#define GL_TIMESTAMP 0x8E28
#endif
#ifndef GL_INT_2_10_10_10_REV
#define GL_INT_2_10_10_10_REV 0x8D9F
#endif
#ifndef GL_SAMPLE_SHADING
#define GL_SAMPLE_SHADING 0x8C36
#endif
#ifndef GL_MIN_SAMPLE_SHADING_VALUE
#define GL_MIN_SAMPLE_SHADING_VALUE 0x8C37
#endif
#ifndef GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#endif
#ifndef GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#endif
#ifndef GL_TEXTURE_CUBE_MAP_ARRAY
#define GL_TEXTURE_CUBE_MAP_ARRAY 0x9009
#endif
#ifndef GL_TEXTURE_BINDING_CUBE_MAP_ARRAY
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
#endif
#ifndef GL_PROXY_TEXTURE_CUBE_MAP_ARRAY
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY 0x900B
#endif
#ifndef GL_SAMPLER_CUBE_MAP_ARRAY
#define GL_SAMPLER_CUBE_MAP_ARRAY 0x900C
#endif
#ifndef GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW 0x900D
#endif
#ifndef GL_INT_SAMPLER_CUBE_MAP_ARRAY
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY 0x900E
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
#endif
#ifndef GL_DRAW_INDIRECT_BUFFER
#define GL_DRAW_INDIRECT_BUFFER 0x8F3F
#endif
#ifndef GL_DRAW_INDIRECT_BUFFER_BINDING
#define GL_DRAW_INDIRECT_BUFFER_BINDING 0x8F43
#endif
#ifndef GL_GEOMETRY_SHADER_INVOCATIONS
#define GL_GEOMETRY_SHADER_INVOCATIONS 0x887F
#endif
#ifndef GL_MAX_GEOMETRY_SHADER_INVOCATIONS
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#endif
#ifndef GL_MIN_FRAGMENT_INTERPOLATION_OFFSET
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#endif
#ifndef GL_MAX_FRAGMENT_INTERPOLATION_OFFSET
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#endif
#ifndef GL_FRAGMENT_INTERPOLATION_OFFSET_BITS
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
#endif
#ifndef GL_MAX_VERTEX_STREAMS
#define GL_MAX_VERTEX_STREAMS 0x8E71
#endif
#ifndef GL_DOUBLE_VEC2
#define GL_DOUBLE_VEC2 0x8FFC
#endif
#ifndef GL_DOUBLE_VEC3
#define GL_DOUBLE_VEC3 0x8FFD
#endif
#ifndef GL_DOUBLE_VEC4
#define GL_DOUBLE_VEC4 0x8FFE
#endif
#ifndef GL_DOUBLE_MAT2
#define GL_DOUBLE_MAT2 0x8F46
#endif
#ifndef GL_DOUBLE_MAT3
#define GL_DOUBLE_MAT3 0x8F47
#endif
#ifndef GL_DOUBLE_MAT4
#define GL_DOUBLE_MAT4 0x8F48
#endif
#ifndef GL_DOUBLE_MAT2x3
#define GL_DOUBLE_MAT2x3 0x8F49
#endif
#ifndef GL_DOUBLE_MAT2x4
#define GL_DOUBLE_MAT2x4 0x8F4A
#endif
#ifndef GL_DOUBLE_MAT3x2
#define GL_DOUBLE_MAT3x2 0x8F4B
#endif
#ifndef GL_DOUBLE_MAT3x4
#define GL_DOUBLE_MAT3x4 0x8F4C
#endif
#ifndef GL_DOUBLE_MAT4x2
#define GL_DOUBLE_MAT4x2 0x8F4D
#endif
#ifndef GL_DOUBLE_MAT4x3
#define GL_DOUBLE_MAT4x3 0x8F4E
#endif
#ifndef GL_ACTIVE_SUBROUTINES
#define GL_ACTIVE_SUBROUTINES 0x8DE5
#endif
#ifndef GL_ACTIVE_SUBROUTINE_UNIFORMS
#define GL_ACTIVE_SUBROUTINE_UNIFORMS 0x8DE6
#endif
#ifndef GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
#endif
#ifndef GL_ACTIVE_SUBROUTINE_MAX_LENGTH
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH 0x8E48
#endif
#ifndef GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
#endif
#ifndef GL_MAX_SUBROUTINES
#define GL_MAX_SUBROUTINES 0x8DE7
#endif
#ifndef GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
#endif
#ifndef GL_NUM_COMPATIBLE_SUBROUTINES
#define GL_NUM_COMPATIBLE_SUBROUTINES 0x8E4A
#endif
#ifndef GL_COMPATIBLE_SUBROUTINES
#define GL_COMPATIBLE_SUBROUTINES 0x8E4B
#endif
#ifndef GL_PATCHES
#define GL_PATCHES 0x000E
#endif
#ifndef GL_PATCH_VERTICES
#define GL_PATCH_VERTICES 0x8E72
#endif
#ifndef GL_PATCH_DEFAULT_INNER_LEVEL
#define GL_PATCH_DEFAULT_INNER_LEVEL 0x8E73
#endif
#ifndef GL_PATCH_DEFAULT_OUTER_LEVEL
#define GL_PATCH_DEFAULT_OUTER_LEVEL 0x8E74
#endif
#ifndef GL_TESS_CONTROL_OUTPUT_VERTICES
#define GL_TESS_CONTROL_OUTPUT_VERTICES 0x8E75
#endif
#ifndef GL_TESS_GEN_MODE
#define GL_TESS_GEN_MODE 0x8E76
#endif
#ifndef GL_TESS_GEN_SPACING
#define GL_TESS_GEN_SPACING 0x8E77
#endif
#ifndef GL_TESS_GEN_VERTEX_ORDER
#define GL_TESS_GEN_VERTEX_ORDER 0x8E78
#endif
#ifndef GL_TESS_GEN_POINT_MODE
#define GL_TESS_GEN_POINT_MODE 0x8E79
#endif
#ifndef GL_ISOLINES
#define GL_ISOLINES 0x8E7A
#endif
#ifndef GL_FRACTIONAL_ODD
#define GL_FRACTIONAL_ODD 0x8E7B
#endif
#ifndef GL_FRACTIONAL_EVEN
#define GL_FRACTIONAL_EVEN 0x8E7C
#endif
#ifndef GL_MAX_PATCH_VERTICES
#define GL_MAX_PATCH_VERTICES 0x8E7D
#endif
#ifndef GL_MAX_TESS_GEN_LEVEL
#define GL_MAX_TESS_GEN_LEVEL 0x8E7E
#endif
#ifndef GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
#endif
#ifndef GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
#endif
#ifndef GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
#endif
#ifndef GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
#endif
#ifndef GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
#endif
#ifndef GL_MAX_TESS_PATCH_COMPONENTS
#define GL_MAX_TESS_PATCH_COMPONENTS 0x8E84
#endif
#ifndef GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
#endif
#ifndef GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
#endif
#ifndef GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
#endif
#ifndef GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
#endif
#ifndef GL_MAX_TESS_CONTROL_INPUT_COMPONENTS
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
#endif
#ifndef GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
#endif
#ifndef GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
#endif
#ifndef GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
#endif
#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
#endif
#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
#endif
#ifndef GL_TESS_EVALUATION_SHADER
#define GL_TESS_EVALUATION_SHADER 0x8E87
#endif
#ifndef GL_TESS_CONTROL_SHADER
#define GL_TESS_CONTROL_SHADER 0x8E88
#endif
#ifndef GL_TRANSFORM_FEEDBACK
#define GL_TRANSFORM_FEEDBACK 0x8E22
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED 0x8E23
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE 0x8E24
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BINDING
#define GL_TRANSFORM_FEEDBACK_BINDING 0x8E25
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_BUFFERS
#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70
#endif
#ifndef GL_FIXED
#define GL_FIXED 0x140C
#endif
#ifndef GL_IMPLEMENTATION_COLOR_READ_TYPE
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#endif
#ifndef GL_IMPLEMENTATION_COLOR_READ_FORMAT
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#endif
#ifndef GL_LOW_FLOAT
#define GL_LOW_FLOAT 0x8DF0
#endif
#ifndef GL_MEDIUM_FLOAT
#define GL_MEDIUM_FLOAT 0x8DF1
#endif
#ifndef GL_HIGH_FLOAT
#define GL_HIGH_FLOAT 0x8DF2
#endif
#ifndef GL_LOW_INT
#define GL_LOW_INT 0x8DF3
#endif
#ifndef GL_MEDIUM_INT
#define GL_MEDIUM_INT 0x8DF4
#endif
#ifndef GL_HIGH_INT
#define GL_HIGH_INT 0x8DF5
#endif
#ifndef GL_SHADER_COMPILER
#define GL_SHADER_COMPILER 0x8DFA
#endif
#ifndef GL_SHADER_BINARY_FORMATS
#define GL_SHADER_BINARY_FORMATS 0x8DF8
#endif
#ifndef GL_NUM_SHADER_BINARY_FORMATS
#define GL_NUM_SHADER_BINARY_FORMATS 0x8DF9
#endif
#ifndef GL_MAX_VERTEX_UNIFORM_VECTORS
#define GL_MAX_VERTEX_UNIFORM_VECTORS 0x8DFB
#endif
#ifndef GL_MAX_VARYING_VECTORS
#define GL_MAX_VARYING_VECTORS 0x8DFC
#endif
#ifndef GL_MAX_FRAGMENT_UNIFORM_VECTORS
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS 0x8DFD
#endif
#ifndef GL_RGB565
#define GL_RGB565 0x8D62
#endif
#ifndef GL_PROGRAM_BINARY_RETRIEVABLE_HINT
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#endif
#ifndef GL_PROGRAM_BINARY_LENGTH
#define GL_PROGRAM_BINARY_LENGTH 0x8741
#endif
#ifndef GL_NUM_PROGRAM_BINARY_FORMATS
#define GL_NUM_PROGRAM_BINARY_FORMATS 0x87FE
#endif
#ifndef GL_PROGRAM_BINARY_FORMATS
#define GL_PROGRAM_BINARY_FORMATS 0x87FF
#endif
#ifndef GL_VERTEX_SHADER_BIT
#define GL_VERTEX_SHADER_BIT 0x00000001
#endif
#ifndef GL_FRAGMENT_SHADER_BIT
#define GL_FRAGMENT_SHADER_BIT 0x00000002
#endif
#ifndef GL_GEOMETRY_SHADER_BIT
#define GL_GEOMETRY_SHADER_BIT 0x00000004
#endif
#ifndef GL_TESS_CONTROL_SHADER_BIT
#define GL_TESS_CONTROL_SHADER_BIT 0x00000008
#endif
#ifndef GL_TESS_EVALUATION_SHADER_BIT
#define GL_TESS_EVALUATION_SHADER_BIT 0x00000010
#endif
#ifndef GL_ALL_SHADER_BITS
#define GL_ALL_SHADER_BITS 0xFFFFFFFF
#endif
#ifndef GL_PROGRAM_SEPARABLE
#define GL_PROGRAM_SEPARABLE 0x8258
#endif
#ifndef GL_ACTIVE_PROGRAM
#define GL_ACTIVE_PROGRAM 0x8259
#endif
#ifndef GL_PROGRAM_PIPELINE_BINDING
#define GL_PROGRAM_PIPELINE_BINDING 0x825A
#endif
#ifndef GL_MAX_VIEWPORTS
#define GL_MAX_VIEWPORTS 0x825B
#endif
#ifndef GL_VIEWPORT_SUBPIXEL_BITS
#define GL_VIEWPORT_SUBPIXEL_BITS 0x825C
#endif
#ifndef GL_VIEWPORT_BOUNDS_RANGE
#define GL_VIEWPORT_BOUNDS_RANGE 0x825D
#endif
#ifndef GL_LAYER_PROVOKING_VERTEX
#define GL_LAYER_PROVOKING_VERTEX 0x825E
#endif
#ifndef GL_VIEWPORT_INDEX_PROVOKING_VERTEX
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F
#endif
#ifndef GL_UNDEFINED_VERTEX
#define GL_UNDEFINED_VERTEX 0x8260
#endif
#ifndef GL_COPY_READ_BUFFER_BINDING
#define GL_COPY_READ_BUFFER_BINDING 0x8F36
#endif
#ifndef GL_COPY_WRITE_BUFFER_BINDING
#define GL_COPY_WRITE_BUFFER_BINDING 0x8F37
#endif
#ifndef GL_TRANSFORM_FEEDBACK_ACTIVE
#define GL_TRANSFORM_FEEDBACK_ACTIVE 0x8E24
#endif
#ifndef GL_TRANSFORM_FEEDBACK_PAUSED
#define GL_TRANSFORM_FEEDBACK_PAUSED 0x8E23
#endif
#ifndef GL_UNPACK_COMPRESSED_BLOCK_WIDTH
#define GL_UNPACK_COMPRESSED_BLOCK_WIDTH 0x9127
#endif
#ifndef GL_UNPACK_COMPRESSED_BLOCK_HEIGHT
#define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT 0x9128
#endif
#ifndef GL_UNPACK_COMPRESSED_BLOCK_DEPTH
#define GL_UNPACK_COMPRESSED_BLOCK_DEPTH 0x9129
#endif
#ifndef GL_UNPACK_COMPRESSED_BLOCK_SIZE
#define GL_UNPACK_COMPRESSED_BLOCK_SIZE 0x912A
#endif
#ifndef GL_PACK_COMPRESSED_BLOCK_WIDTH
#define GL_PACK_COMPRESSED_BLOCK_WIDTH 0x912B
#endif
#ifndef GL_PACK_COMPRESSED_BLOCK_HEIGHT
#define GL_PACK_COMPRESSED_BLOCK_HEIGHT 0x912C
#endif
#ifndef GL_PACK_COMPRESSED_BLOCK_DEPTH
#define GL_PACK_COMPRESSED_BLOCK_DEPTH 0x912D
#endif
#ifndef GL_PACK_COMPRESSED_BLOCK_SIZE
#define GL_PACK_COMPRESSED_BLOCK_SIZE 0x912E
#endif
#ifndef GL_NUM_SAMPLE_COUNTS
#define GL_NUM_SAMPLE_COUNTS 0x9380
#endif
#ifndef GL_MIN_MAP_BUFFER_ALIGNMENT
#define GL_MIN_MAP_BUFFER_ALIGNMENT 0x90BC
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER
#define GL_ATOMIC_COUNTER_BUFFER 0x92C0
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_BINDING
#define GL_ATOMIC_COUNTER_BUFFER_BINDING 0x92C1
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_START
#define GL_ATOMIC_COUNTER_BUFFER_START 0x92C2
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_SIZE
#define GL_ATOMIC_COUNTER_BUFFER_SIZE 0x92C3
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE
#define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE 0x92C4
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS 0x92C5
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES 0x92C6
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER 0x92C7
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER 0x92C8
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER 0x92C9
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER 0x92CA
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER 0x92CB
#endif
#ifndef GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS 0x92CC
#endif
#ifndef GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS 0x92CD
#endif
#ifndef GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS 0x92CE
#endif
#ifndef GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS 0x92CF
#endif
#ifndef GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS 0x92D0
#endif
#ifndef GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS 0x92D1
#endif
#ifndef GL_MAX_VERTEX_ATOMIC_COUNTERS
#define GL_MAX_VERTEX_ATOMIC_COUNTERS 0x92D2
#endif
#ifndef GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS 0x92D3
#endif
#ifndef GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS 0x92D4
#endif
#ifndef GL_MAX_GEOMETRY_ATOMIC_COUNTERS
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS 0x92D5
#endif
#ifndef GL_MAX_FRAGMENT_ATOMIC_COUNTERS
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS 0x92D6
#endif
#ifndef GL_MAX_COMBINED_ATOMIC_COUNTERS
#define GL_MAX_COMBINED_ATOMIC_COUNTERS 0x92D7
#endif
#ifndef GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE 0x92D8
#endif
#ifndef GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS 0x92DC
#endif
#ifndef GL_ACTIVE_ATOMIC_COUNTER_BUFFERS
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS 0x92D9
#endif
#ifndef GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX
#define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX 0x92DA
#endif
#ifndef GL_UNSIGNED_INT_ATOMIC_COUNTER
#define GL_UNSIGNED_INT_ATOMIC_COUNTER 0x92DB
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT 0x00000001
#endif
#ifndef GL_ELEMENT_ARRAY_BARRIER_BIT
#define GL_ELEMENT_ARRAY_BARRIER_BIT 0x00000002
#endif
#ifndef GL_UNIFORM_BARRIER_BIT
#define GL_UNIFORM_BARRIER_BIT 0x00000004
#endif
#ifndef GL_TEXTURE_FETCH_BARRIER_BIT
#define GL_TEXTURE_FETCH_BARRIER_BIT 0x00000008
#endif
#ifndef GL_SHADER_IMAGE_ACCESS_BARRIER_BIT
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT 0x00000020
#endif
#ifndef GL_COMMAND_BARRIER_BIT
#define GL_COMMAND_BARRIER_BIT 0x00000040
#endif
#ifndef GL_PIXEL_BUFFER_BARRIER_BIT
#define GL_PIXEL_BUFFER_BARRIER_BIT 0x00000080
#endif
#ifndef GL_TEXTURE_UPDATE_BARRIER_BIT
#define GL_TEXTURE_UPDATE_BARRIER_BIT 0x00000100
#endif
#ifndef GL_BUFFER_UPDATE_BARRIER_BIT
#define GL_BUFFER_UPDATE_BARRIER_BIT 0x00000200
#endif
#ifndef GL_FRAMEBUFFER_BARRIER_BIT
#define GL_FRAMEBUFFER_BARRIER_BIT 0x00000400
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BARRIER_BIT
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT 0x00000800
#endif
#ifndef GL_ATOMIC_COUNTER_BARRIER_BIT
#define GL_ATOMIC_COUNTER_BARRIER_BIT 0x00001000
#endif
#ifndef GL_ALL_BARRIER_BITS
#define GL_ALL_BARRIER_BITS 0xFFFFFFFF
#endif
#ifndef GL_MAX_IMAGE_UNITS
#define GL_MAX_IMAGE_UNITS 0x8F38
#endif
#ifndef GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS 0x8F39
#endif
#ifndef GL_IMAGE_BINDING_NAME
#define GL_IMAGE_BINDING_NAME 0x8F3A
#endif
#ifndef GL_IMAGE_BINDING_LEVEL
#define GL_IMAGE_BINDING_LEVEL 0x8F3B
#endif
#ifndef GL_IMAGE_BINDING_LAYERED
#define GL_IMAGE_BINDING_LAYERED 0x8F3C
#endif
#ifndef GL_IMAGE_BINDING_LAYER
#define GL_IMAGE_BINDING_LAYER 0x8F3D
#endif
#ifndef GL_IMAGE_BINDING_ACCESS
#define GL_IMAGE_BINDING_ACCESS 0x8F3E
#endif
#ifndef GL_IMAGE_1D
#define GL_IMAGE_1D 0x904C
#endif
#ifndef GL_IMAGE_2D
#define GL_IMAGE_2D 0x904D
#endif
#ifndef GL_IMAGE_3D
#define GL_IMAGE_3D 0x904E
#endif
#ifndef GL_IMAGE_2D_RECT
#define GL_IMAGE_2D_RECT 0x904F
#endif
#ifndef GL_IMAGE_CUBE
#define GL_IMAGE_CUBE 0x9050
#endif
#ifndef GL_IMAGE_BUFFER
#define GL_IMAGE_BUFFER 0x9051
#endif
#ifndef GL_IMAGE_1D_ARRAY
#define GL_IMAGE_1D_ARRAY 0x9052
#endif
#ifndef GL_IMAGE_2D_ARRAY
#define GL_IMAGE_2D_ARRAY 0x9053
#endif
#ifndef GL_IMAGE_CUBE_MAP_ARRAY
#define GL_IMAGE_CUBE_MAP_ARRAY 0x9054
#endif
#ifndef GL_IMAGE_2D_MULTISAMPLE
#define GL_IMAGE_2D_MULTISAMPLE 0x9055
#endif
#ifndef GL_IMAGE_2D_MULTISAMPLE_ARRAY
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY 0x9056
#endif
#ifndef GL_INT_IMAGE_1D
#define GL_INT_IMAGE_1D 0x9057
#endif
#ifndef GL_INT_IMAGE_2D
#define GL_INT_IMAGE_2D 0x9058
#endif
#ifndef GL_INT_IMAGE_3D
#define GL_INT_IMAGE_3D 0x9059
#endif
#ifndef GL_INT_IMAGE_2D_RECT
#define GL_INT_IMAGE_2D_RECT 0x905A
#endif
#ifndef GL_INT_IMAGE_CUBE
#define GL_INT_IMAGE_CUBE 0x905B
#endif
#ifndef GL_INT_IMAGE_BUFFER
#define GL_INT_IMAGE_BUFFER 0x905C
#endif
#ifndef GL_INT_IMAGE_1D_ARRAY
#define GL_INT_IMAGE_1D_ARRAY 0x905D
#endif
#ifndef GL_INT_IMAGE_2D_ARRAY
#define GL_INT_IMAGE_2D_ARRAY 0x905E
#endif
#ifndef GL_INT_IMAGE_CUBE_MAP_ARRAY
#define GL_INT_IMAGE_CUBE_MAP_ARRAY 0x905F
#endif
#ifndef GL_INT_IMAGE_2D_MULTISAMPLE
#define GL_INT_IMAGE_2D_MULTISAMPLE 0x9060
#endif
#ifndef GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x9061
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_1D
#define GL_UNSIGNED_INT_IMAGE_1D 0x9062
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D
#define GL_UNSIGNED_INT_IMAGE_2D 0x9063
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_3D
#define GL_UNSIGNED_INT_IMAGE_3D 0x9064
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_RECT
#define GL_UNSIGNED_INT_IMAGE_2D_RECT 0x9065
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_CUBE
#define GL_UNSIGNED_INT_IMAGE_CUBE 0x9066
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_BUFFER
#define GL_UNSIGNED_INT_IMAGE_BUFFER 0x9067
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_1D_ARRAY
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY 0x9068
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_ARRAY
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY 0x9069
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY 0x906A
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE 0x906B
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x906C
#endif
#ifndef GL_MAX_IMAGE_SAMPLES
#define GL_MAX_IMAGE_SAMPLES 0x906D
#endif
#ifndef GL_IMAGE_BINDING_FORMAT
#define GL_IMAGE_BINDING_FORMAT 0x906E
#endif
#ifndef GL_IMAGE_FORMAT_COMPATIBILITY_TYPE
#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE 0x90C7
#endif
#ifndef GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE 0x90C8
#endif
#ifndef GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS 0x90C9
#endif
#ifndef GL_MAX_VERTEX_IMAGE_UNIFORMS
#define GL_MAX_VERTEX_IMAGE_UNIFORMS 0x90CA
#endif
#ifndef GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS 0x90CB
#endif
#ifndef GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS 0x90CC
#endif
#ifndef GL_MAX_GEOMETRY_IMAGE_UNIFORMS
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS 0x90CD
#endif
#ifndef GL_MAX_FRAGMENT_IMAGE_UNIFORMS
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS 0x90CE
#endif
#ifndef GL_MAX_COMBINED_IMAGE_UNIFORMS
#define GL_MAX_COMBINED_IMAGE_UNIFORMS 0x90CF
#endif
#ifndef GL_COMPRESSED_RGBA_BPTC_UNORM
#define GL_COMPRESSED_RGBA_BPTC_UNORM 0x8E8C
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM 0x8E8D
#endif
#ifndef GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT 0x8E8E
#endif
#ifndef GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT 0x8E8F
#endif
#ifndef GL_TEXTURE_IMMUTABLE_FORMAT
#define GL_TEXTURE_IMMUTABLE_FORMAT 0x912F
#endif
#ifndef GL_NUM_SHADING_LANGUAGE_VERSIONS
#define GL_NUM_SHADING_LANGUAGE_VERSIONS 0x82E9
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_LONG
#define GL_VERTEX_ATTRIB_ARRAY_LONG 0x874E
#endif
#ifndef GL_COMPRESSED_RGB8_ETC2
#define GL_COMPRESSED_RGB8_ETC2 0x9274
#endif
#ifndef GL_COMPRESSED_SRGB8_ETC2
#define GL_COMPRESSED_SRGB8_ETC2 0x9275
#endif
#ifndef GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
#endif
#ifndef GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
#endif
#ifndef GL_COMPRESSED_RGBA8_ETC2_EAC
#define GL_COMPRESSED_RGBA8_ETC2_EAC 0x9278
#endif
#ifndef GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
#endif
#ifndef GL_COMPRESSED_R11_EAC
#define GL_COMPRESSED_R11_EAC 0x9270
#endif
#ifndef GL_COMPRESSED_SIGNED_R11_EAC
#define GL_COMPRESSED_SIGNED_R11_EAC 0x9271
#endif
#ifndef GL_COMPRESSED_RG11_EAC
#define GL_COMPRESSED_RG11_EAC 0x9272
#endif
#ifndef GL_COMPRESSED_SIGNED_RG11_EAC
#define GL_COMPRESSED_SIGNED_RG11_EAC 0x9273
#endif
#ifndef GL_PRIMITIVE_RESTART_FIXED_INDEX
#define GL_PRIMITIVE_RESTART_FIXED_INDEX 0x8D69
#endif
#ifndef GL_ANY_SAMPLES_PASSED_CONSERVATIVE
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
#endif
#ifndef GL_MAX_ELEMENT_INDEX
#define GL_MAX_ELEMENT_INDEX 0x8D6B
#endif
#ifndef GL_COMPUTE_SHADER
#define GL_COMPUTE_SHADER 0x91B9
#endif
#ifndef GL_MAX_COMPUTE_UNIFORM_BLOCKS
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS 0x91BB
#endif
#ifndef GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS 0x91BC
#endif
#ifndef GL_MAX_COMPUTE_IMAGE_UNIFORMS
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS 0x91BD
#endif
#ifndef GL_MAX_COMPUTE_SHARED_MEMORY_SIZE
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE 0x8262
#endif
#ifndef GL_MAX_COMPUTE_UNIFORM_COMPONENTS
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS 0x8263
#endif
#ifndef GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS 0x8264
#endif
#ifndef GL_MAX_COMPUTE_ATOMIC_COUNTERS
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS 0x8265
#endif
#ifndef GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS 0x8266
#endif
#ifndef GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS 0x90EB
#endif
#ifndef GL_MAX_COMPUTE_WORK_GROUP_COUNT
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT 0x91BE
#endif
#ifndef GL_MAX_COMPUTE_WORK_GROUP_SIZE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE 0x91BF
#endif
#ifndef GL_COMPUTE_WORK_GROUP_SIZE
#define GL_COMPUTE_WORK_GROUP_SIZE 0x8267
#endif
#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER 0x90EC
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER 0x90ED
#endif
#ifndef GL_DISPATCH_INDIRECT_BUFFER
#define GL_DISPATCH_INDIRECT_BUFFER 0x90EE
#endif
#ifndef GL_DISPATCH_INDIRECT_BUFFER_BINDING
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING 0x90EF
#endif
#ifndef GL_COMPUTE_SHADER_BIT
#define GL_COMPUTE_SHADER_BIT 0x00000020
#endif
#ifndef GL_DEBUG_OUTPUT_SYNCHRONOUS
#define GL_DEBUG_OUTPUT_SYNCHRONOUS 0x8242
#endif
#ifndef GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
#endif
#ifndef GL_DEBUG_CALLBACK_FUNCTION
#define GL_DEBUG_CALLBACK_FUNCTION 0x8244
#endif
#ifndef GL_DEBUG_CALLBACK_USER_PARAM
#define GL_DEBUG_CALLBACK_USER_PARAM 0x8245
#endif
#ifndef GL_DEBUG_SOURCE_API
#define GL_DEBUG_SOURCE_API 0x8246
#endif
#ifndef GL_DEBUG_SOURCE_WINDOW_SYSTEM
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM 0x8247
#endif
#ifndef GL_DEBUG_SOURCE_SHADER_COMPILER
#define GL_DEBUG_SOURCE_SHADER_COMPILER 0x8248
#endif
#ifndef GL_DEBUG_SOURCE_THIRD_PARTY
#define GL_DEBUG_SOURCE_THIRD_PARTY 0x8249
#endif
#ifndef GL_DEBUG_SOURCE_APPLICATION
#define GL_DEBUG_SOURCE_APPLICATION 0x824A
#endif
#ifndef GL_DEBUG_SOURCE_OTHER
#define GL_DEBUG_SOURCE_OTHER 0x824B
#endif
#ifndef GL_DEBUG_TYPE_ERROR
#define GL_DEBUG_TYPE_ERROR 0x824C
#endif
#ifndef GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#endif
#ifndef GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR 0x824E
#endif
#ifndef GL_DEBUG_TYPE_PORTABILITY
#define GL_DEBUG_TYPE_PORTABILITY 0x824F
#endif
#ifndef GL_DEBUG_TYPE_PERFORMANCE
#define GL_DEBUG_TYPE_PERFORMANCE 0x8250
#endif
#ifndef GL_DEBUG_TYPE_OTHER
#define GL_DEBUG_TYPE_OTHER 0x8251
#endif
#ifndef GL_MAX_DEBUG_MESSAGE_LENGTH
#define GL_MAX_DEBUG_MESSAGE_LENGTH 0x9143
#endif
#ifndef GL_MAX_DEBUG_LOGGED_MESSAGES
#define GL_MAX_DEBUG_LOGGED_MESSAGES 0x9144
#endif
#ifndef GL_DEBUG_LOGGED_MESSAGES
#define GL_DEBUG_LOGGED_MESSAGES 0x9145
#endif
#ifndef GL_DEBUG_SEVERITY_HIGH
#define GL_DEBUG_SEVERITY_HIGH 0x9146
#endif
#ifndef GL_DEBUG_SEVERITY_MEDIUM
#define GL_DEBUG_SEVERITY_MEDIUM 0x9147
#endif
#ifndef GL_DEBUG_SEVERITY_LOW
#define GL_DEBUG_SEVERITY_LOW 0x9148
#endif
#ifndef GL_DEBUG_TYPE_MARKER
#define GL_DEBUG_TYPE_MARKER 0x8268
#endif
#ifndef GL_DEBUG_TYPE_PUSH_GROUP
#define GL_DEBUG_TYPE_PUSH_GROUP 0x8269
#endif
#ifndef GL_DEBUG_TYPE_POP_GROUP
#define GL_DEBUG_TYPE_POP_GROUP 0x826A
#endif
#ifndef GL_DEBUG_SEVERITY_NOTIFICATION
#define GL_DEBUG_SEVERITY_NOTIFICATION 0x826B
#endif
#ifndef GL_MAX_DEBUG_GROUP_STACK_DEPTH
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH 0x826C
#endif
#ifndef GL_DEBUG_GROUP_STACK_DEPTH
#define GL_DEBUG_GROUP_STACK_DEPTH 0x826D
#endif
#ifndef GL_BUFFER
#define GL_BUFFER 0x82E0
#endif
#ifndef GL_SHADER
#define GL_SHADER 0x82E1
#endif
#ifndef GL_PROGRAM
#define GL_PROGRAM 0x82E2
#endif
#ifndef GL_QUERY
#define GL_QUERY 0x82E3
#endif
#ifndef GL_PROGRAM_PIPELINE
#define GL_PROGRAM_PIPELINE 0x82E4
#endif
#ifndef GL_SAMPLER
#define GL_SAMPLER 0x82E6
#endif
#ifndef GL_MAX_LABEL_LENGTH
#define GL_MAX_LABEL_LENGTH 0x82E8
#endif
#ifndef GL_DEBUG_OUTPUT
#define GL_DEBUG_OUTPUT 0x92E0
#endif
#ifndef GL_CONTEXT_FLAG_DEBUG_BIT
#define GL_CONTEXT_FLAG_DEBUG_BIT 0x00000002
#endif
#ifndef GL_MAX_UNIFORM_LOCATIONS
#define GL_MAX_UNIFORM_LOCATIONS 0x826E
#endif
#ifndef GL_FRAMEBUFFER_DEFAULT_WIDTH
#define GL_FRAMEBUFFER_DEFAULT_WIDTH 0x9310
#endif
#ifndef GL_FRAMEBUFFER_DEFAULT_HEIGHT
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT 0x9311
#endif
#ifndef GL_FRAMEBUFFER_DEFAULT_LAYERS
#define GL_FRAMEBUFFER_DEFAULT_LAYERS 0x9312
#endif
#ifndef GL_FRAMEBUFFER_DEFAULT_SAMPLES
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES 0x9313
#endif
#ifndef GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS 0x9314
#endif
#ifndef GL_MAX_FRAMEBUFFER_WIDTH
#define GL_MAX_FRAMEBUFFER_WIDTH 0x9315
#endif
#ifndef GL_MAX_FRAMEBUFFER_HEIGHT
#define GL_MAX_FRAMEBUFFER_HEIGHT 0x9316
#endif
#ifndef GL_MAX_FRAMEBUFFER_LAYERS
#define GL_MAX_FRAMEBUFFER_LAYERS 0x9317
#endif
#ifndef GL_MAX_FRAMEBUFFER_SAMPLES
#define GL_MAX_FRAMEBUFFER_SAMPLES 0x9318
#endif
#ifndef GL_INTERNALFORMAT_SUPPORTED
#define GL_INTERNALFORMAT_SUPPORTED 0x826F
#endif
#ifndef GL_INTERNALFORMAT_PREFERRED
#define GL_INTERNALFORMAT_PREFERRED 0x8270
#endif
#ifndef GL_INTERNALFORMAT_RED_SIZE
#define GL_INTERNALFORMAT_RED_SIZE 0x8271
#endif
#ifndef GL_INTERNALFORMAT_GREEN_SIZE
#define GL_INTERNALFORMAT_GREEN_SIZE 0x8272
#endif
#ifndef GL_INTERNALFORMAT_BLUE_SIZE
#define GL_INTERNALFORMAT_BLUE_SIZE 0x8273
#endif
#ifndef GL_INTERNALFORMAT_ALPHA_SIZE
#define GL_INTERNALFORMAT_ALPHA_SIZE 0x8274
#endif
#ifndef GL_INTERNALFORMAT_DEPTH_SIZE
#define GL_INTERNALFORMAT_DEPTH_SIZE 0x8275
#endif
#ifndef GL_INTERNALFORMAT_STENCIL_SIZE
#define GL_INTERNALFORMAT_STENCIL_SIZE 0x8276
#endif
#ifndef GL_INTERNALFORMAT_SHARED_SIZE
#define GL_INTERNALFORMAT_SHARED_SIZE 0x8277
#endif
#ifndef GL_INTERNALFORMAT_RED_TYPE
#define GL_INTERNALFORMAT_RED_TYPE 0x8278
#endif
#ifndef GL_INTERNALFORMAT_GREEN_TYPE
#define GL_INTERNALFORMAT_GREEN_TYPE 0x8279
#endif
#ifndef GL_INTERNALFORMAT_BLUE_TYPE
#define GL_INTERNALFORMAT_BLUE_TYPE 0x827A
#endif
#ifndef GL_INTERNALFORMAT_ALPHA_TYPE
#define GL_INTERNALFORMAT_ALPHA_TYPE 0x827B
#endif
#ifndef GL_INTERNALFORMAT_DEPTH_TYPE
#define GL_INTERNALFORMAT_DEPTH_TYPE 0x827C
#endif
#ifndef GL_INTERNALFORMAT_STENCIL_TYPE
#define GL_INTERNALFORMAT_STENCIL_TYPE 0x827D
#endif
#ifndef GL_MAX_WIDTH
#define GL_MAX_WIDTH 0x827E
#endif
#ifndef GL_MAX_HEIGHT
#define GL_MAX_HEIGHT 0x827F
#endif
#ifndef GL_MAX_DEPTH
#define GL_MAX_DEPTH 0x8280
#endif
#ifndef GL_MAX_LAYERS
#define GL_MAX_LAYERS 0x8281
#endif
#ifndef GL_MAX_COMBINED_DIMENSIONS
#define GL_MAX_COMBINED_DIMENSIONS 0x8282
#endif
#ifndef GL_COLOR_COMPONENTS
#define GL_COLOR_COMPONENTS 0x8283
#endif
#ifndef GL_DEPTH_COMPONENTS
#define GL_DEPTH_COMPONENTS 0x8284
#endif
#ifndef GL_STENCIL_COMPONENTS
#define GL_STENCIL_COMPONENTS 0x8285
#endif
#ifndef GL_COLOR_RENDERABLE
#define GL_COLOR_RENDERABLE 0x8286
#endif
#ifndef GL_DEPTH_RENDERABLE
#define GL_DEPTH_RENDERABLE 0x8287
#endif
#ifndef GL_STENCIL_RENDERABLE
#define GL_STENCIL_RENDERABLE 0x8288
#endif
#ifndef GL_FRAMEBUFFER_RENDERABLE
#define GL_FRAMEBUFFER_RENDERABLE 0x8289
#endif
#ifndef GL_FRAMEBUFFER_RENDERABLE_LAYERED
#define GL_FRAMEBUFFER_RENDERABLE_LAYERED 0x828A
#endif
#ifndef GL_FRAMEBUFFER_BLEND
#define GL_FRAMEBUFFER_BLEND 0x828B
#endif
#ifndef GL_READ_PIXELS
#define GL_READ_PIXELS 0x828C
#endif
#ifndef GL_READ_PIXELS_FORMAT
#define GL_READ_PIXELS_FORMAT 0x828D
#endif
#ifndef GL_READ_PIXELS_TYPE
#define GL_READ_PIXELS_TYPE 0x828E
#endif
#ifndef GL_TEXTURE_IMAGE_FORMAT
#define GL_TEXTURE_IMAGE_FORMAT 0x828F
#endif
#ifndef GL_TEXTURE_IMAGE_TYPE
#define GL_TEXTURE_IMAGE_TYPE 0x8290
#endif
#ifndef GL_GET_TEXTURE_IMAGE_FORMAT
#define GL_GET_TEXTURE_IMAGE_FORMAT 0x8291
#endif
#ifndef GL_GET_TEXTURE_IMAGE_TYPE
#define GL_GET_TEXTURE_IMAGE_TYPE 0x8292
#endif
#ifndef GL_MIPMAP
#define GL_MIPMAP 0x8293
#endif
#ifndef GL_MANUAL_GENERATE_MIPMAP
#define GL_MANUAL_GENERATE_MIPMAP 0x8294
#endif
#ifndef GL_AUTO_GENERATE_MIPMAP
#define GL_AUTO_GENERATE_MIPMAP 0x8295
#endif
#ifndef GL_COLOR_ENCODING
#define GL_COLOR_ENCODING 0x8296
#endif
#ifndef GL_SRGB_READ
#define GL_SRGB_READ 0x8297
#endif
#ifndef GL_SRGB_WRITE
#define GL_SRGB_WRITE 0x8298
#endif
#ifndef GL_FILTER
#define GL_FILTER 0x829A
#endif
#ifndef GL_VERTEX_TEXTURE
#define GL_VERTEX_TEXTURE 0x829B
#endif
#ifndef GL_TESS_CONTROL_TEXTURE
#define GL_TESS_CONTROL_TEXTURE 0x829C
#endif
#ifndef GL_TESS_EVALUATION_TEXTURE
#define GL_TESS_EVALUATION_TEXTURE 0x829D
#endif
#ifndef GL_GEOMETRY_TEXTURE
#define GL_GEOMETRY_TEXTURE 0x829E
#endif
#ifndef GL_FRAGMENT_TEXTURE
#define GL_FRAGMENT_TEXTURE 0x829F
#endif
#ifndef GL_COMPUTE_TEXTURE
#define GL_COMPUTE_TEXTURE 0x82A0
#endif
#ifndef GL_TEXTURE_SHADOW
#define GL_TEXTURE_SHADOW 0x82A1
#endif
#ifndef GL_TEXTURE_GATHER
#define GL_TEXTURE_GATHER 0x82A2
#endif
#ifndef GL_TEXTURE_GATHER_SHADOW
#define GL_TEXTURE_GATHER_SHADOW 0x82A3
#endif
#ifndef GL_SHADER_IMAGE_LOAD
#define GL_SHADER_IMAGE_LOAD 0x82A4
#endif
#ifndef GL_SHADER_IMAGE_STORE
#define GL_SHADER_IMAGE_STORE 0x82A5
#endif
#ifndef GL_SHADER_IMAGE_ATOMIC
#define GL_SHADER_IMAGE_ATOMIC 0x82A6
#endif
#ifndef GL_IMAGE_TEXEL_SIZE
#define GL_IMAGE_TEXEL_SIZE 0x82A7
#endif
#ifndef GL_IMAGE_COMPATIBILITY_CLASS
#define GL_IMAGE_COMPATIBILITY_CLASS 0x82A8
#endif
#ifndef GL_IMAGE_PIXEL_FORMAT
#define GL_IMAGE_PIXEL_FORMAT 0x82A9
#endif
#ifndef GL_IMAGE_PIXEL_TYPE
#define GL_IMAGE_PIXEL_TYPE 0x82AA
#endif
#ifndef GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST 0x82AC
#endif
#ifndef GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST 0x82AD
#endif
#ifndef GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE 0x82AE
#endif
#ifndef GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE 0x82AF
#endif
#ifndef GL_TEXTURE_COMPRESSED_BLOCK_WIDTH
#define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH 0x82B1
#endif
#ifndef GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT
#define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT 0x82B2
#endif
#ifndef GL_TEXTURE_COMPRESSED_BLOCK_SIZE
#define GL_TEXTURE_COMPRESSED_BLOCK_SIZE 0x82B3
#endif
#ifndef GL_CLEAR_BUFFER
#define GL_CLEAR_BUFFER 0x82B4
#endif
#ifndef GL_TEXTURE_VIEW
#define GL_TEXTURE_VIEW 0x82B5
#endif
#ifndef GL_VIEW_COMPATIBILITY_CLASS
#define GL_VIEW_COMPATIBILITY_CLASS 0x82B6
#endif
#ifndef GL_FULL_SUPPORT
#define GL_FULL_SUPPORT 0x82B7
#endif
#ifndef GL_CAVEAT_SUPPORT
#define GL_CAVEAT_SUPPORT 0x82B8
#endif
#ifndef GL_IMAGE_CLASS_4_X_32
#define GL_IMAGE_CLASS_4_X_32 0x82B9
#endif
#ifndef GL_IMAGE_CLASS_2_X_32
#define GL_IMAGE_CLASS_2_X_32 0x82BA
#endif
#ifndef GL_IMAGE_CLASS_1_X_32
#define GL_IMAGE_CLASS_1_X_32 0x82BB
#endif
#ifndef GL_IMAGE_CLASS_4_X_16
#define GL_IMAGE_CLASS_4_X_16 0x82BC
#endif
#ifndef GL_IMAGE_CLASS_2_X_16
#define GL_IMAGE_CLASS_2_X_16 0x82BD
#endif
#ifndef GL_IMAGE_CLASS_1_X_16
#define GL_IMAGE_CLASS_1_X_16 0x82BE
#endif
#ifndef GL_IMAGE_CLASS_4_X_8
#define GL_IMAGE_CLASS_4_X_8 0x82BF
#endif
#ifndef GL_IMAGE_CLASS_2_X_8
#define GL_IMAGE_CLASS_2_X_8 0x82C0
#endif
#ifndef GL_IMAGE_CLASS_1_X_8
#define GL_IMAGE_CLASS_1_X_8 0x82C1
#endif
#ifndef GL_IMAGE_CLASS_11_11_10
#define GL_IMAGE_CLASS_11_11_10 0x82C2
#endif
#ifndef GL_IMAGE_CLASS_10_10_10_2
#define GL_IMAGE_CLASS_10_10_10_2 0x82C3
#endif
#ifndef GL_VIEW_CLASS_128_BITS
#define GL_VIEW_CLASS_128_BITS 0x82C4
#endif
#ifndef GL_VIEW_CLASS_96_BITS
#define GL_VIEW_CLASS_96_BITS 0x82C5
#endif
#ifndef GL_VIEW_CLASS_64_BITS
#define GL_VIEW_CLASS_64_BITS 0x82C6
#endif
#ifndef GL_VIEW_CLASS_48_BITS
#define GL_VIEW_CLASS_48_BITS 0x82C7
#endif
#ifndef GL_VIEW_CLASS_32_BITS
#define GL_VIEW_CLASS_32_BITS 0x82C8
#endif
#ifndef GL_VIEW_CLASS_24_BITS
#define GL_VIEW_CLASS_24_BITS 0x82C9
#endif
#ifndef GL_VIEW_CLASS_16_BITS
#define GL_VIEW_CLASS_16_BITS 0x82CA
#endif
#ifndef GL_VIEW_CLASS_8_BITS
#define GL_VIEW_CLASS_8_BITS 0x82CB
#endif
#ifndef GL_VIEW_CLASS_S3TC_DXT1_RGB
#define GL_VIEW_CLASS_S3TC_DXT1_RGB 0x82CC
#endif
#ifndef GL_VIEW_CLASS_S3TC_DXT1_RGBA
#define GL_VIEW_CLASS_S3TC_DXT1_RGBA 0x82CD
#endif
#ifndef GL_VIEW_CLASS_S3TC_DXT3_RGBA
#define GL_VIEW_CLASS_S3TC_DXT3_RGBA 0x82CE
#endif
#ifndef GL_VIEW_CLASS_S3TC_DXT5_RGBA
#define GL_VIEW_CLASS_S3TC_DXT5_RGBA 0x82CF
#endif
#ifndef GL_VIEW_CLASS_RGTC1_RED
#define GL_VIEW_CLASS_RGTC1_RED 0x82D0
#endif
#ifndef GL_VIEW_CLASS_RGTC2_RG
#define GL_VIEW_CLASS_RGTC2_RG 0x82D1
#endif
#ifndef GL_VIEW_CLASS_BPTC_UNORM
#define GL_VIEW_CLASS_BPTC_UNORM 0x82D2
#endif
#ifndef GL_VIEW_CLASS_BPTC_FLOAT
#define GL_VIEW_CLASS_BPTC_FLOAT 0x82D3
#endif
#ifndef GL_UNIFORM
#define GL_UNIFORM 0x92E1
#endif
#ifndef GL_UNIFORM_BLOCK
#define GL_UNIFORM_BLOCK 0x92E2
#endif
#ifndef GL_PROGRAM_INPUT
#define GL_PROGRAM_INPUT 0x92E3
#endif
#ifndef GL_PROGRAM_OUTPUT
#define GL_PROGRAM_OUTPUT 0x92E4
#endif
#ifndef GL_BUFFER_VARIABLE
#define GL_BUFFER_VARIABLE 0x92E5
#endif
#ifndef GL_SHADER_STORAGE_BLOCK
#define GL_SHADER_STORAGE_BLOCK 0x92E6
#endif
#ifndef GL_VERTEX_SUBROUTINE
#define GL_VERTEX_SUBROUTINE 0x92E8
#endif
#ifndef GL_TESS_CONTROL_SUBROUTINE
#define GL_TESS_CONTROL_SUBROUTINE 0x92E9
#endif
#ifndef GL_TESS_EVALUATION_SUBROUTINE
#define GL_TESS_EVALUATION_SUBROUTINE 0x92EA
#endif
#ifndef GL_GEOMETRY_SUBROUTINE
#define GL_GEOMETRY_SUBROUTINE 0x92EB
#endif
#ifndef GL_FRAGMENT_SUBROUTINE
#define GL_FRAGMENT_SUBROUTINE 0x92EC
#endif
#ifndef GL_COMPUTE_SUBROUTINE
#define GL_COMPUTE_SUBROUTINE 0x92ED
#endif
#ifndef GL_VERTEX_SUBROUTINE_UNIFORM
#define GL_VERTEX_SUBROUTINE_UNIFORM 0x92EE
#endif
#ifndef GL_TESS_CONTROL_SUBROUTINE_UNIFORM
#define GL_TESS_CONTROL_SUBROUTINE_UNIFORM 0x92EF
#endif
#ifndef GL_TESS_EVALUATION_SUBROUTINE_UNIFORM
#define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM 0x92F0
#endif
#ifndef GL_GEOMETRY_SUBROUTINE_UNIFORM
#define GL_GEOMETRY_SUBROUTINE_UNIFORM 0x92F1
#endif
#ifndef GL_FRAGMENT_SUBROUTINE_UNIFORM
#define GL_FRAGMENT_SUBROUTINE_UNIFORM 0x92F2
#endif
#ifndef GL_COMPUTE_SUBROUTINE_UNIFORM
#define GL_COMPUTE_SUBROUTINE_UNIFORM 0x92F3
#endif
#ifndef GL_TRANSFORM_FEEDBACK_VARYING
#define GL_TRANSFORM_FEEDBACK_VARYING 0x92F4
#endif
#ifndef GL_ACTIVE_RESOURCES
#define GL_ACTIVE_RESOURCES 0x92F5
#endif
#ifndef GL_MAX_NAME_LENGTH
#define GL_MAX_NAME_LENGTH 0x92F6
#endif
#ifndef GL_MAX_NUM_ACTIVE_VARIABLES
#define GL_MAX_NUM_ACTIVE_VARIABLES 0x92F7
#endif
#ifndef GL_MAX_NUM_COMPATIBLE_SUBROUTINES
#define GL_MAX_NUM_COMPATIBLE_SUBROUTINES 0x92F8
#endif
#ifndef GL_NAME_LENGTH
#define GL_NAME_LENGTH 0x92F9
#endif
#ifndef GL_TYPE
#define GL_TYPE 0x92FA
#endif
#ifndef GL_ARRAY_SIZE
#define GL_ARRAY_SIZE 0x92FB
#endif
#ifndef GL_OFFSET
#define GL_OFFSET 0x92FC
#endif
#ifndef GL_BLOCK_INDEX
#define GL_BLOCK_INDEX 0x92FD
#endif
#ifndef GL_ARRAY_STRIDE
#define GL_ARRAY_STRIDE 0x92FE
#endif
#ifndef GL_MATRIX_STRIDE
#define GL_MATRIX_STRIDE 0x92FF
#endif
#ifndef GL_IS_ROW_MAJOR
#define GL_IS_ROW_MAJOR 0x9300
#endif
#ifndef GL_ATOMIC_COUNTER_BUFFER_INDEX
#define GL_ATOMIC_COUNTER_BUFFER_INDEX 0x9301
#endif
#ifndef GL_BUFFER_BINDING
#define GL_BUFFER_BINDING 0x9302
#endif
#ifndef GL_BUFFER_DATA_SIZE
#define GL_BUFFER_DATA_SIZE 0x9303
#endif
#ifndef GL_NUM_ACTIVE_VARIABLES
#define GL_NUM_ACTIVE_VARIABLES 0x9304
#endif
#ifndef GL_ACTIVE_VARIABLES
#define GL_ACTIVE_VARIABLES 0x9305
#endif
#ifndef GL_REFERENCED_BY_VERTEX_SHADER
#define GL_REFERENCED_BY_VERTEX_SHADER 0x9306
#endif
#ifndef GL_REFERENCED_BY_TESS_CONTROL_SHADER
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER 0x9307
#endif
#ifndef GL_REFERENCED_BY_TESS_EVALUATION_SHADER
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER 0x9308
#endif
#ifndef GL_REFERENCED_BY_GEOMETRY_SHADER
#define GL_REFERENCED_BY_GEOMETRY_SHADER 0x9309
#endif
#ifndef GL_REFERENCED_BY_FRAGMENT_SHADER
#define GL_REFERENCED_BY_FRAGMENT_SHADER 0x930A
#endif
#ifndef GL_REFERENCED_BY_COMPUTE_SHADER
#define GL_REFERENCED_BY_COMPUTE_SHADER 0x930B
#endif
#ifndef GL_TOP_LEVEL_ARRAY_SIZE
#define GL_TOP_LEVEL_ARRAY_SIZE 0x930C
#endif
#ifndef GL_TOP_LEVEL_ARRAY_STRIDE
#define GL_TOP_LEVEL_ARRAY_STRIDE 0x930D
#endif
#ifndef GL_LOCATION
#define GL_LOCATION 0x930E
#endif
#ifndef GL_LOCATION_INDEX
#define GL_LOCATION_INDEX 0x930F
#endif
#ifndef GL_IS_PER_PATCH
#define GL_IS_PER_PATCH 0x92E7
#endif
#ifndef GL_SHADER_STORAGE_BUFFER
#define GL_SHADER_STORAGE_BUFFER 0x90D2
#endif
#ifndef GL_SHADER_STORAGE_BUFFER_BINDING
#define GL_SHADER_STORAGE_BUFFER_BINDING 0x90D3
#endif
#ifndef GL_SHADER_STORAGE_BUFFER_START
#define GL_SHADER_STORAGE_BUFFER_START 0x90D4
#endif
#ifndef GL_SHADER_STORAGE_BUFFER_SIZE
#define GL_SHADER_STORAGE_BUFFER_SIZE 0x90D5
#endif
#ifndef GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS 0x90D6
#endif
#ifndef GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS 0x90D7
#endif
#ifndef GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS 0x90D8
#endif
#ifndef GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS 0x90D9
#endif
#ifndef GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 0x90DA
#endif
#ifndef GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS 0x90DB
#endif
#ifndef GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS 0x90DC
#endif
#ifndef GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS 0x90DD
#endif
#ifndef GL_MAX_SHADER_STORAGE_BLOCK_SIZE
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE 0x90DE
#endif
#ifndef GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT 0x90DF
#endif
#ifndef GL_SHADER_STORAGE_BARRIER_BIT
#define GL_SHADER_STORAGE_BARRIER_BIT 0x00002000
#endif
#ifndef GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES 0x8F39
#endif
#ifndef GL_DEPTH_STENCIL_TEXTURE_MODE
#define GL_DEPTH_STENCIL_TEXTURE_MODE 0x90EA
#endif
#ifndef GL_TEXTURE_BUFFER_OFFSET
#define GL_TEXTURE_BUFFER_OFFSET 0x919D
#endif
#ifndef GL_TEXTURE_BUFFER_SIZE
#define GL_TEXTURE_BUFFER_SIZE 0x919E
#endif
#ifndef GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT 0x919F
#endif
#ifndef GL_TEXTURE_VIEW_MIN_LEVEL
#define GL_TEXTURE_VIEW_MIN_LEVEL 0x82DB
#endif
#ifndef GL_TEXTURE_VIEW_NUM_LEVELS
#define GL_TEXTURE_VIEW_NUM_LEVELS 0x82DC
#endif
#ifndef GL_TEXTURE_VIEW_MIN_LAYER
#define GL_TEXTURE_VIEW_MIN_LAYER 0x82DD
#endif
#ifndef GL_TEXTURE_VIEW_NUM_LAYERS
#define GL_TEXTURE_VIEW_NUM_LAYERS 0x82DE
#endif
#ifndef GL_TEXTURE_IMMUTABLE_LEVELS
#define GL_TEXTURE_IMMUTABLE_LEVELS 0x82DF
#endif
#ifndef GL_VERTEX_ATTRIB_BINDING
#define GL_VERTEX_ATTRIB_BINDING 0x82D4
#endif
#ifndef GL_VERTEX_ATTRIB_RELATIVE_OFFSET
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D5
#endif
#ifndef GL_VERTEX_BINDING_DIVISOR
#define GL_VERTEX_BINDING_DIVISOR 0x82D6
#endif
#ifndef GL_VERTEX_BINDING_OFFSET
#define GL_VERTEX_BINDING_OFFSET 0x82D7
#endif
#ifndef GL_VERTEX_BINDING_STRIDE
#define GL_VERTEX_BINDING_STRIDE 0x82D8
#endif
#ifndef GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D9
#endif
#ifndef GL_MAX_VERTEX_ATTRIB_BINDINGS
#define GL_MAX_VERTEX_ATTRIB_BINDINGS 0x82DA
#endif
#ifndef GL_VERTEX_BINDING_BUFFER
#define GL_VERTEX_BINDING_BUFFER 0x8F4F
#endif
#ifndef GL_DISPLAY_LIST
#define GL_DISPLAY_LIST 0x82E7
#endif
#ifndef GL_MAX_VERTEX_ATTRIB_STRIDE
#define GL_MAX_VERTEX_ATTRIB_STRIDE 0x82E5
#endif
#ifndef GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
#endif
#ifndef GL_TEXTURE_BUFFER_BINDING
#define GL_TEXTURE_BUFFER_BINDING 0x8C2A
#endif
#ifndef GL_MAP_PERSISTENT_BIT
#define GL_MAP_PERSISTENT_BIT 0x0040
#endif
#ifndef GL_MAP_COHERENT_BIT
#define GL_MAP_COHERENT_BIT 0x0080
#endif
#ifndef GL_DYNAMIC_STORAGE_BIT
#define GL_DYNAMIC_STORAGE_BIT 0x0100
#endif
#ifndef GL_CLIENT_STORAGE_BIT
#define GL_CLIENT_STORAGE_BIT 0x0200
#endif
#ifndef GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT 0x00004000
#endif
#ifndef GL_BUFFER_IMMUTABLE_STORAGE
#define GL_BUFFER_IMMUTABLE_STORAGE 0x821F
#endif
#ifndef GL_BUFFER_STORAGE_FLAGS
#define GL_BUFFER_STORAGE_FLAGS 0x8220
#endif
#ifndef GL_CLEAR_TEXTURE
#define GL_CLEAR_TEXTURE 0x9365
#endif
#ifndef GL_LOCATION_COMPONENT
#define GL_LOCATION_COMPONENT 0x934A
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_INDEX
#define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX 0x934B
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE
#define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE 0x934C
#endif
#ifndef GL_QUERY_BUFFER
#define GL_QUERY_BUFFER 0x9192
#endif
#ifndef GL_QUERY_BUFFER_BARRIER_BIT
#define GL_QUERY_BUFFER_BARRIER_BIT 0x00008000
#endif
#ifndef GL_QUERY_BUFFER_BINDING
#define GL_QUERY_BUFFER_BINDING 0x9193
#endif
#ifndef GL_QUERY_RESULT_NO_WAIT
#define GL_QUERY_RESULT_NO_WAIT 0x9194
#endif
#ifndef GL_MIRROR_CLAMP_TO_EDGE
#define GL_MIRROR_CLAMP_TO_EDGE 0x8743
#endif
#ifndef GL_CONTEXT_LOST
#define GL_CONTEXT_LOST 0x0507
#endif
#ifndef GL_NEGATIVE_ONE_TO_ONE
#define GL_NEGATIVE_ONE_TO_ONE 0x935E
#endif
#ifndef GL_ZERO_TO_ONE
#define GL_ZERO_TO_ONE 0x935F
#endif
#ifndef GL_CLIP_ORIGIN
#define GL_CLIP_ORIGIN 0x935C
#endif
#ifndef GL_CLIP_DEPTH_MODE
#define GL_CLIP_DEPTH_MODE 0x935D
#endif
#ifndef GL_QUERY_WAIT_INVERTED
#define GL_QUERY_WAIT_INVERTED 0x8E17
#endif
#ifndef GL_QUERY_NO_WAIT_INVERTED
#define GL_QUERY_NO_WAIT_INVERTED 0x8E18
#endif
#ifndef GL_QUERY_BY_REGION_WAIT_INVERTED
#define GL_QUERY_BY_REGION_WAIT_INVERTED 0x8E19
#endif
#ifndef GL_QUERY_BY_REGION_NO_WAIT_INVERTED
#define GL_QUERY_BY_REGION_NO_WAIT_INVERTED 0x8E1A
#endif
#ifndef GL_MAX_CULL_DISTANCES
#define GL_MAX_CULL_DISTANCES 0x82F9
#endif
#ifndef GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES 0x82FA
#endif
#ifndef GL_TEXTURE_TARGET
#define GL_TEXTURE_TARGET 0x1006
#endif
#ifndef GL_QUERY_TARGET
#define GL_QUERY_TARGET 0x82EA
#endif
#ifndef GL_GUILTY_CONTEXT_RESET
#define GL_GUILTY_CONTEXT_RESET 0x8253
#endif
#ifndef GL_INNOCENT_CONTEXT_RESET
#define GL_INNOCENT_CONTEXT_RESET 0x8254
#endif
#ifndef GL_UNKNOWN_CONTEXT_RESET
#define GL_UNKNOWN_CONTEXT_RESET 0x8255
#endif
#ifndef GL_RESET_NOTIFICATION_STRATEGY
#define GL_RESET_NOTIFICATION_STRATEGY 0x8256
#endif
#ifndef GL_LOSE_CONTEXT_ON_RESET
#define GL_LOSE_CONTEXT_ON_RESET 0x8252
#endif
#ifndef GL_NO_RESET_NOTIFICATION
#define GL_NO_RESET_NOTIFICATION 0x8261
#endif
#ifndef GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT 0x00000004
#endif
#ifndef GL_CONTEXT_RELEASE_BEHAVIOR
#define GL_CONTEXT_RELEASE_BEHAVIOR 0x82FB
#endif
#ifndef GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC
#endif


#define wbgl__GLPROC_LIST_GL_VERSION_1_0 \
	wbgl_GLPROC(void, CullFace, GLenum mode) \
	wbgl_GLPROC(void, FrontFace, GLenum mode) \
	wbgl_GLPROC(void, Hint, GLenum target, GLenum mode) \
	wbgl_GLPROC(void, LineWidth, GLfloat width) \
	wbgl_GLPROC(void, PointSize, GLfloat size) \
	wbgl_GLPROC(void, PolygonMode, GLenum face, GLenum mode) \
	wbgl_GLPROC(void, Scissor, GLint x, GLint y, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, TexParameterf, GLenum target, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, TexParameterfv, GLenum target, GLenum pname, const GLfloat *params) \
	wbgl_GLPROC(void, TexParameteri, GLenum target, GLenum pname, GLint param) \
	wbgl_GLPROC(void, TexParameteriv, GLenum target, GLenum pname, const GLint *params) \
	wbgl_GLPROC(void, TexImage1D, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) \
	wbgl_GLPROC(void, TexImage2D, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) \
	wbgl_GLPROC(void, DrawBuffer, GLenum buf) \
	wbgl_GLPROC(void, Clear, GLbitfield mask) \
	wbgl_GLPROC(void, ClearColor, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) \
	wbgl_GLPROC(void, ClearStencil, GLint s) \
	wbgl_GLPROC(void, ClearDepth, GLdouble depth) \
	wbgl_GLPROC(void, StencilMask, GLuint mask) \
	wbgl_GLPROC(void, ColorMask, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) \
	wbgl_GLPROC(void, DepthMask, GLboolean flag) \
	wbgl_GLPROC(void, Disable, GLenum cap) \
	wbgl_GLPROC(void, Enable, GLenum cap) \
	wbgl_GLPROC(void, Finish, void) \
	wbgl_GLPROC(void, Flush, void) \
	wbgl_GLPROC(void, BlendFunc, GLenum sfactor, GLenum dfactor) \
	wbgl_GLPROC(void, LogicOp, GLenum opcode) \
	wbgl_GLPROC(void, StencilFunc, GLenum func, GLint ref, GLuint mask) \
	wbgl_GLPROC(void, StencilOp, GLenum fail, GLenum zfail, GLenum zpass) \
	wbgl_GLPROC(void, DepthFunc, GLenum func) \
	wbgl_GLPROC(void, PixelStoref, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, PixelStorei, GLenum pname, GLint param) \
	wbgl_GLPROC(void, ReadBuffer, GLenum src) \
	wbgl_GLPROC(void, ReadPixels, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels) \
	wbgl_GLPROC(void, GetBooleanv, GLenum pname, GLboolean *data) \
	wbgl_GLPROC(void, GetDoublev, GLenum pname, GLdouble *data) \
	wbgl_GLPROC(GLenum, GetError, void) \
	wbgl_GLPROC(void, GetFloatv, GLenum pname, GLfloat *data) \
	wbgl_GLPROC(void, GetIntegerv, GLenum pname, GLint *data) \
	wbgl_GLPROC(const GLubyte *, GetString, GLenum name) \
	wbgl_GLPROC(void, GetTexImage, GLenum target, GLint level, GLenum format, GLenum type, void *pixels) \
	wbgl_GLPROC(void, GetTexParameterfv, GLenum target, GLenum pname, GLfloat *params) \
	wbgl_GLPROC(void, GetTexParameteriv, GLenum target, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetTexLevelParameterfv, GLenum target, GLint level, GLenum pname, GLfloat *params) \
	wbgl_GLPROC(void, GetTexLevelParameteriv, GLenum target, GLint level, GLenum pname, GLint *params) \
	wbgl_GLPROC(GLboolean, IsEnabled, GLenum cap) \
	wbgl_GLPROC(void, DepthRange, GLdouble near, GLdouble far) \
	wbgl_GLPROC(void, Viewport, GLint x, GLint y, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, NewList, GLuint list, GLenum mode) \
	wbgl_GLPROC(void, EndList, void) \
	wbgl_GLPROC(void, CallList, GLuint list) \
	wbgl_GLPROC(void, CallLists, GLsizei n, GLenum type, const void *lists) \
	wbgl_GLPROC(void, DeleteLists, GLuint list, GLsizei range) \
	wbgl_GLPROC(GLuint, GenLists, GLsizei range) \
	wbgl_GLPROC(void, ListBase, GLuint base) \
	wbgl_GLPROC(void, Begin, GLenum mode) \
	wbgl_GLPROC(void, Bitmap, GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap) \
	wbgl_GLPROC(void, Color3b, GLbyte red, GLbyte green, GLbyte blue) \
	wbgl_GLPROC(void, Color3bv, const GLbyte *v) \
	wbgl_GLPROC(void, Color3d, GLdouble red, GLdouble green, GLdouble blue) \
	wbgl_GLPROC(void, Color3dv, const GLdouble *v) \
	wbgl_GLPROC(void, Color3f, GLfloat red, GLfloat green, GLfloat blue) \
	wbgl_GLPROC(void, Color3fv, const GLfloat *v) \
	wbgl_GLPROC(void, Color3i, GLint red, GLint green, GLint blue) \
	wbgl_GLPROC(void, Color3iv, const GLint *v) \
	wbgl_GLPROC(void, Color3s, GLshort red, GLshort green, GLshort blue) \
	wbgl_GLPROC(void, Color3sv, const GLshort *v) \
	wbgl_GLPROC(void, Color3ub, GLubyte red, GLubyte green, GLubyte blue) \
	wbgl_GLPROC(void, Color3ubv, const GLubyte *v) \
	wbgl_GLPROC(void, Color3ui, GLuint red, GLuint green, GLuint blue) \
	wbgl_GLPROC(void, Color3uiv, const GLuint *v) \
	wbgl_GLPROC(void, Color3us, GLushort red, GLushort green, GLushort blue) \
	wbgl_GLPROC(void, Color3usv, const GLushort *v) \
	wbgl_GLPROC(void, Color4b, GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha) \
	wbgl_GLPROC(void, Color4bv, const GLbyte *v) \
	wbgl_GLPROC(void, Color4d, GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha) \
	wbgl_GLPROC(void, Color4dv, const GLdouble *v) \
	wbgl_GLPROC(void, Color4f, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) \
	wbgl_GLPROC(void, Color4fv, const GLfloat *v) \
	wbgl_GLPROC(void, Color4i, GLint red, GLint green, GLint blue, GLint alpha) \
	wbgl_GLPROC(void, Color4iv, const GLint *v) \
	wbgl_GLPROC(void, Color4s, GLshort red, GLshort green, GLshort blue, GLshort alpha) \
	wbgl_GLPROC(void, Color4sv, const GLshort *v) \
	wbgl_GLPROC(void, Color4ub, GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha) \
	wbgl_GLPROC(void, Color4ubv, const GLubyte *v) \
	wbgl_GLPROC(void, Color4ui, GLuint red, GLuint green, GLuint blue, GLuint alpha) \
	wbgl_GLPROC(void, Color4uiv, const GLuint *v) \
	wbgl_GLPROC(void, Color4us, GLushort red, GLushort green, GLushort blue, GLushort alpha) \
	wbgl_GLPROC(void, Color4usv, const GLushort *v) \
	wbgl_GLPROC(void, EdgeFlag, GLboolean flag) \
	wbgl_GLPROC(void, EdgeFlagv, const GLboolean *flag) \
	wbgl_GLPROC(void, End, void) \
	wbgl_GLPROC(void, Indexd, GLdouble c) \
	wbgl_GLPROC(void, Indexdv, const GLdouble *c) \
	wbgl_GLPROC(void, Indexf, GLfloat c) \
	wbgl_GLPROC(void, Indexfv, const GLfloat *c) \
	wbgl_GLPROC(void, Indexi, GLint c) \
	wbgl_GLPROC(void, Indexiv, const GLint *c) \
	wbgl_GLPROC(void, Indexs, GLshort c) \
	wbgl_GLPROC(void, Indexsv, const GLshort *c) \
	wbgl_GLPROC(void, Normal3b, GLbyte nx, GLbyte ny, GLbyte nz) \
	wbgl_GLPROC(void, Normal3bv, const GLbyte *v) \
	wbgl_GLPROC(void, Normal3d, GLdouble nx, GLdouble ny, GLdouble nz) \
	wbgl_GLPROC(void, Normal3dv, const GLdouble *v) \
	wbgl_GLPROC(void, Normal3f, GLfloat nx, GLfloat ny, GLfloat nz) \
	wbgl_GLPROC(void, Normal3fv, const GLfloat *v) \
	wbgl_GLPROC(void, Normal3i, GLint nx, GLint ny, GLint nz) \
	wbgl_GLPROC(void, Normal3iv, const GLint *v) \
	wbgl_GLPROC(void, Normal3s, GLshort nx, GLshort ny, GLshort nz) \
	wbgl_GLPROC(void, Normal3sv, const GLshort *v) \
	wbgl_GLPROC(void, RasterPos2d, GLdouble x, GLdouble y) \
	wbgl_GLPROC(void, RasterPos2dv, const GLdouble *v) \
	wbgl_GLPROC(void, RasterPos2f, GLfloat x, GLfloat y) \
	wbgl_GLPROC(void, RasterPos2fv, const GLfloat *v) \
	wbgl_GLPROC(void, RasterPos2i, GLint x, GLint y) \
	wbgl_GLPROC(void, RasterPos2iv, const GLint *v) \
	wbgl_GLPROC(void, RasterPos2s, GLshort x, GLshort y) \
	wbgl_GLPROC(void, RasterPos2sv, const GLshort *v) \
	wbgl_GLPROC(void, RasterPos3d, GLdouble x, GLdouble y, GLdouble z) \
	wbgl_GLPROC(void, RasterPos3dv, const GLdouble *v) \
	wbgl_GLPROC(void, RasterPos3f, GLfloat x, GLfloat y, GLfloat z) \
	wbgl_GLPROC(void, RasterPos3fv, const GLfloat *v) \
	wbgl_GLPROC(void, RasterPos3i, GLint x, GLint y, GLint z) \
	wbgl_GLPROC(void, RasterPos3iv, const GLint *v) \
	wbgl_GLPROC(void, RasterPos3s, GLshort x, GLshort y, GLshort z) \
	wbgl_GLPROC(void, RasterPos3sv, const GLshort *v) \
	wbgl_GLPROC(void, RasterPos4d, GLdouble x, GLdouble y, GLdouble z, GLdouble w) \
	wbgl_GLPROC(void, RasterPos4dv, const GLdouble *v) \
	wbgl_GLPROC(void, RasterPos4f, GLfloat x, GLfloat y, GLfloat z, GLfloat w) \
	wbgl_GLPROC(void, RasterPos4fv, const GLfloat *v) \
	wbgl_GLPROC(void, RasterPos4i, GLint x, GLint y, GLint z, GLint w) \
	wbgl_GLPROC(void, RasterPos4iv, const GLint *v) \
	wbgl_GLPROC(void, RasterPos4s, GLshort x, GLshort y, GLshort z, GLshort w) \
	wbgl_GLPROC(void, RasterPos4sv, const GLshort *v) \
	wbgl_GLPROC(void, Rectd, GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2) \
	wbgl_GLPROC(void, Rectdv, const GLdouble *v1, const GLdouble *v2) \
	wbgl_GLPROC(void, Rectf, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2) \
	wbgl_GLPROC(void, Rectfv, const GLfloat *v1, const GLfloat *v2) \
	wbgl_GLPROC(void, Recti, GLint x1, GLint y1, GLint x2, GLint y2) \
	wbgl_GLPROC(void, Rectiv, const GLint *v1, const GLint *v2) \
	wbgl_GLPROC(void, Rects, GLshort x1, GLshort y1, GLshort x2, GLshort y2) \
	wbgl_GLPROC(void, Rectsv, const GLshort *v1, const GLshort *v2) \
	wbgl_GLPROC(void, TexCoord1d, GLdouble s) \
	wbgl_GLPROC(void, TexCoord1dv, const GLdouble *v) \
	wbgl_GLPROC(void, TexCoord1f, GLfloat s) \
	wbgl_GLPROC(void, TexCoord1fv, const GLfloat *v) \
	wbgl_GLPROC(void, TexCoord1i, GLint s) \
	wbgl_GLPROC(void, TexCoord1iv, const GLint *v) \
	wbgl_GLPROC(void, TexCoord1s, GLshort s) \
	wbgl_GLPROC(void, TexCoord1sv, const GLshort *v) \
	wbgl_GLPROC(void, TexCoord2d, GLdouble s, GLdouble t) \
	wbgl_GLPROC(void, TexCoord2dv, const GLdouble *v) \
	wbgl_GLPROC(void, TexCoord2f, GLfloat s, GLfloat t) \
	wbgl_GLPROC(void, TexCoord2fv, const GLfloat *v) \
	wbgl_GLPROC(void, TexCoord2i, GLint s, GLint t) \
	wbgl_GLPROC(void, TexCoord2iv, const GLint *v) \
	wbgl_GLPROC(void, TexCoord2s, GLshort s, GLshort t) \
	wbgl_GLPROC(void, TexCoord2sv, const GLshort *v) \
	wbgl_GLPROC(void, TexCoord3d, GLdouble s, GLdouble t, GLdouble r) \
	wbgl_GLPROC(void, TexCoord3dv, const GLdouble *v) \
	wbgl_GLPROC(void, TexCoord3f, GLfloat s, GLfloat t, GLfloat r) \
	wbgl_GLPROC(void, TexCoord3fv, const GLfloat *v) \
	wbgl_GLPROC(void, TexCoord3i, GLint s, GLint t, GLint r) \
	wbgl_GLPROC(void, TexCoord3iv, const GLint *v) \
	wbgl_GLPROC(void, TexCoord3s, GLshort s, GLshort t, GLshort r) \
	wbgl_GLPROC(void, TexCoord3sv, const GLshort *v) \
	wbgl_GLPROC(void, TexCoord4d, GLdouble s, GLdouble t, GLdouble r, GLdouble q) \
	wbgl_GLPROC(void, TexCoord4dv, const GLdouble *v) \
	wbgl_GLPROC(void, TexCoord4f, GLfloat s, GLfloat t, GLfloat r, GLfloat q) \
	wbgl_GLPROC(void, TexCoord4fv, const GLfloat *v) \
	wbgl_GLPROC(void, TexCoord4i, GLint s, GLint t, GLint r, GLint q) \
	wbgl_GLPROC(void, TexCoord4iv, const GLint *v) \
	wbgl_GLPROC(void, TexCoord4s, GLshort s, GLshort t, GLshort r, GLshort q) \
	wbgl_GLPROC(void, TexCoord4sv, const GLshort *v) \
	wbgl_GLPROC(void, Vertex2d, GLdouble x, GLdouble y) \
	wbgl_GLPROC(void, Vertex2dv, const GLdouble *v) \
	wbgl_GLPROC(void, Vertex2f, GLfloat x, GLfloat y) \
	wbgl_GLPROC(void, Vertex2fv, const GLfloat *v) \
	wbgl_GLPROC(void, Vertex2i, GLint x, GLint y) \
	wbgl_GLPROC(void, Vertex2iv, const GLint *v) \
	wbgl_GLPROC(void, Vertex2s, GLshort x, GLshort y) \
	wbgl_GLPROC(void, Vertex2sv, const GLshort *v) \
	wbgl_GLPROC(void, Vertex3d, GLdouble x, GLdouble y, GLdouble z) \
	wbgl_GLPROC(void, Vertex3dv, const GLdouble *v) \
	wbgl_GLPROC(void, Vertex3f, GLfloat x, GLfloat y, GLfloat z) \
	wbgl_GLPROC(void, Vertex3fv, const GLfloat *v) \
	wbgl_GLPROC(void, Vertex3i, GLint x, GLint y, GLint z) \
	wbgl_GLPROC(void, Vertex3iv, const GLint *v) \
	wbgl_GLPROC(void, Vertex3s, GLshort x, GLshort y, GLshort z) \
	wbgl_GLPROC(void, Vertex3sv, const GLshort *v) \
	wbgl_GLPROC(void, Vertex4d, GLdouble x, GLdouble y, GLdouble z, GLdouble w) \
	wbgl_GLPROC(void, Vertex4dv, const GLdouble *v) \
	wbgl_GLPROC(void, Vertex4f, GLfloat x, GLfloat y, GLfloat z, GLfloat w) \
	wbgl_GLPROC(void, Vertex4fv, const GLfloat *v) \
	wbgl_GLPROC(void, Vertex4i, GLint x, GLint y, GLint z, GLint w) \
	wbgl_GLPROC(void, Vertex4iv, const GLint *v) \
	wbgl_GLPROC(void, Vertex4s, GLshort x, GLshort y, GLshort z, GLshort w) \
	wbgl_GLPROC(void, Vertex4sv, const GLshort *v) \
	wbgl_GLPROC(void, ClipPlane, GLenum plane, const GLdouble *equation) \
	wbgl_GLPROC(void, ColorMaterial, GLenum face, GLenum mode) \
	wbgl_GLPROC(void, Fogf, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, Fogfv, GLenum pname, const GLfloat *params) \
	wbgl_GLPROC(void, Fogi, GLenum pname, GLint param) \
	wbgl_GLPROC(void, Fogiv, GLenum pname, const GLint *params) \
	wbgl_GLPROC(void, Lightf, GLenum light, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, Lightfv, GLenum light, GLenum pname, const GLfloat *params) \
	wbgl_GLPROC(void, Lighti, GLenum light, GLenum pname, GLint param) \
	wbgl_GLPROC(void, Lightiv, GLenum light, GLenum pname, const GLint *params) \
	wbgl_GLPROC(void, LightModelf, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, LightModelfv, GLenum pname, const GLfloat *params) \
	wbgl_GLPROC(void, LightModeli, GLenum pname, GLint param) \
	wbgl_GLPROC(void, LightModeliv, GLenum pname, const GLint *params) \
	wbgl_GLPROC(void, LineStipple, GLint factor, GLushort pattern) \
	wbgl_GLPROC(void, Materialf, GLenum face, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, Materialfv, GLenum face, GLenum pname, const GLfloat *params) \
	wbgl_GLPROC(void, Materiali, GLenum face, GLenum pname, GLint param) \
	wbgl_GLPROC(void, Materialiv, GLenum face, GLenum pname, const GLint *params) \
	wbgl_GLPROC(void, PolygonStipple, const GLubyte *mask) \
	wbgl_GLPROC(void, ShadeModel, GLenum mode) \
	wbgl_GLPROC(void, TexEnvf, GLenum target, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, TexEnvfv, GLenum target, GLenum pname, const GLfloat *params) \
	wbgl_GLPROC(void, TexEnvi, GLenum target, GLenum pname, GLint param) \
	wbgl_GLPROC(void, TexEnviv, GLenum target, GLenum pname, const GLint *params) \
	wbgl_GLPROC(void, TexGend, GLenum coord, GLenum pname, GLdouble param) \
	wbgl_GLPROC(void, TexGendv, GLenum coord, GLenum pname, const GLdouble *params) \
	wbgl_GLPROC(void, TexGenf, GLenum coord, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, TexGenfv, GLenum coord, GLenum pname, const GLfloat *params) \
	wbgl_GLPROC(void, TexGeni, GLenum coord, GLenum pname, GLint param) \
	wbgl_GLPROC(void, TexGeniv, GLenum coord, GLenum pname, const GLint *params) \
	wbgl_GLPROC(void, FeedbackBuffer, GLsizei size, GLenum type, GLfloat *buffer) \
	wbgl_GLPROC(void, SelectBuffer, GLsizei size, GLuint *buffer) \
	wbgl_GLPROC(GLint, RenderMode, GLenum mode) \
	wbgl_GLPROC(void, InitNames, void) \
	wbgl_GLPROC(void, LoadName, GLuint name) \
	wbgl_GLPROC(void, PassThrough, GLfloat token) \
	wbgl_GLPROC(void, PopName, void) \
	wbgl_GLPROC(void, PushName, GLuint name) \
	wbgl_GLPROC(void, ClearAccum, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) \
	wbgl_GLPROC(void, ClearIndex, GLfloat c) \
	wbgl_GLPROC(void, IndexMask, GLuint mask) \
	wbgl_GLPROC(void, Accum, GLenum op, GLfloat value) \
	wbgl_GLPROC(void, PopAttrib, void) \
	wbgl_GLPROC(void, PushAttrib, GLbitfield mask) \
	wbgl_GLPROC(void, Map1d, GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points) \
	wbgl_GLPROC(void, Map1f, GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points) \
	wbgl_GLPROC(void, Map2d, GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points) \
	wbgl_GLPROC(void, Map2f, GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points) \
	wbgl_GLPROC(void, MapGrid1d, GLint un, GLdouble u1, GLdouble u2) \
	wbgl_GLPROC(void, MapGrid1f, GLint un, GLfloat u1, GLfloat u2) \
	wbgl_GLPROC(void, MapGrid2d, GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2) \
	wbgl_GLPROC(void, MapGrid2f, GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2) \
	wbgl_GLPROC(void, EvalCoord1d, GLdouble u) \
	wbgl_GLPROC(void, EvalCoord1dv, const GLdouble *u) \
	wbgl_GLPROC(void, EvalCoord1f, GLfloat u) \
	wbgl_GLPROC(void, EvalCoord1fv, const GLfloat *u) \
	wbgl_GLPROC(void, EvalCoord2d, GLdouble u, GLdouble v) \
	wbgl_GLPROC(void, EvalCoord2dv, const GLdouble *u) \
	wbgl_GLPROC(void, EvalCoord2f, GLfloat u, GLfloat v) \
	wbgl_GLPROC(void, EvalCoord2fv, const GLfloat *u) \
	wbgl_GLPROC(void, EvalMesh1, GLenum mode, GLint i1, GLint i2) \
	wbgl_GLPROC(void, EvalPoint1, GLint i) \
	wbgl_GLPROC(void, EvalMesh2, GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2) \
	wbgl_GLPROC(void, EvalPoint2, GLint i, GLint j) \
	wbgl_GLPROC(void, AlphaFunc, GLenum func, GLfloat ref) \
	wbgl_GLPROC(void, PixelZoom, GLfloat xfactor, GLfloat yfactor) \
	wbgl_GLPROC(void, PixelTransferf, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, PixelTransferi, GLenum pname, GLint param) \
	wbgl_GLPROC(void, PixelMapfv, GLenum map, GLsizei mapsize, const GLfloat *values) \
	wbgl_GLPROC(void, PixelMapuiv, GLenum map, GLsizei mapsize, const GLuint *values) \
	wbgl_GLPROC(void, PixelMapusv, GLenum map, GLsizei mapsize, const GLushort *values) \
	wbgl_GLPROC(void, CopyPixels, GLint x, GLint y, GLsizei width, GLsizei height, GLenum type) \
	wbgl_GLPROC(void, DrawPixels, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) \
	wbgl_GLPROC(void, GetClipPlane, GLenum plane, GLdouble *equation) \
	wbgl_GLPROC(void, GetLightfv, GLenum light, GLenum pname, GLfloat *params) \
	wbgl_GLPROC(void, GetLightiv, GLenum light, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetMapdv, GLenum target, GLenum query, GLdouble *v) \
	wbgl_GLPROC(void, GetMapfv, GLenum target, GLenum query, GLfloat *v) \
	wbgl_GLPROC(void, GetMapiv, GLenum target, GLenum query, GLint *v) \
	wbgl_GLPROC(void, GetMaterialfv, GLenum face, GLenum pname, GLfloat *params) \
	wbgl_GLPROC(void, GetMaterialiv, GLenum face, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetPixelMapfv, GLenum map, GLfloat *values) \
	wbgl_GLPROC(void, GetPixelMapuiv, GLenum map, GLuint *values) \
	wbgl_GLPROC(void, GetPixelMapusv, GLenum map, GLushort *values) \
	wbgl_GLPROC(void, GetPolygonStipple, GLubyte *mask) \
	wbgl_GLPROC(void, GetTexEnvfv, GLenum target, GLenum pname, GLfloat *params) \
	wbgl_GLPROC(void, GetTexEnviv, GLenum target, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetTexGendv, GLenum coord, GLenum pname, GLdouble *params) \
	wbgl_GLPROC(void, GetTexGenfv, GLenum coord, GLenum pname, GLfloat *params) \
	wbgl_GLPROC(void, GetTexGeniv, GLenum coord, GLenum pname, GLint *params) \
	wbgl_GLPROC(GLboolean, IsList, GLuint list) \
	wbgl_GLPROC(void, Frustum, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) \
	wbgl_GLPROC(void, LoadIdentity, void) \
	wbgl_GLPROC(void, LoadMatrixf, const GLfloat *m) \
	wbgl_GLPROC(void, LoadMatrixd, const GLdouble *m) \
	wbgl_GLPROC(void, MatrixMode, GLenum mode) \
	wbgl_GLPROC(void, MultMatrixf, const GLfloat *m) \
	wbgl_GLPROC(void, MultMatrixd, const GLdouble *m) \
	wbgl_GLPROC(void, Ortho, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) \
	wbgl_GLPROC(void, PopMatrix, void) \
	wbgl_GLPROC(void, PushMatrix, void) \
	wbgl_GLPROC(void, Rotated, GLdouble angle, GLdouble x, GLdouble y, GLdouble z) \
	wbgl_GLPROC(void, Rotatef, GLfloat angle, GLfloat x, GLfloat y, GLfloat z) \
	wbgl_GLPROC(void, Scaled, GLdouble x, GLdouble y, GLdouble z) \
	wbgl_GLPROC(void, Scalef, GLfloat x, GLfloat y, GLfloat z) \
	wbgl_GLPROC(void, Translated, GLdouble x, GLdouble y, GLdouble z) \
	wbgl_GLPROC(void, Translatef, GLfloat x, GLfloat y, GLfloat z) \


#define wbgl__GLPROC_LIST_GL_VERSION_1_1 \
	wbgl_GLPROC(void, DrawArrays, GLenum mode, GLint first, GLsizei count) \
	wbgl_GLPROC(void, DrawElements, GLenum mode, GLsizei count, GLenum type, const void *indices) \
	wbgl_GLPROC(void, GetPointerv, GLenum pname, void **params) \
	wbgl_GLPROC(void, PolygonOffset, GLfloat factor, GLfloat units) \
	wbgl_GLPROC(void, CopyTexImage1D, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) \
	wbgl_GLPROC(void, CopyTexImage2D, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) \
	wbgl_GLPROC(void, CopyTexSubImage1D, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) \
	wbgl_GLPROC(void, CopyTexSubImage2D, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, TexSubImage1D, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) \
	wbgl_GLPROC(void, TexSubImage2D, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) \
	wbgl_GLPROC(void, BindTexture, GLenum target, GLuint texture) \
	wbgl_GLPROC(void, DeleteTextures, GLsizei n, const GLuint *textures) \
	wbgl_GLPROC(void, GenTextures, GLsizei n, GLuint *textures) \
	wbgl_GLPROC(GLboolean, IsTexture, GLuint texture) \
	wbgl_GLPROC(void, ArrayElement, GLint i) \
	wbgl_GLPROC(void, ColorPointer, GLint size, GLenum type, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(void, DisableClientState, GLenum array) \
	wbgl_GLPROC(void, EdgeFlagPointer, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(void, EnableClientState, GLenum array) \
	wbgl_GLPROC(void, IndexPointer, GLenum type, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(void, InterleavedArrays, GLenum format, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(void, NormalPointer, GLenum type, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(void, TexCoordPointer, GLint size, GLenum type, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(void, VertexPointer, GLint size, GLenum type, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(GLboolean, AreTexturesResident, GLsizei n, const GLuint *textures, GLboolean *residences) \
	wbgl_GLPROC(void, PrioritizeTextures, GLsizei n, const GLuint *textures, const GLfloat *priorities) \
	wbgl_GLPROC(void, Indexub, GLubyte c) \
	wbgl_GLPROC(void, Indexubv, const GLubyte *c) \
	wbgl_GLPROC(void, PopClientAttrib, void) \
	wbgl_GLPROC(void, PushClientAttrib, GLbitfield mask) \


#define wbgl__GLPROC_LIST_GL_VERSION_1_2 \
	wbgl_GLPROC(void, DrawRangeElements, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) \
	wbgl_GLPROC(void, TexImage3D, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) \
	wbgl_GLPROC(void, TexSubImage3D, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) \
	wbgl_GLPROC(void, CopyTexSubImage3D, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) \


#define wbgl__GLPROC_LIST_GL_VERSION_1_3 \
	wbgl_GLPROC(void, ActiveTexture, GLenum texture) \
	wbgl_GLPROC(void, SampleCoverage, GLfloat value, GLboolean invert) \
	wbgl_GLPROC(void, CompressedTexImage3D, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) \
	wbgl_GLPROC(void, CompressedTexImage2D, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) \
	wbgl_GLPROC(void, CompressedTexImage1D, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data) \
	wbgl_GLPROC(void, CompressedTexSubImage3D, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) \
	wbgl_GLPROC(void, CompressedTexSubImage2D, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) \
	wbgl_GLPROC(void, CompressedTexSubImage1D, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) \
	wbgl_GLPROC(void, GetCompressedTexImage, GLenum target, GLint level, void *img) \
	wbgl_GLPROC(void, ClientActiveTexture, GLenum texture) \
	wbgl_GLPROC(void, MultiTexCoord1d, GLenum target, GLdouble s) \
	wbgl_GLPROC(void, MultiTexCoord1dv, GLenum target, const GLdouble *v) \
	wbgl_GLPROC(void, MultiTexCoord1f, GLenum target, GLfloat s) \
	wbgl_GLPROC(void, MultiTexCoord1fv, GLenum target, const GLfloat *v) \
	wbgl_GLPROC(void, MultiTexCoord1i, GLenum target, GLint s) \
	wbgl_GLPROC(void, MultiTexCoord1iv, GLenum target, const GLint *v) \
	wbgl_GLPROC(void, MultiTexCoord1s, GLenum target, GLshort s) \
	wbgl_GLPROC(void, MultiTexCoord1sv, GLenum target, const GLshort *v) \
	wbgl_GLPROC(void, MultiTexCoord2d, GLenum target, GLdouble s, GLdouble t) \
	wbgl_GLPROC(void, MultiTexCoord2dv, GLenum target, const GLdouble *v) \
	wbgl_GLPROC(void, MultiTexCoord2f, GLenum target, GLfloat s, GLfloat t) \
	wbgl_GLPROC(void, MultiTexCoord2fv, GLenum target, const GLfloat *v) \
	wbgl_GLPROC(void, MultiTexCoord2i, GLenum target, GLint s, GLint t) \
	wbgl_GLPROC(void, MultiTexCoord2iv, GLenum target, const GLint *v) \
	wbgl_GLPROC(void, MultiTexCoord2s, GLenum target, GLshort s, GLshort t) \
	wbgl_GLPROC(void, MultiTexCoord2sv, GLenum target, const GLshort *v) \
	wbgl_GLPROC(void, MultiTexCoord3d, GLenum target, GLdouble s, GLdouble t, GLdouble r) \
	wbgl_GLPROC(void, MultiTexCoord3dv, GLenum target, const GLdouble *v) \
	wbgl_GLPROC(void, MultiTexCoord3f, GLenum target, GLfloat s, GLfloat t, GLfloat r) \
	wbgl_GLPROC(void, MultiTexCoord3fv, GLenum target, const GLfloat *v) \
	wbgl_GLPROC(void, MultiTexCoord3i, GLenum target, GLint s, GLint t, GLint r) \
	wbgl_GLPROC(void, MultiTexCoord3iv, GLenum target, const GLint *v) \
	wbgl_GLPROC(void, MultiTexCoord3s, GLenum target, GLshort s, GLshort t, GLshort r) \
	wbgl_GLPROC(void, MultiTexCoord3sv, GLenum target, const GLshort *v) \
	wbgl_GLPROC(void, MultiTexCoord4d, GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) \
	wbgl_GLPROC(void, MultiTexCoord4dv, GLenum target, const GLdouble *v) \
	wbgl_GLPROC(void, MultiTexCoord4f, GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) \
	wbgl_GLPROC(void, MultiTexCoord4fv, GLenum target, const GLfloat *v) \
	wbgl_GLPROC(void, MultiTexCoord4i, GLenum target, GLint s, GLint t, GLint r, GLint q) \
	wbgl_GLPROC(void, MultiTexCoord4iv, GLenum target, const GLint *v) \
	wbgl_GLPROC(void, MultiTexCoord4s, GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) \
	wbgl_GLPROC(void, MultiTexCoord4sv, GLenum target, const GLshort *v) \
	wbgl_GLPROC(void, LoadTransposeMatrixf, const GLfloat *m) \
	wbgl_GLPROC(void, LoadTransposeMatrixd, const GLdouble *m) \
	wbgl_GLPROC(void, MultTransposeMatrixf, const GLfloat *m) \
	wbgl_GLPROC(void, MultTransposeMatrixd, const GLdouble *m) \


#define wbgl__GLPROC_LIST_GL_VERSION_1_4 \
	wbgl_GLPROC(void, BlendFuncSeparate, GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) \
	wbgl_GLPROC(void, MultiDrawArrays, GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount) \
	wbgl_GLPROC(void, MultiDrawElements, GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount) \
	wbgl_GLPROC(void, PointParameterf, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, PointParameterfv, GLenum pname, const GLfloat *params) \
	wbgl_GLPROC(void, PointParameteri, GLenum pname, GLint param) \
	wbgl_GLPROC(void, PointParameteriv, GLenum pname, const GLint *params) \
	wbgl_GLPROC(void, FogCoordf, GLfloat coord) \
	wbgl_GLPROC(void, FogCoordfv, const GLfloat *coord) \
	wbgl_GLPROC(void, FogCoordd, GLdouble coord) \
	wbgl_GLPROC(void, FogCoorddv, const GLdouble *coord) \
	wbgl_GLPROC(void, FogCoordPointer, GLenum type, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(void, SecondaryColor3b, GLbyte red, GLbyte green, GLbyte blue) \
	wbgl_GLPROC(void, SecondaryColor3bv, const GLbyte *v) \
	wbgl_GLPROC(void, SecondaryColor3d, GLdouble red, GLdouble green, GLdouble blue) \
	wbgl_GLPROC(void, SecondaryColor3dv, const GLdouble *v) \
	wbgl_GLPROC(void, SecondaryColor3f, GLfloat red, GLfloat green, GLfloat blue) \
	wbgl_GLPROC(void, SecondaryColor3fv, const GLfloat *v) \
	wbgl_GLPROC(void, SecondaryColor3i, GLint red, GLint green, GLint blue) \
	wbgl_GLPROC(void, SecondaryColor3iv, const GLint *v) \
	wbgl_GLPROC(void, SecondaryColor3s, GLshort red, GLshort green, GLshort blue) \
	wbgl_GLPROC(void, SecondaryColor3sv, const GLshort *v) \
	wbgl_GLPROC(void, SecondaryColor3ub, GLubyte red, GLubyte green, GLubyte blue) \
	wbgl_GLPROC(void, SecondaryColor3ubv, const GLubyte *v) \
	wbgl_GLPROC(void, SecondaryColor3ui, GLuint red, GLuint green, GLuint blue) \
	wbgl_GLPROC(void, SecondaryColor3uiv, const GLuint *v) \
	wbgl_GLPROC(void, SecondaryColor3us, GLushort red, GLushort green, GLushort blue) \
	wbgl_GLPROC(void, SecondaryColor3usv, const GLushort *v) \
	wbgl_GLPROC(void, SecondaryColorPointer, GLint size, GLenum type, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(void, WindowPos2d, GLdouble x, GLdouble y) \
	wbgl_GLPROC(void, WindowPos2dv, const GLdouble *v) \
	wbgl_GLPROC(void, WindowPos2f, GLfloat x, GLfloat y) \
	wbgl_GLPROC(void, WindowPos2fv, const GLfloat *v) \
	wbgl_GLPROC(void, WindowPos2i, GLint x, GLint y) \
	wbgl_GLPROC(void, WindowPos2iv, const GLint *v) \
	wbgl_GLPROC(void, WindowPos2s, GLshort x, GLshort y) \
	wbgl_GLPROC(void, WindowPos2sv, const GLshort *v) \
	wbgl_GLPROC(void, WindowPos3d, GLdouble x, GLdouble y, GLdouble z) \
	wbgl_GLPROC(void, WindowPos3dv, const GLdouble *v) \
	wbgl_GLPROC(void, WindowPos3f, GLfloat x, GLfloat y, GLfloat z) \
	wbgl_GLPROC(void, WindowPos3fv, const GLfloat *v) \
	wbgl_GLPROC(void, WindowPos3i, GLint x, GLint y, GLint z) \
	wbgl_GLPROC(void, WindowPos3iv, const GLint *v) \
	wbgl_GLPROC(void, WindowPos3s, GLshort x, GLshort y, GLshort z) \
	wbgl_GLPROC(void, WindowPos3sv, const GLshort *v) \
	wbgl_GLPROC(void, BlendColor, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) \
	wbgl_GLPROC(void, BlendEquation, GLenum mode) \


#define wbgl__GLPROC_LIST_GL_VERSION_1_5 \
	wbgl_GLPROC(void, GenQueries, GLsizei n, GLuint *ids) \
	wbgl_GLPROC(void, DeleteQueries, GLsizei n, const GLuint *ids) \
	wbgl_GLPROC(GLboolean, IsQuery, GLuint id) \
	wbgl_GLPROC(void, BeginQuery, GLenum target, GLuint id) \
	wbgl_GLPROC(void, EndQuery, GLenum target) \
	wbgl_GLPROC(void, GetQueryiv, GLenum target, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetQueryObjectiv, GLuint id, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetQueryObjectuiv, GLuint id, GLenum pname, GLuint *params) \
	wbgl_GLPROC(void, BindBuffer, GLenum target, GLuint buffer) \
	wbgl_GLPROC(void, DeleteBuffers, GLsizei n, const GLuint *buffers) \
	wbgl_GLPROC(void, GenBuffers, GLsizei n, GLuint *buffers) \
	wbgl_GLPROC(GLboolean, IsBuffer, GLuint buffer) \
	wbgl_GLPROC(void, BufferData, GLenum target, GLsizeiptr size, const void *data, GLenum usage) \
	wbgl_GLPROC(void, BufferSubData, GLenum target, GLintptr offset, GLsizeiptr size, const void *data) \
	wbgl_GLPROC(void, GetBufferSubData, GLenum target, GLintptr offset, GLsizeiptr size, void *data) \
	wbgl_GLPROC(void *, MapBuffer, GLenum target, GLenum access) \
	wbgl_GLPROC(GLboolean, UnmapBuffer, GLenum target) \
	wbgl_GLPROC(void, GetBufferParameteriv, GLenum target, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetBufferPointerv, GLenum target, GLenum pname, void **params) \


#define wbgl__GLPROC_LIST_GL_VERSION_2_0 \
	wbgl_GLPROC(void, BlendEquationSeparate, GLenum modeRGB, GLenum modeAlpha) \
	wbgl_GLPROC(void, DrawBuffers, GLsizei n, const GLenum *bufs) \
	wbgl_GLPROC(void, StencilOpSeparate, GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) \
	wbgl_GLPROC(void, StencilFuncSeparate, GLenum face, GLenum func, GLint ref, GLuint mask) \
	wbgl_GLPROC(void, StencilMaskSeparate, GLenum face, GLuint mask) \
	wbgl_GLPROC(void, AttachShader, GLuint program, GLuint shader) \
	wbgl_GLPROC(void, BindAttribLocation, GLuint program, GLuint index, const GLchar *name) \
	wbgl_GLPROC(void, CompileShader, GLuint shader) \
	wbgl_GLPROC(GLuint, CreateProgram, void) \
	wbgl_GLPROC(GLuint, CreateShader, GLenum type) \
	wbgl_GLPROC(void, DeleteProgram, GLuint program) \
	wbgl_GLPROC(void, DeleteShader, GLuint shader) \
	wbgl_GLPROC(void, DetachShader, GLuint program, GLuint shader) \
	wbgl_GLPROC(void, DisableVertexAttribArray, GLuint index) \
	wbgl_GLPROC(void, EnableVertexAttribArray, GLuint index) \
	wbgl_GLPROC(void, GetActiveAttrib, GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) \
	wbgl_GLPROC(void, GetActiveUniform, GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) \
	wbgl_GLPROC(void, GetAttachedShaders, GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) \
	wbgl_GLPROC(GLint, GetAttribLocation, GLuint program, const GLchar *name) \
	wbgl_GLPROC(void, GetProgramiv, GLuint program, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetProgramInfoLog, GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog) \
	wbgl_GLPROC(void, GetShaderiv, GLuint shader, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetShaderInfoLog, GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog) \
	wbgl_GLPROC(void, GetShaderSource, GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source) \
	wbgl_GLPROC(GLint, GetUniformLocation, GLuint program, const GLchar *name) \
	wbgl_GLPROC(void, GetUniformfv, GLuint program, GLint location, GLfloat *params) \
	wbgl_GLPROC(void, GetUniformiv, GLuint program, GLint location, GLint *params) \
	wbgl_GLPROC(void, GetVertexAttribdv, GLuint index, GLenum pname, GLdouble *params) \
	wbgl_GLPROC(void, GetVertexAttribfv, GLuint index, GLenum pname, GLfloat *params) \
	wbgl_GLPROC(void, GetVertexAttribiv, GLuint index, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetVertexAttribPointerv, GLuint index, GLenum pname, void **pointer) \
	wbgl_GLPROC(GLboolean, IsProgram, GLuint program) \
	wbgl_GLPROC(GLboolean, IsShader, GLuint shader) \
	wbgl_GLPROC(void, LinkProgram, GLuint program) \
	wbgl_GLPROC(void, ShaderSource, GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length) \
	wbgl_GLPROC(void, UseProgram, GLuint program) \
	wbgl_GLPROC(void, Uniform1f, GLint location, GLfloat v0) \
	wbgl_GLPROC(void, Uniform2f, GLint location, GLfloat v0, GLfloat v1) \
	wbgl_GLPROC(void, Uniform3f, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) \
	wbgl_GLPROC(void, Uniform4f, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) \
	wbgl_GLPROC(void, Uniform1i, GLint location, GLint v0) \
	wbgl_GLPROC(void, Uniform2i, GLint location, GLint v0, GLint v1) \
	wbgl_GLPROC(void, Uniform3i, GLint location, GLint v0, GLint v1, GLint v2) \
	wbgl_GLPROC(void, Uniform4i, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) \
	wbgl_GLPROC(void, Uniform1fv, GLint location, GLsizei count, const GLfloat *value) \
	wbgl_GLPROC(void, Uniform2fv, GLint location, GLsizei count, const GLfloat *value) \
	wbgl_GLPROC(void, Uniform3fv, GLint location, GLsizei count, const GLfloat *value) \
	wbgl_GLPROC(void, Uniform4fv, GLint location, GLsizei count, const GLfloat *value) \
	wbgl_GLPROC(void, Uniform1iv, GLint location, GLsizei count, const GLint *value) \
	wbgl_GLPROC(void, Uniform2iv, GLint location, GLsizei count, const GLint *value) \
	wbgl_GLPROC(void, Uniform3iv, GLint location, GLsizei count, const GLint *value) \
	wbgl_GLPROC(void, Uniform4iv, GLint location, GLsizei count, const GLint *value) \
	wbgl_GLPROC(void, UniformMatrix2fv, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, UniformMatrix3fv, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, UniformMatrix4fv, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, ValidateProgram, GLuint program) \
	wbgl_GLPROC(void, VertexAttrib1d, GLuint index, GLdouble x) \
	wbgl_GLPROC(void, VertexAttrib1dv, GLuint index, const GLdouble *v) \
	wbgl_GLPROC(void, VertexAttrib1f, GLuint index, GLfloat x) \
	wbgl_GLPROC(void, VertexAttrib1fv, GLuint index, const GLfloat *v) \
	wbgl_GLPROC(void, VertexAttrib1s, GLuint index, GLshort x) \
	wbgl_GLPROC(void, VertexAttrib1sv, GLuint index, const GLshort *v) \
	wbgl_GLPROC(void, VertexAttrib2d, GLuint index, GLdouble x, GLdouble y) \
	wbgl_GLPROC(void, VertexAttrib2dv, GLuint index, const GLdouble *v) \
	wbgl_GLPROC(void, VertexAttrib2f, GLuint index, GLfloat x, GLfloat y) \
	wbgl_GLPROC(void, VertexAttrib2fv, GLuint index, const GLfloat *v) \
	wbgl_GLPROC(void, VertexAttrib2s, GLuint index, GLshort x, GLshort y) \
	wbgl_GLPROC(void, VertexAttrib2sv, GLuint index, const GLshort *v) \
	wbgl_GLPROC(void, VertexAttrib3d, GLuint index, GLdouble x, GLdouble y, GLdouble z) \
	wbgl_GLPROC(void, VertexAttrib3dv, GLuint index, const GLdouble *v) \
	wbgl_GLPROC(void, VertexAttrib3f, GLuint index, GLfloat x, GLfloat y, GLfloat z) \
	wbgl_GLPROC(void, VertexAttrib3fv, GLuint index, const GLfloat *v) \
	wbgl_GLPROC(void, VertexAttrib3s, GLuint index, GLshort x, GLshort y, GLshort z) \
	wbgl_GLPROC(void, VertexAttrib3sv, GLuint index, const GLshort *v) \
	wbgl_GLPROC(void, VertexAttrib4Nbv, GLuint index, const GLbyte *v) \
	wbgl_GLPROC(void, VertexAttrib4Niv, GLuint index, const GLint *v) \
	wbgl_GLPROC(void, VertexAttrib4Nsv, GLuint index, const GLshort *v) \
	wbgl_GLPROC(void, VertexAttrib4Nub, GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) \
	wbgl_GLPROC(void, VertexAttrib4Nubv, GLuint index, const GLubyte *v) \
	wbgl_GLPROC(void, VertexAttrib4Nuiv, GLuint index, const GLuint *v) \
	wbgl_GLPROC(void, VertexAttrib4Nusv, GLuint index, const GLushort *v) \
	wbgl_GLPROC(void, VertexAttrib4bv, GLuint index, const GLbyte *v) \
	wbgl_GLPROC(void, VertexAttrib4d, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) \
	wbgl_GLPROC(void, VertexAttrib4dv, GLuint index, const GLdouble *v) \
	wbgl_GLPROC(void, VertexAttrib4f, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) \
	wbgl_GLPROC(void, VertexAttrib4fv, GLuint index, const GLfloat *v) \
	wbgl_GLPROC(void, VertexAttrib4iv, GLuint index, const GLint *v) \
	wbgl_GLPROC(void, VertexAttrib4s, GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) \
	wbgl_GLPROC(void, VertexAttrib4sv, GLuint index, const GLshort *v) \
	wbgl_GLPROC(void, VertexAttrib4ubv, GLuint index, const GLubyte *v) \
	wbgl_GLPROC(void, VertexAttrib4uiv, GLuint index, const GLuint *v) \
	wbgl_GLPROC(void, VertexAttrib4usv, GLuint index, const GLushort *v) \
	wbgl_GLPROC(void, VertexAttribPointer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) \


#define wbgl__GLPROC_LIST_GL_VERSION_2_1 \
	wbgl_GLPROC(void, UniformMatrix2x3fv, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, UniformMatrix3x2fv, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, UniformMatrix2x4fv, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, UniformMatrix4x2fv, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, UniformMatrix3x4fv, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, UniformMatrix4x3fv, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \


#define wbgl__GLPROC_LIST_GL_VERSION_3_0 \
	wbgl_GLPROC(void, ColorMaski, GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) \
	wbgl_GLPROC(void, GetBooleani_v, GLenum target, GLuint index, GLboolean *data) \
	wbgl_GLPROC(void, GetIntegeri_v, GLenum target, GLuint index, GLint *data) \
	wbgl_GLPROC(void, Enablei, GLenum target, GLuint index) \
	wbgl_GLPROC(void, Disablei, GLenum target, GLuint index) \
	wbgl_GLPROC(GLboolean, IsEnabledi, GLenum target, GLuint index) \
	wbgl_GLPROC(void, BeginTransformFeedback, GLenum primitiveMode) \
	wbgl_GLPROC(void, EndTransformFeedback, void) \
	wbgl_GLPROC(void, BindBufferRange, GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) \
	wbgl_GLPROC(void, BindBufferBase, GLenum target, GLuint index, GLuint buffer) \
	wbgl_GLPROC(void, TransformFeedbackVaryings, GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) \
	wbgl_GLPROC(void, GetTransformFeedbackVarying, GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) \
	wbgl_GLPROC(void, ClampColor, GLenum target, GLenum clamp) \
	wbgl_GLPROC(void, BeginConditionalRender, GLuint id, GLenum mode) \
	wbgl_GLPROC(void, EndConditionalRender, void) \
	wbgl_GLPROC(void, VertexAttribIPointer, GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(void, GetVertexAttribIiv, GLuint index, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetVertexAttribIuiv, GLuint index, GLenum pname, GLuint *params) \
	wbgl_GLPROC(void, VertexAttribI1i, GLuint index, GLint x) \
	wbgl_GLPROC(void, VertexAttribI2i, GLuint index, GLint x, GLint y) \
	wbgl_GLPROC(void, VertexAttribI3i, GLuint index, GLint x, GLint y, GLint z) \
	wbgl_GLPROC(void, VertexAttribI4i, GLuint index, GLint x, GLint y, GLint z, GLint w) \
	wbgl_GLPROC(void, VertexAttribI1ui, GLuint index, GLuint x) \
	wbgl_GLPROC(void, VertexAttribI2ui, GLuint index, GLuint x, GLuint y) \
	wbgl_GLPROC(void, VertexAttribI3ui, GLuint index, GLuint x, GLuint y, GLuint z) \
	wbgl_GLPROC(void, VertexAttribI4ui, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) \
	wbgl_GLPROC(void, VertexAttribI1iv, GLuint index, const GLint *v) \
	wbgl_GLPROC(void, VertexAttribI2iv, GLuint index, const GLint *v) \
	wbgl_GLPROC(void, VertexAttribI3iv, GLuint index, const GLint *v) \
	wbgl_GLPROC(void, VertexAttribI4iv, GLuint index, const GLint *v) \
	wbgl_GLPROC(void, VertexAttribI1uiv, GLuint index, const GLuint *v) \
	wbgl_GLPROC(void, VertexAttribI2uiv, GLuint index, const GLuint *v) \
	wbgl_GLPROC(void, VertexAttribI3uiv, GLuint index, const GLuint *v) \
	wbgl_GLPROC(void, VertexAttribI4uiv, GLuint index, const GLuint *v) \
	wbgl_GLPROC(void, VertexAttribI4bv, GLuint index, const GLbyte *v) \
	wbgl_GLPROC(void, VertexAttribI4sv, GLuint index, const GLshort *v) \
	wbgl_GLPROC(void, VertexAttribI4ubv, GLuint index, const GLubyte *v) \
	wbgl_GLPROC(void, VertexAttribI4usv, GLuint index, const GLushort *v) \
	wbgl_GLPROC(void, GetUniformuiv, GLuint program, GLint location, GLuint *params) \
	wbgl_GLPROC(void, BindFragDataLocation, GLuint program, GLuint color, const GLchar *name) \
	wbgl_GLPROC(GLint, GetFragDataLocation, GLuint program, const GLchar *name) \
	wbgl_GLPROC(void, Uniform1ui, GLint location, GLuint v0) \
	wbgl_GLPROC(void, Uniform2ui, GLint location, GLuint v0, GLuint v1) \
	wbgl_GLPROC(void, Uniform3ui, GLint location, GLuint v0, GLuint v1, GLuint v2) \
	wbgl_GLPROC(void, Uniform4ui, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) \
	wbgl_GLPROC(void, Uniform1uiv, GLint location, GLsizei count, const GLuint *value) \
	wbgl_GLPROC(void, Uniform2uiv, GLint location, GLsizei count, const GLuint *value) \
	wbgl_GLPROC(void, Uniform3uiv, GLint location, GLsizei count, const GLuint *value) \
	wbgl_GLPROC(void, Uniform4uiv, GLint location, GLsizei count, const GLuint *value) \
	wbgl_GLPROC(void, TexParameterIiv, GLenum target, GLenum pname, const GLint *params) \
	wbgl_GLPROC(void, TexParameterIuiv, GLenum target, GLenum pname, const GLuint *params) \
	wbgl_GLPROC(void, GetTexParameterIiv, GLenum target, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetTexParameterIuiv, GLenum target, GLenum pname, GLuint *params) \
	wbgl_GLPROC(void, ClearBufferiv, GLenum buffer, GLint drawbuffer, const GLint *value) \
	wbgl_GLPROC(void, ClearBufferuiv, GLenum buffer, GLint drawbuffer, const GLuint *value) \
	wbgl_GLPROC(void, ClearBufferfv, GLenum buffer, GLint drawbuffer, const GLfloat *value) \
	wbgl_GLPROC(void, ClearBufferfi, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) \
	wbgl_GLPROC(const GLubyte *, GetStringi, GLenum name, GLuint index) \
	wbgl_GLPROC(GLboolean, IsRenderbuffer, GLuint renderbuffer) \
	wbgl_GLPROC(void, BindRenderbuffer, GLenum target, GLuint renderbuffer) \
	wbgl_GLPROC(void, DeleteRenderbuffers, GLsizei n, const GLuint *renderbuffers) \
	wbgl_GLPROC(void, GenRenderbuffers, GLsizei n, GLuint *renderbuffers) \
	wbgl_GLPROC(void, RenderbufferStorage, GLenum target, GLenum internalformat, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, GetRenderbufferParameteriv, GLenum target, GLenum pname, GLint *params) \
	wbgl_GLPROC(GLboolean, IsFramebuffer, GLuint framebuffer) \
	wbgl_GLPROC(void, BindFramebuffer, GLenum target, GLuint framebuffer) \
	wbgl_GLPROC(void, DeleteFramebuffers, GLsizei n, const GLuint *framebuffers) \
	wbgl_GLPROC(void, GenFramebuffers, GLsizei n, GLuint *framebuffers) \
	wbgl_GLPROC(GLenum, CheckFramebufferStatus, GLenum target) \
	wbgl_GLPROC(void, FramebufferTexture1D, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) \
	wbgl_GLPROC(void, FramebufferTexture2D, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) \
	wbgl_GLPROC(void, FramebufferTexture3D, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) \
	wbgl_GLPROC(void, FramebufferRenderbuffer, GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) \
	wbgl_GLPROC(void, GetFramebufferAttachmentParameteriv, GLenum target, GLenum attachment, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GenerateMipmap, GLenum target) \
	wbgl_GLPROC(void, BlitFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) \
	wbgl_GLPROC(void, RenderbufferStorageMultisample, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, FramebufferTextureLayer, GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) \
	wbgl_GLPROC(void *, MapBufferRange, GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) \
	wbgl_GLPROC(void, FlushMappedBufferRange, GLenum target, GLintptr offset, GLsizeiptr length) \
	wbgl_GLPROC(void, BindVertexArray, GLuint array) \
	wbgl_GLPROC(void, DeleteVertexArrays, GLsizei n, const GLuint *arrays) \
	wbgl_GLPROC(void, GenVertexArrays, GLsizei n, GLuint *arrays) \
	wbgl_GLPROC(GLboolean, IsVertexArray, GLuint array) \


#define wbgl__GLPROC_LIST_GL_VERSION_3_1 \
	wbgl_GLPROC(void, DrawArraysInstanced, GLenum mode, GLint first, GLsizei count, GLsizei instancecount) \
	wbgl_GLPROC(void, DrawElementsInstanced, GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount) \
	wbgl_GLPROC(void, TexBuffer, GLenum target, GLenum internalformat, GLuint buffer) \
	wbgl_GLPROC(void, PrimitiveRestartIndex, GLuint index) \
	wbgl_GLPROC(void, CopyBufferSubData, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) \
	wbgl_GLPROC(void, GetUniformIndices, GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices) \
	wbgl_GLPROC(void, GetActiveUniformsiv, GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetActiveUniformName, GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName) \
	wbgl_GLPROC(GLuint, GetUniformBlockIndex, GLuint program, const GLchar *uniformBlockName) \
	wbgl_GLPROC(void, GetActiveUniformBlockiv, GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetActiveUniformBlockName, GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName) \
	wbgl_GLPROC(void, UniformBlockBinding, GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) \


#define wbgl__GLPROC_LIST_GL_VERSION_3_2 \
	wbgl_GLPROC(void, DrawElementsBaseVertex, GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex) \
	wbgl_GLPROC(void, DrawRangeElementsBaseVertex, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex) \
	wbgl_GLPROC(void, DrawElementsInstancedBaseVertex, GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex) \
	wbgl_GLPROC(void, MultiDrawElementsBaseVertex, GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex) \
	wbgl_GLPROC(void, ProvokingVertex, GLenum mode) \
	wbgl_GLPROC(GLsync, FenceSync, GLenum condition, GLbitfield flags) \
	wbgl_GLPROC(GLboolean, IsSync, GLsync sync) \
	wbgl_GLPROC(void, DeleteSync, GLsync sync) \
	wbgl_GLPROC(GLenum, ClientWaitSync, GLsync sync, GLbitfield flags, GLuint64 timeout) \
	wbgl_GLPROC(void, WaitSync, GLsync sync, GLbitfield flags, GLuint64 timeout) \
	wbgl_GLPROC(void, GetInteger64v, GLenum pname, GLint64 *data) \
	wbgl_GLPROC(void, GetSynciv, GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) \
	wbgl_GLPROC(void, GetInteger64i_v, GLenum target, GLuint index, GLint64 *data) \
	wbgl_GLPROC(void, GetBufferParameteri64v, GLenum target, GLenum pname, GLint64 *params) \
	wbgl_GLPROC(void, FramebufferTexture, GLenum target, GLenum attachment, GLuint texture, GLint level) \
	wbgl_GLPROC(void, TexImage2DMultisample, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) \
	wbgl_GLPROC(void, TexImage3DMultisample, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) \
	wbgl_GLPROC(void, GetMultisamplefv, GLenum pname, GLuint index, GLfloat *val) \
	wbgl_GLPROC(void, SampleMaski, GLuint maskNumber, GLbitfield mask) \


#define wbgl__GLPROC_LIST_GL_VERSION_3_3 \
	wbgl_GLPROC(void, BindFragDataLocationIndexed, GLuint program, GLuint colorNumber, GLuint index, const GLchar *name) \
	wbgl_GLPROC(GLint, GetFragDataIndex, GLuint program, const GLchar *name) \
	wbgl_GLPROC(void, GenSamplers, GLsizei count, GLuint *samplers) \
	wbgl_GLPROC(void, DeleteSamplers, GLsizei count, const GLuint *samplers) \
	wbgl_GLPROC(GLboolean, IsSampler, GLuint sampler) \
	wbgl_GLPROC(void, BindSampler, GLuint unit, GLuint sampler) \
	wbgl_GLPROC(void, SamplerParameteri, GLuint sampler, GLenum pname, GLint param) \
	wbgl_GLPROC(void, SamplerParameteriv, GLuint sampler, GLenum pname, const GLint *param) \
	wbgl_GLPROC(void, SamplerParameterf, GLuint sampler, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, SamplerParameterfv, GLuint sampler, GLenum pname, const GLfloat *param) \
	wbgl_GLPROC(void, SamplerParameterIiv, GLuint sampler, GLenum pname, const GLint *param) \
	wbgl_GLPROC(void, SamplerParameterIuiv, GLuint sampler, GLenum pname, const GLuint *param) \
	wbgl_GLPROC(void, GetSamplerParameteriv, GLuint sampler, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetSamplerParameterIiv, GLuint sampler, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetSamplerParameterfv, GLuint sampler, GLenum pname, GLfloat *params) \
	wbgl_GLPROC(void, GetSamplerParameterIuiv, GLuint sampler, GLenum pname, GLuint *params) \
	wbgl_GLPROC(void, QueryCounter, GLuint id, GLenum target) \
	wbgl_GLPROC(void, GetQueryObjecti64v, GLuint id, GLenum pname, GLint64 *params) \
	wbgl_GLPROC(void, GetQueryObjectui64v, GLuint id, GLenum pname, GLuint64 *params) \
	wbgl_GLPROC(void, VertexAttribDivisor, GLuint index, GLuint divisor) \
	wbgl_GLPROC(void, VertexAttribP1ui, GLuint index, GLenum type, GLboolean normalized, GLuint value) \
	wbgl_GLPROC(void, VertexAttribP1uiv, GLuint index, GLenum type, GLboolean normalized, const GLuint *value) \
	wbgl_GLPROC(void, VertexAttribP2ui, GLuint index, GLenum type, GLboolean normalized, GLuint value) \
	wbgl_GLPROC(void, VertexAttribP2uiv, GLuint index, GLenum type, GLboolean normalized, const GLuint *value) \
	wbgl_GLPROC(void, VertexAttribP3ui, GLuint index, GLenum type, GLboolean normalized, GLuint value) \
	wbgl_GLPROC(void, VertexAttribP3uiv, GLuint index, GLenum type, GLboolean normalized, const GLuint *value) \
	wbgl_GLPROC(void, VertexAttribP4ui, GLuint index, GLenum type, GLboolean normalized, GLuint value) \
	wbgl_GLPROC(void, VertexAttribP4uiv, GLuint index, GLenum type, GLboolean normalized, const GLuint *value) \
	wbgl_GLPROC(void, VertexP2ui, GLenum type, GLuint value) \
	wbgl_GLPROC(void, VertexP2uiv, GLenum type, const GLuint *value) \
	wbgl_GLPROC(void, VertexP3ui, GLenum type, GLuint value) \
	wbgl_GLPROC(void, VertexP3uiv, GLenum type, const GLuint *value) \
	wbgl_GLPROC(void, VertexP4ui, GLenum type, GLuint value) \
	wbgl_GLPROC(void, VertexP4uiv, GLenum type, const GLuint *value) \
	wbgl_GLPROC(void, TexCoordP1ui, GLenum type, GLuint coords) \
	wbgl_GLPROC(void, TexCoordP1uiv, GLenum type, const GLuint *coords) \
	wbgl_GLPROC(void, TexCoordP2ui, GLenum type, GLuint coords) \
	wbgl_GLPROC(void, TexCoordP2uiv, GLenum type, const GLuint *coords) \
	wbgl_GLPROC(void, TexCoordP3ui, GLenum type, GLuint coords) \
	wbgl_GLPROC(void, TexCoordP3uiv, GLenum type, const GLuint *coords) \
	wbgl_GLPROC(void, TexCoordP4ui, GLenum type, GLuint coords) \
	wbgl_GLPROC(void, TexCoordP4uiv, GLenum type, const GLuint *coords) \
	wbgl_GLPROC(void, MultiTexCoordP1ui, GLenum texture, GLenum type, GLuint coords) \
	wbgl_GLPROC(void, MultiTexCoordP1uiv, GLenum texture, GLenum type, const GLuint *coords) \
	wbgl_GLPROC(void, MultiTexCoordP2ui, GLenum texture, GLenum type, GLuint coords) \
	wbgl_GLPROC(void, MultiTexCoordP2uiv, GLenum texture, GLenum type, const GLuint *coords) \
	wbgl_GLPROC(void, MultiTexCoordP3ui, GLenum texture, GLenum type, GLuint coords) \
	wbgl_GLPROC(void, MultiTexCoordP3uiv, GLenum texture, GLenum type, const GLuint *coords) \
	wbgl_GLPROC(void, MultiTexCoordP4ui, GLenum texture, GLenum type, GLuint coords) \
	wbgl_GLPROC(void, MultiTexCoordP4uiv, GLenum texture, GLenum type, const GLuint *coords) \
	wbgl_GLPROC(void, NormalP3ui, GLenum type, GLuint coords) \
	wbgl_GLPROC(void, NormalP3uiv, GLenum type, const GLuint *coords) \
	wbgl_GLPROC(void, ColorP3ui, GLenum type, GLuint color) \
	wbgl_GLPROC(void, ColorP3uiv, GLenum type, const GLuint *color) \
	wbgl_GLPROC(void, ColorP4ui, GLenum type, GLuint color) \
	wbgl_GLPROC(void, ColorP4uiv, GLenum type, const GLuint *color) \
	wbgl_GLPROC(void, SecondaryColorP3ui, GLenum type, GLuint color) \
	wbgl_GLPROC(void, SecondaryColorP3uiv, GLenum type, const GLuint *color) \


#define wbgl__GLPROC_LIST_GL_VERSION_4_0 \
	wbgl_GLPROC(void, MinSampleShading, GLfloat value) \
	wbgl_GLPROC(void, BlendEquationi, GLuint buf, GLenum mode) \
	wbgl_GLPROC(void, BlendEquationSeparatei, GLuint buf, GLenum modeRGB, GLenum modeAlpha) \
	wbgl_GLPROC(void, BlendFunci, GLuint buf, GLenum src, GLenum dst) \
	wbgl_GLPROC(void, BlendFuncSeparatei, GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) \
	wbgl_GLPROC(void, DrawArraysIndirect, GLenum mode, const void *indirect) \
	wbgl_GLPROC(void, DrawElementsIndirect, GLenum mode, GLenum type, const void *indirect) \
	wbgl_GLPROC(void, Uniform1d, GLint location, GLdouble x) \
	wbgl_GLPROC(void, Uniform2d, GLint location, GLdouble x, GLdouble y) \
	wbgl_GLPROC(void, Uniform3d, GLint location, GLdouble x, GLdouble y, GLdouble z) \
	wbgl_GLPROC(void, Uniform4d, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) \
	wbgl_GLPROC(void, Uniform1dv, GLint location, GLsizei count, const GLdouble *value) \
	wbgl_GLPROC(void, Uniform2dv, GLint location, GLsizei count, const GLdouble *value) \
	wbgl_GLPROC(void, Uniform3dv, GLint location, GLsizei count, const GLdouble *value) \
	wbgl_GLPROC(void, Uniform4dv, GLint location, GLsizei count, const GLdouble *value) \
	wbgl_GLPROC(void, UniformMatrix2dv, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, UniformMatrix3dv, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, UniformMatrix4dv, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, UniformMatrix2x3dv, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, UniformMatrix2x4dv, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, UniformMatrix3x2dv, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, UniformMatrix3x4dv, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, UniformMatrix4x2dv, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, UniformMatrix4x3dv, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, GetUniformdv, GLuint program, GLint location, GLdouble *params) \
	wbgl_GLPROC(GLint, GetSubroutineUniformLocation, GLuint program, GLenum shadertype, const GLchar *name) \
	wbgl_GLPROC(GLuint, GetSubroutineIndex, GLuint program, GLenum shadertype, const GLchar *name) \
	wbgl_GLPROC(void, GetActiveSubroutineUniformiv, GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values) \
	wbgl_GLPROC(void, GetActiveSubroutineUniformName, GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name) \
	wbgl_GLPROC(void, GetActiveSubroutineName, GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name) \
	wbgl_GLPROC(void, UniformSubroutinesuiv, GLenum shadertype, GLsizei count, const GLuint *indices) \
	wbgl_GLPROC(void, GetUniformSubroutineuiv, GLenum shadertype, GLint location, GLuint *params) \
	wbgl_GLPROC(void, GetProgramStageiv, GLuint program, GLenum shadertype, GLenum pname, GLint *values) \
	wbgl_GLPROC(void, PatchParameteri, GLenum pname, GLint value) \
	wbgl_GLPROC(void, PatchParameterfv, GLenum pname, const GLfloat *values) \
	wbgl_GLPROC(void, BindTransformFeedback, GLenum target, GLuint id) \
	wbgl_GLPROC(void, DeleteTransformFeedbacks, GLsizei n, const GLuint *ids) \
	wbgl_GLPROC(void, GenTransformFeedbacks, GLsizei n, GLuint *ids) \
	wbgl_GLPROC(GLboolean, IsTransformFeedback, GLuint id) \
	wbgl_GLPROC(void, PauseTransformFeedback, void) \
	wbgl_GLPROC(void, ResumeTransformFeedback, void) \
	wbgl_GLPROC(void, DrawTransformFeedback, GLenum mode, GLuint id) \
	wbgl_GLPROC(void, DrawTransformFeedbackStream, GLenum mode, GLuint id, GLuint stream) \
	wbgl_GLPROC(void, BeginQueryIndexed, GLenum target, GLuint index, GLuint id) \
	wbgl_GLPROC(void, EndQueryIndexed, GLenum target, GLuint index) \
	wbgl_GLPROC(void, GetQueryIndexediv, GLenum target, GLuint index, GLenum pname, GLint *params) \


#define wbgl__GLPROC_LIST_GL_VERSION_4_1 \
	wbgl_GLPROC(void, ReleaseShaderCompiler, void) \
	wbgl_GLPROC(void, ShaderBinary, GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length) \
	wbgl_GLPROC(void, GetShaderPrecisionFormat, GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) \
	wbgl_GLPROC(void, DepthRangef, GLfloat n, GLfloat f) \
	wbgl_GLPROC(void, ClearDepthf, GLfloat d) \
	wbgl_GLPROC(void, GetProgramBinary, GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary) \
	wbgl_GLPROC(void, ProgramBinary, GLuint program, GLenum binaryFormat, const void *binary, GLsizei length) \
	wbgl_GLPROC(void, ProgramParameteri, GLuint program, GLenum pname, GLint value) \
	wbgl_GLPROC(void, UseProgramStages, GLuint pipeline, GLbitfield stages, GLuint program) \
	wbgl_GLPROC(void, ActiveShaderProgram, GLuint pipeline, GLuint program) \
	wbgl_GLPROC(GLuint, CreateShaderProgramv, GLenum type, GLsizei count, const GLchar *const*strings) \
	wbgl_GLPROC(void, BindProgramPipeline, GLuint pipeline) \
	wbgl_GLPROC(void, DeleteProgramPipelines, GLsizei n, const GLuint *pipelines) \
	wbgl_GLPROC(void, GenProgramPipelines, GLsizei n, GLuint *pipelines) \
	wbgl_GLPROC(GLboolean, IsProgramPipeline, GLuint pipeline) \
	wbgl_GLPROC(void, GetProgramPipelineiv, GLuint pipeline, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, ProgramUniform1i, GLuint program, GLint location, GLint v0) \
	wbgl_GLPROC(void, ProgramUniform1iv, GLuint program, GLint location, GLsizei count, const GLint *value) \
	wbgl_GLPROC(void, ProgramUniform1f, GLuint program, GLint location, GLfloat v0) \
	wbgl_GLPROC(void, ProgramUniform1fv, GLuint program, GLint location, GLsizei count, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniform1d, GLuint program, GLint location, GLdouble v0) \
	wbgl_GLPROC(void, ProgramUniform1dv, GLuint program, GLint location, GLsizei count, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniform1ui, GLuint program, GLint location, GLuint v0) \
	wbgl_GLPROC(void, ProgramUniform1uiv, GLuint program, GLint location, GLsizei count, const GLuint *value) \
	wbgl_GLPROC(void, ProgramUniform2i, GLuint program, GLint location, GLint v0, GLint v1) \
	wbgl_GLPROC(void, ProgramUniform2iv, GLuint program, GLint location, GLsizei count, const GLint *value) \
	wbgl_GLPROC(void, ProgramUniform2f, GLuint program, GLint location, GLfloat v0, GLfloat v1) \
	wbgl_GLPROC(void, ProgramUniform2fv, GLuint program, GLint location, GLsizei count, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniform2d, GLuint program, GLint location, GLdouble v0, GLdouble v1) \
	wbgl_GLPROC(void, ProgramUniform2dv, GLuint program, GLint location, GLsizei count, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniform2ui, GLuint program, GLint location, GLuint v0, GLuint v1) \
	wbgl_GLPROC(void, ProgramUniform2uiv, GLuint program, GLint location, GLsizei count, const GLuint *value) \
	wbgl_GLPROC(void, ProgramUniform3i, GLuint program, GLint location, GLint v0, GLint v1, GLint v2) \
	wbgl_GLPROC(void, ProgramUniform3iv, GLuint program, GLint location, GLsizei count, const GLint *value) \
	wbgl_GLPROC(void, ProgramUniform3f, GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) \
	wbgl_GLPROC(void, ProgramUniform3fv, GLuint program, GLint location, GLsizei count, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniform3d, GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) \
	wbgl_GLPROC(void, ProgramUniform3dv, GLuint program, GLint location, GLsizei count, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniform3ui, GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) \
	wbgl_GLPROC(void, ProgramUniform3uiv, GLuint program, GLint location, GLsizei count, const GLuint *value) \
	wbgl_GLPROC(void, ProgramUniform4i, GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) \
	wbgl_GLPROC(void, ProgramUniform4iv, GLuint program, GLint location, GLsizei count, const GLint *value) \
	wbgl_GLPROC(void, ProgramUniform4f, GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) \
	wbgl_GLPROC(void, ProgramUniform4fv, GLuint program, GLint location, GLsizei count, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniform4d, GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) \
	wbgl_GLPROC(void, ProgramUniform4dv, GLuint program, GLint location, GLsizei count, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniform4ui, GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) \
	wbgl_GLPROC(void, ProgramUniform4uiv, GLuint program, GLint location, GLsizei count, const GLuint *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix2fv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix3fv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix4fv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix2dv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix3dv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix4dv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix2x3fv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix3x2fv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix2x4fv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix4x2fv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix3x4fv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix4x3fv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix2x3dv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix3x2dv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix2x4dv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix4x2dv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix3x4dv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, ProgramUniformMatrix4x3dv, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) \
	wbgl_GLPROC(void, ValidateProgramPipeline, GLuint pipeline) \
	wbgl_GLPROC(void, GetProgramPipelineInfoLog, GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog) \
	wbgl_GLPROC(void, VertexAttribL1d, GLuint index, GLdouble x) \
	wbgl_GLPROC(void, VertexAttribL2d, GLuint index, GLdouble x, GLdouble y) \
	wbgl_GLPROC(void, VertexAttribL3d, GLuint index, GLdouble x, GLdouble y, GLdouble z) \
	wbgl_GLPROC(void, VertexAttribL4d, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) \
	wbgl_GLPROC(void, VertexAttribL1dv, GLuint index, const GLdouble *v) \
	wbgl_GLPROC(void, VertexAttribL2dv, GLuint index, const GLdouble *v) \
	wbgl_GLPROC(void, VertexAttribL3dv, GLuint index, const GLdouble *v) \
	wbgl_GLPROC(void, VertexAttribL4dv, GLuint index, const GLdouble *v) \
	wbgl_GLPROC(void, VertexAttribLPointer, GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) \
	wbgl_GLPROC(void, GetVertexAttribLdv, GLuint index, GLenum pname, GLdouble *params) \
	wbgl_GLPROC(void, ViewportArrayv, GLuint first, GLsizei count, const GLfloat *v) \
	wbgl_GLPROC(void, ViewportIndexedf, GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) \
	wbgl_GLPROC(void, ViewportIndexedfv, GLuint index, const GLfloat *v) \
	wbgl_GLPROC(void, ScissorArrayv, GLuint first, GLsizei count, const GLint *v) \
	wbgl_GLPROC(void, ScissorIndexed, GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, ScissorIndexedv, GLuint index, const GLint *v) \
	wbgl_GLPROC(void, DepthRangeArrayv, GLuint first, GLsizei count, const GLdouble *v) \
	wbgl_GLPROC(void, DepthRangeIndexed, GLuint index, GLdouble n, GLdouble f) \
	wbgl_GLPROC(void, GetFloati_v, GLenum target, GLuint index, GLfloat *data) \
	wbgl_GLPROC(void, GetDoublei_v, GLenum target, GLuint index, GLdouble *data) \


#define wbgl__GLPROC_LIST_GL_VERSION_4_2 \
	wbgl_GLPROC(void, DrawArraysInstancedBaseInstance, GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) \
	wbgl_GLPROC(void, DrawElementsInstancedBaseInstance, GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance) \
	wbgl_GLPROC(void, DrawElementsInstancedBaseVertexBaseInstance, GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) \
	wbgl_GLPROC(void, GetInternalformativ, GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params) \
	wbgl_GLPROC(void, GetActiveAtomicCounterBufferiv, GLuint program, GLuint bufferIndex, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, BindImageTexture, GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) \
	wbgl_GLPROC(void, MemoryBarrier, GLbitfield barriers) \
	wbgl_GLPROC(void, TexStorage1D, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) \
	wbgl_GLPROC(void, TexStorage2D, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, TexStorage3D, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) \
	wbgl_GLPROC(void, DrawTransformFeedbackInstanced, GLenum mode, GLuint id, GLsizei instancecount) \
	wbgl_GLPROC(void, DrawTransformFeedbackStreamInstanced, GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) \


#define wbgl__GLPROC_LIST_GL_VERSION_4_3 \
	wbgl_GLPROC(void, ClearBufferData, GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data) \
	wbgl_GLPROC(void, ClearBufferSubData, GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) \
	wbgl_GLPROC(void, DispatchCompute, GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) \
	wbgl_GLPROC(void, DispatchComputeIndirect, GLintptr indirect) \
	wbgl_GLPROC(void, CopyImageSubData, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) \
	wbgl_GLPROC(void, FramebufferParameteri, GLenum target, GLenum pname, GLint param) \
	wbgl_GLPROC(void, GetFramebufferParameteriv, GLenum target, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetInternalformati64v, GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params) \
	wbgl_GLPROC(void, InvalidateTexSubImage, GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) \
	wbgl_GLPROC(void, InvalidateTexImage, GLuint texture, GLint level) \
	wbgl_GLPROC(void, InvalidateBufferSubData, GLuint buffer, GLintptr offset, GLsizeiptr length) \
	wbgl_GLPROC(void, InvalidateBufferData, GLuint buffer) \
	wbgl_GLPROC(void, InvalidateFramebuffer, GLenum target, GLsizei numAttachments, const GLenum *attachments) \
	wbgl_GLPROC(void, InvalidateSubFramebuffer, GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, MultiDrawArraysIndirect, GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride) \
	wbgl_GLPROC(void, MultiDrawElementsIndirect, GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride) \
	wbgl_GLPROC(void, GetProgramInterfaceiv, GLuint program, GLenum programInterface, GLenum pname, GLint *params) \
	wbgl_GLPROC(GLuint, GetProgramResourceIndex, GLuint program, GLenum programInterface, const GLchar *name) \
	wbgl_GLPROC(void, GetProgramResourceName, GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name) \
	wbgl_GLPROC(void, GetProgramResourceiv, GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params) \
	wbgl_GLPROC(GLint, GetProgramResourceLocation, GLuint program, GLenum programInterface, const GLchar *name) \
	wbgl_GLPROC(GLint, GetProgramResourceLocationIndex, GLuint program, GLenum programInterface, const GLchar *name) \
	wbgl_GLPROC(void, ShaderStorageBlockBinding, GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) \
	wbgl_GLPROC(void, TexBufferRange, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) \
	wbgl_GLPROC(void, TexStorage2DMultisample, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) \
	wbgl_GLPROC(void, TexStorage3DMultisample, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) \
	wbgl_GLPROC(void, TextureView, GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) \
	wbgl_GLPROC(void, BindVertexBuffer, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) \
	wbgl_GLPROC(void, VertexAttribFormat, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) \
	wbgl_GLPROC(void, VertexAttribIFormat, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) \
	wbgl_GLPROC(void, VertexAttribLFormat, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) \
	wbgl_GLPROC(void, VertexAttribBinding, GLuint attribindex, GLuint bindingindex) \
	wbgl_GLPROC(void, VertexBindingDivisor, GLuint bindingindex, GLuint divisor) \
	wbgl_GLPROC(void, DebugMessageControl, GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) \
	wbgl_GLPROC(void, DebugMessageInsert, GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) \
	wbgl_GLPROC(void, DebugMessageCallback, GLDEBUGPROC callback, const void *userParam) \
	wbgl_GLPROC(GLuint, GetDebugMessageLog, GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) \
	wbgl_GLPROC(void, PushDebugGroup, GLenum source, GLuint id, GLsizei length, const GLchar *message) \
	wbgl_GLPROC(void, PopDebugGroup, void) \
	wbgl_GLPROC(void, ObjectLabel, GLenum identifier, GLuint name, GLsizei length, const GLchar *label) \
	wbgl_GLPROC(void, GetObjectLabel, GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label) \
	wbgl_GLPROC(void, ObjectPtrLabel, const void *ptr, GLsizei length, const GLchar *label) \
	wbgl_GLPROC(void, GetObjectPtrLabel, const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label) \


#define wbgl__GLPROC_LIST_GL_VERSION_4_4 \
	wbgl_GLPROC(void, BufferStorage, GLenum target, GLsizeiptr size, const void *data, GLbitfield flags) \
	wbgl_GLPROC(void, ClearTexImage, GLuint texture, GLint level, GLenum format, GLenum type, const void *data) \
	wbgl_GLPROC(void, ClearTexSubImage, GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data) \
	wbgl_GLPROC(void, BindBuffersBase, GLenum target, GLuint first, GLsizei count, const GLuint *buffers) \
	wbgl_GLPROC(void, BindBuffersRange, GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes) \
	wbgl_GLPROC(void, BindTextures, GLuint first, GLsizei count, const GLuint *textures) \
	wbgl_GLPROC(void, BindSamplers, GLuint first, GLsizei count, const GLuint *samplers) \
	wbgl_GLPROC(void, BindImageTextures, GLuint first, GLsizei count, const GLuint *textures) \
	wbgl_GLPROC(void, BindVertexBuffers, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) \


#define wbgl__GLPROC_LIST_GL_VERSION_4_5 \
	wbgl_GLPROC(void, ClipControl, GLenum origin, GLenum depth) \
	wbgl_GLPROC(void, CreateTransformFeedbacks, GLsizei n, GLuint *ids) \
	wbgl_GLPROC(void, TransformFeedbackBufferBase, GLuint xfb, GLuint index, GLuint buffer) \
	wbgl_GLPROC(void, TransformFeedbackBufferRange, GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) \
	wbgl_GLPROC(void, GetTransformFeedbackiv, GLuint xfb, GLenum pname, GLint *param) \
	wbgl_GLPROC(void, GetTransformFeedbacki_v, GLuint xfb, GLenum pname, GLuint index, GLint *param) \
	wbgl_GLPROC(void, GetTransformFeedbacki64_v, GLuint xfb, GLenum pname, GLuint index, GLint64 *param) \
	wbgl_GLPROC(void, CreateBuffers, GLsizei n, GLuint *buffers) \
	wbgl_GLPROC(void, NamedBufferStorage, GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags) \
	wbgl_GLPROC(void, NamedBufferData, GLuint buffer, GLsizeiptr size, const void *data, GLenum usage) \
	wbgl_GLPROC(void, NamedBufferSubData, GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data) \
	wbgl_GLPROC(void, CopyNamedBufferSubData, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) \
	wbgl_GLPROC(void, ClearNamedBufferData, GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) \
	wbgl_GLPROC(void, ClearNamedBufferSubData, GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) \
	wbgl_GLPROC(void *, MapNamedBuffer, GLuint buffer, GLenum access) \
	wbgl_GLPROC(void *, MapNamedBufferRange, GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) \
	wbgl_GLPROC(GLboolean, UnmapNamedBuffer, GLuint buffer) \
	wbgl_GLPROC(void, FlushMappedNamedBufferRange, GLuint buffer, GLintptr offset, GLsizeiptr length) \
	wbgl_GLPROC(void, GetNamedBufferParameteriv, GLuint buffer, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetNamedBufferParameteri64v, GLuint buffer, GLenum pname, GLint64 *params) \
	wbgl_GLPROC(void, GetNamedBufferPointerv, GLuint buffer, GLenum pname, void **params) \
	wbgl_GLPROC(void, GetNamedBufferSubData, GLuint buffer, GLintptr offset, GLsizeiptr size, void *data) \
	wbgl_GLPROC(void, CreateFramebuffers, GLsizei n, GLuint *framebuffers) \
	wbgl_GLPROC(void, NamedFramebufferRenderbuffer, GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) \
	wbgl_GLPROC(void, NamedFramebufferParameteri, GLuint framebuffer, GLenum pname, GLint param) \
	wbgl_GLPROC(void, NamedFramebufferTexture, GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) \
	wbgl_GLPROC(void, NamedFramebufferTextureLayer, GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) \
	wbgl_GLPROC(void, NamedFramebufferDrawBuffer, GLuint framebuffer, GLenum buf) \
	wbgl_GLPROC(void, NamedFramebufferDrawBuffers, GLuint framebuffer, GLsizei n, const GLenum *bufs) \
	wbgl_GLPROC(void, NamedFramebufferReadBuffer, GLuint framebuffer, GLenum src) \
	wbgl_GLPROC(void, InvalidateNamedFramebufferData, GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments) \
	wbgl_GLPROC(void, InvalidateNamedFramebufferSubData, GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, ClearNamedFramebufferiv, GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value) \
	wbgl_GLPROC(void, ClearNamedFramebufferuiv, GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value) \
	wbgl_GLPROC(void, ClearNamedFramebufferfv, GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value) \
	wbgl_GLPROC(void, ClearNamedFramebufferfi, GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) \
	wbgl_GLPROC(void, BlitNamedFramebuffer, GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) \
	wbgl_GLPROC(GLenum, CheckNamedFramebufferStatus, GLuint framebuffer, GLenum target) \
	wbgl_GLPROC(void, GetNamedFramebufferParameteriv, GLuint framebuffer, GLenum pname, GLint *param) \
	wbgl_GLPROC(void, GetNamedFramebufferAttachmentParameteriv, GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, CreateRenderbuffers, GLsizei n, GLuint *renderbuffers) \
	wbgl_GLPROC(void, NamedRenderbufferStorage, GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, NamedRenderbufferStorageMultisample, GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, GetNamedRenderbufferParameteriv, GLuint renderbuffer, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, CreateTextures, GLenum target, GLsizei n, GLuint *textures) \
	wbgl_GLPROC(void, TextureBuffer, GLuint texture, GLenum internalformat, GLuint buffer) \
	wbgl_GLPROC(void, TextureBufferRange, GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) \
	wbgl_GLPROC(void, TextureStorage1D, GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width) \
	wbgl_GLPROC(void, TextureStorage2D, GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, TextureStorage3D, GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) \
	wbgl_GLPROC(void, TextureStorage2DMultisample, GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) \
	wbgl_GLPROC(void, TextureStorage3DMultisample, GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) \
	wbgl_GLPROC(void, TextureSubImage1D, GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) \
	wbgl_GLPROC(void, TextureSubImage2D, GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) \
	wbgl_GLPROC(void, TextureSubImage3D, GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) \
	wbgl_GLPROC(void, CompressedTextureSubImage1D, GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) \
	wbgl_GLPROC(void, CompressedTextureSubImage2D, GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) \
	wbgl_GLPROC(void, CompressedTextureSubImage3D, GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) \
	wbgl_GLPROC(void, CopyTextureSubImage1D, GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) \
	wbgl_GLPROC(void, CopyTextureSubImage2D, GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, CopyTextureSubImage3D, GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) \
	wbgl_GLPROC(void, TextureParameterf, GLuint texture, GLenum pname, GLfloat param) \
	wbgl_GLPROC(void, TextureParameterfv, GLuint texture, GLenum pname, const GLfloat *param) \
	wbgl_GLPROC(void, TextureParameteri, GLuint texture, GLenum pname, GLint param) \
	wbgl_GLPROC(void, TextureParameterIiv, GLuint texture, GLenum pname, const GLint *params) \
	wbgl_GLPROC(void, TextureParameterIuiv, GLuint texture, GLenum pname, const GLuint *params) \
	wbgl_GLPROC(void, TextureParameteriv, GLuint texture, GLenum pname, const GLint *param) \
	wbgl_GLPROC(void, GenerateTextureMipmap, GLuint texture) \
	wbgl_GLPROC(void, BindTextureUnit, GLuint unit, GLuint texture) \
	wbgl_GLPROC(void, GetTextureImage, GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels) \
	wbgl_GLPROC(void, GetCompressedTextureImage, GLuint texture, GLint level, GLsizei bufSize, void *pixels) \
	wbgl_GLPROC(void, GetTextureLevelParameterfv, GLuint texture, GLint level, GLenum pname, GLfloat *params) \
	wbgl_GLPROC(void, GetTextureLevelParameteriv, GLuint texture, GLint level, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetTextureParameterfv, GLuint texture, GLenum pname, GLfloat *params) \
	wbgl_GLPROC(void, GetTextureParameterIiv, GLuint texture, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, GetTextureParameterIuiv, GLuint texture, GLenum pname, GLuint *params) \
	wbgl_GLPROC(void, GetTextureParameteriv, GLuint texture, GLenum pname, GLint *params) \
	wbgl_GLPROC(void, CreateVertexArrays, GLsizei n, GLuint *arrays) \
	wbgl_GLPROC(void, DisableVertexArrayAttrib, GLuint vaobj, GLuint index) \
	wbgl_GLPROC(void, EnableVertexArrayAttrib, GLuint vaobj, GLuint index) \
	wbgl_GLPROC(void, VertexArrayElementBuffer, GLuint vaobj, GLuint buffer) \
	wbgl_GLPROC(void, VertexArrayVertexBuffer, GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) \
	wbgl_GLPROC(void, VertexArrayVertexBuffers, GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) \
	wbgl_GLPROC(void, VertexArrayAttribBinding, GLuint vaobj, GLuint attribindex, GLuint bindingindex) \
	wbgl_GLPROC(void, VertexArrayAttribFormat, GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) \
	wbgl_GLPROC(void, VertexArrayAttribIFormat, GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) \
	wbgl_GLPROC(void, VertexArrayAttribLFormat, GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) \
	wbgl_GLPROC(void, VertexArrayBindingDivisor, GLuint vaobj, GLuint bindingindex, GLuint divisor) \
	wbgl_GLPROC(void, GetVertexArrayiv, GLuint vaobj, GLenum pname, GLint *param) \
	wbgl_GLPROC(void, GetVertexArrayIndexediv, GLuint vaobj, GLuint index, GLenum pname, GLint *param) \
	wbgl_GLPROC(void, GetVertexArrayIndexed64iv, GLuint vaobj, GLuint index, GLenum pname, GLint64 *param) \
	wbgl_GLPROC(void, CreateSamplers, GLsizei n, GLuint *samplers) \
	wbgl_GLPROC(void, CreateProgramPipelines, GLsizei n, GLuint *pipelines) \
	wbgl_GLPROC(void, CreateQueries, GLenum target, GLsizei n, GLuint *ids) \
	wbgl_GLPROC(void, GetQueryBufferObjecti64v, GLuint id, GLuint buffer, GLenum pname, GLintptr offset) \
	wbgl_GLPROC(void, GetQueryBufferObjectiv, GLuint id, GLuint buffer, GLenum pname, GLintptr offset) \
	wbgl_GLPROC(void, GetQueryBufferObjectui64v, GLuint id, GLuint buffer, GLenum pname, GLintptr offset) \
	wbgl_GLPROC(void, GetQueryBufferObjectuiv, GLuint id, GLuint buffer, GLenum pname, GLintptr offset) \
	wbgl_GLPROC(void, MemoryBarrierByRegion, GLbitfield barriers) \
	wbgl_GLPROC(void, GetTextureSubImage, GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels) \
	wbgl_GLPROC(void, GetCompressedTextureSubImage, GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels) \
	wbgl_GLPROC(GLenum, GetGraphicsResetStatus, void) \
	wbgl_GLPROC(void, GetnCompressedTexImage, GLenum target, GLint lod, GLsizei bufSize, void *pixels) \
	wbgl_GLPROC(void, GetnTexImage, GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels) \
	wbgl_GLPROC(void, GetnUniformdv, GLuint program, GLint location, GLsizei bufSize, GLdouble *params) \
	wbgl_GLPROC(void, GetnUniformfv, GLuint program, GLint location, GLsizei bufSize, GLfloat *params) \
	wbgl_GLPROC(void, GetnUniformiv, GLuint program, GLint location, GLsizei bufSize, GLint *params) \
	wbgl_GLPROC(void, GetnUniformuiv, GLuint program, GLint location, GLsizei bufSize, GLuint *params) \
	wbgl_GLPROC(void, ReadnPixels, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) \
	wbgl_GLPROC(void, GetnMapdv, GLenum target, GLenum query, GLsizei bufSize, GLdouble *v) \
	wbgl_GLPROC(void, GetnMapfv, GLenum target, GLenum query, GLsizei bufSize, GLfloat *v) \
	wbgl_GLPROC(void, GetnMapiv, GLenum target, GLenum query, GLsizei bufSize, GLint *v) \
	wbgl_GLPROC(void, GetnPixelMapfv, GLenum map, GLsizei bufSize, GLfloat *values) \
	wbgl_GLPROC(void, GetnPixelMapuiv, GLenum map, GLsizei bufSize, GLuint *values) \
	wbgl_GLPROC(void, GetnPixelMapusv, GLenum map, GLsizei bufSize, GLushort *values) \
	wbgl_GLPROC(void, GetnPolygonStipple, GLsizei bufSize, GLubyte *pattern) \
	wbgl_GLPROC(void, GetnColorTable, GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table) \
	wbgl_GLPROC(void, GetnConvolutionFilter, GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image) \
	wbgl_GLPROC(void, GetnSeparableFilter, GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span) \
	wbgl_GLPROC(void, GetnHistogram, GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) \
	wbgl_GLPROC(void, GetnMinmax, GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) \
	wbgl_GLPROC(void, TextureBarrier, void) \


#define wbgl_GLPROC(ret, name, ...) \
	 typedef ret wbgl_##name##Proc(__VA_ARGS__); \
	 WBGL_API wbgl_##name##Proc* gl##name;


#ifdef wbgl_USE_GL_VERSION_1_0
wbgl__GLPROC_LIST_GL_VERSION_1_0
#endif

#ifdef wbgl_USE_GL_VERSION_1_1
wbgl__GLPROC_LIST_GL_VERSION_1_1
#endif

#ifdef wbgl_USE_GL_VERSION_1_2
wbgl__GLPROC_LIST_GL_VERSION_1_2
#endif

#ifdef wbgl_USE_GL_VERSION_1_3
wbgl__GLPROC_LIST_GL_VERSION_1_3
#endif

#ifdef wbgl_USE_GL_VERSION_1_4
wbgl__GLPROC_LIST_GL_VERSION_1_4
#endif

#ifdef wbgl_USE_GL_VERSION_1_5
wbgl__GLPROC_LIST_GL_VERSION_1_5
#endif

#ifdef wbgl_USE_GL_VERSION_2_0
wbgl__GLPROC_LIST_GL_VERSION_2_0
#endif

#ifdef wbgl_USE_GL_VERSION_2_1
wbgl__GLPROC_LIST_GL_VERSION_2_1
#endif

#ifdef wbgl_USE_GL_VERSION_3_0
wbgl__GLPROC_LIST_GL_VERSION_3_0
#endif

#ifdef wbgl_USE_GL_VERSION_3_1
wbgl__GLPROC_LIST_GL_VERSION_3_1
#endif

#ifdef wbgl_USE_GL_VERSION_3_2
wbgl__GLPROC_LIST_GL_VERSION_3_2
#endif

#ifdef wbgl_USE_GL_VERSION_3_3
wbgl__GLPROC_LIST_GL_VERSION_3_3
#endif

#ifdef wbgl_USE_GL_VERSION_4_0
wbgl__GLPROC_LIST_GL_VERSION_4_0
#endif

#ifdef wbgl_USE_GL_VERSION_4_1
wbgl__GLPROC_LIST_GL_VERSION_4_1
#endif

#ifdef wbgl_USE_GL_VERSION_4_2
wbgl__GLPROC_LIST_GL_VERSION_4_2
#endif

#ifdef wbgl_USE_GL_VERSION_4_3
wbgl__GLPROC_LIST_GL_VERSION_4_3
#endif

#ifdef wbgl_USE_GL_VERSION_4_4
wbgl__GLPROC_LIST_GL_VERSION_4_4
#endif

#ifdef wbgl_USE_GL_VERSION_4_5
wbgl__GLPROC_LIST_GL_VERSION_4_5
#endif

#undef wbgl_GLPROC


#ifdef WBGL_IPMLEMENTATION
#define wbgl_GLPROC(ret, name, ...) \
	 wbgl_##name##Proc* gl##name;


#ifdef wbgl_USE_GL_VERSION_1_0
wbgl__GLPROC_LIST_GL_VERSION_1_0
#endif

#ifdef wbgl_USE_GL_VERSION_1_1
wbgl__GLPROC_LIST_GL_VERSION_1_1
#endif

#ifdef wbgl_USE_GL_VERSION_1_2
wbgl__GLPROC_LIST_GL_VERSION_1_2
#endif

#ifdef wbgl_USE_GL_VERSION_1_3
wbgl__GLPROC_LIST_GL_VERSION_1_3
#endif

#ifdef wbgl_USE_GL_VERSION_1_4
wbgl__GLPROC_LIST_GL_VERSION_1_4
#endif

#ifdef wbgl_USE_GL_VERSION_1_5
wbgl__GLPROC_LIST_GL_VERSION_1_5
#endif

#ifdef wbgl_USE_GL_VERSION_2_0
wbgl__GLPROC_LIST_GL_VERSION_2_0
#endif

#ifdef wbgl_USE_GL_VERSION_2_1
wbgl__GLPROC_LIST_GL_VERSION_2_1
#endif

#ifdef wbgl_USE_GL_VERSION_3_0
wbgl__GLPROC_LIST_GL_VERSION_3_0
#endif

#ifdef wbgl_USE_GL_VERSION_3_1
wbgl__GLPROC_LIST_GL_VERSION_3_1
#endif

#ifdef wbgl_USE_GL_VERSION_3_2
wbgl__GLPROC_LIST_GL_VERSION_3_2
#endif

#ifdef wbgl_USE_GL_VERSION_3_3
wbgl__GLPROC_LIST_GL_VERSION_3_3
#endif

#ifdef wbgl_USE_GL_VERSION_4_0
wbgl__GLPROC_LIST_GL_VERSION_4_0
#endif

#ifdef wbgl_USE_GL_VERSION_4_1
wbgl__GLPROC_LIST_GL_VERSION_4_1
#endif

#ifdef wbgl_USE_GL_VERSION_4_2
wbgl__GLPROC_LIST_GL_VERSION_4_2
#endif

#ifdef wbgl_USE_GL_VERSION_4_3
wbgl__GLPROC_LIST_GL_VERSION_4_3
#endif

#ifdef wbgl_USE_GL_VERSION_4_4
wbgl__GLPROC_LIST_GL_VERSION_4_4
#endif

#ifdef wbgl_USE_GL_VERSION_4_5
wbgl__GLPROC_LIST_GL_VERSION_4_5
#endif

#undef wbgl_GLPROC
#endif

#ifndef WBGL_MAX_ERRORS
#define WBGL_MAX_ERRORS 256
#endif
struct wbgl_ErrorContext
{
	int error_count;
	int failed_size;
	const char* failed[WBGL_MAX_ERRORS];
};

extern int WBGL_LOAD_PROC_NAME(struct wbgl_ErrorContext* in_ctx);

#ifdef WBGL_IMPLEMENTATION
static void wbgl__load_proc_error(const char* name, struct wbgl_ErrorContext* ctx)
{
	if(!ctx) return;
	ctx->error_count++;
	if(ctx->error_count < WBGL_MAX_ERRORS) {
		ctx->failed[ctx->error_count - 1] = name;
		ctx->failed_size++;
	}
}

#ifdef WBGL_WIN32
#include <Windows.h>
#include <Wingdi.h>
static void* wbgl__load_proc(const char* name, struct wbgl_ErrorContext* ctx, void* userdata)
{
	HMODULE gldll = (HMODULE)userdata;
	void* p = (void*)wglGetProcAddress(name);
	long int err = (long int)p;
	if(err == 0 || err == 1 || err == 2 || err == 3 || err == -1) {
		p = (void*)GetProcAddress(gldll, name);
		if(!p) {
			wbgl__load_proc_error(name, ctx);
		}
    }
	return p;
}
#endif

#ifdef WBGL_LINUX
#include "GL/glx.h"
static void* wbgl__load_proc(const char* name, struct wbgl_ErrorContext* ctx, void* userdata) 
{
	void* p = (void*)glXGetProcAddress(name);
	if(!p) {
		wbgl__load_proc_error(name, ctx);
	}
	return p;
}
#endif


int wbgl_load(struct wbgl_ErrorContext* in_ctx)
{
	struct wbgl_ErrorContext* ctx;
	struct wbgl_ErrorContext lctx;
	if(!in_ctx) ctx = &lctx;
	else ctx = in_ctx;

#ifdef WBGL_WIN32
	void* userdata = LoadLibraryA("opengl32.dll");
#else
	void* userdata = NULL;
#endif

#define wbgl_GLPROC(ret, name, ...) gl##name = (wbgl_##name##Proc*)wbgl__load_proc("gl" #name, ctx, userdata);

	#ifdef wbgl_USE_GL_VERSION_1_0
		wbgl__GLPROC_LIST_GL_VERSION_1_0
	#endif

	#ifdef wbgl_USE_GL_VERSION_1_1
		wbgl__GLPROC_LIST_GL_VERSION_1_1
	#endif

	#ifdef wbgl_USE_GL_VERSION_1_2
		wbgl__GLPROC_LIST_GL_VERSION_1_2
	#endif

	#ifdef wbgl_USE_GL_VERSION_1_3
		wbgl__GLPROC_LIST_GL_VERSION_1_3
	#endif

	#ifdef wbgl_USE_GL_VERSION_1_4
		wbgl__GLPROC_LIST_GL_VERSION_1_4
	#endif

	#ifdef wbgl_USE_GL_VERSION_1_5
		wbgl__GLPROC_LIST_GL_VERSION_1_5
	#endif

	#ifdef wbgl_USE_GL_VERSION_2_0
		wbgl__GLPROC_LIST_GL_VERSION_2_0
	#endif

	#ifdef wbgl_USE_GL_VERSION_2_1
		wbgl__GLPROC_LIST_GL_VERSION_2_1
	#endif

	#ifdef wbgl_USE_GL_VERSION_3_0
		wbgl__GLPROC_LIST_GL_VERSION_3_0
	#endif

	#ifdef wbgl_USE_GL_VERSION_3_1
		wbgl__GLPROC_LIST_GL_VERSION_3_1
	#endif

	#ifdef wbgl_USE_GL_VERSION_3_2
		wbgl__GLPROC_LIST_GL_VERSION_3_2
	#endif

	#ifdef wbgl_USE_GL_VERSION_3_3
		wbgl__GLPROC_LIST_GL_VERSION_3_3
	#endif

	#ifdef wbgl_USE_GL_VERSION_4_0
		wbgl__GLPROC_LIST_GL_VERSION_4_0
	#endif

	#ifdef wbgl_USE_GL_VERSION_4_1
		wbgl__GLPROC_LIST_GL_VERSION_4_1
	#endif

	#ifdef wbgl_USE_GL_VERSION_4_2
		wbgl__GLPROC_LIST_GL_VERSION_4_2
	#endif

	#ifdef wbgl_USE_GL_VERSION_4_3
		wbgl__GLPROC_LIST_GL_VERSION_4_3
	#endif

	#ifdef wbgl_USE_GL_VERSION_4_4
		wbgl__GLPROC_LIST_GL_VERSION_4_4
	#endif

	#ifdef wbgl_USE_GL_VERSION_4_5
		wbgl__GLPROC_LIST_GL_VERSION_4_5
	#endif

	return ctx->error_count;
}
#endif

#undef wbgl__GLPROC_LIST_GL_VERSION_1_0
#ifdef wbgl_USE_GL_VERSION_1_0
#undef wbgl_USE_GL_VERSION_1_0
#endif
#ifdef WBGL_NO_GL_VERSION_1_0
#undef WBGL_NO_GL_VERSION_1_0
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_1_1
#ifdef wbgl_USE_GL_VERSION_1_1
#undef wbgl_USE_GL_VERSION_1_1
#endif
#ifdef WBGL_NO_GL_VERSION_1_1
#undef WBGL_NO_GL_VERSION_1_1
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_1_2
#ifdef wbgl_USE_GL_VERSION_1_2
#undef wbgl_USE_GL_VERSION_1_2
#endif
#ifdef WBGL_NO_GL_VERSION_1_2
#undef WBGL_NO_GL_VERSION_1_2
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_1_3
#ifdef wbgl_USE_GL_VERSION_1_3
#undef wbgl_USE_GL_VERSION_1_3
#endif
#ifdef WBGL_NO_GL_VERSION_1_3
#undef WBGL_NO_GL_VERSION_1_3
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_1_4
#ifdef wbgl_USE_GL_VERSION_1_4
#undef wbgl_USE_GL_VERSION_1_4
#endif
#ifdef WBGL_NO_GL_VERSION_1_4
#undef WBGL_NO_GL_VERSION_1_4
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_1_5
#ifdef wbgl_USE_GL_VERSION_1_5
#undef wbgl_USE_GL_VERSION_1_5
#endif
#ifdef WBGL_NO_GL_VERSION_1_5
#undef WBGL_NO_GL_VERSION_1_5
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_2_0
#ifdef wbgl_USE_GL_VERSION_2_0
#undef wbgl_USE_GL_VERSION_2_0
#endif
#ifdef WBGL_NO_GL_VERSION_2_0
#undef WBGL_NO_GL_VERSION_2_0
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_2_1
#ifdef wbgl_USE_GL_VERSION_2_1
#undef wbgl_USE_GL_VERSION_2_1
#endif
#ifdef WBGL_NO_GL_VERSION_2_1
#undef WBGL_NO_GL_VERSION_2_1
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_3_0
#ifdef wbgl_USE_GL_VERSION_3_0
#undef wbgl_USE_GL_VERSION_3_0
#endif
#ifdef WBGL_NO_GL_VERSION_3_0
#undef WBGL_NO_GL_VERSION_3_0
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_3_1
#ifdef wbgl_USE_GL_VERSION_3_1
#undef wbgl_USE_GL_VERSION_3_1
#endif
#ifdef WBGL_NO_GL_VERSION_3_1
#undef WBGL_NO_GL_VERSION_3_1
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_3_2
#ifdef wbgl_USE_GL_VERSION_3_2
#undef wbgl_USE_GL_VERSION_3_2
#endif
#ifdef WBGL_NO_GL_VERSION_3_2
#undef WBGL_NO_GL_VERSION_3_2
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_3_3
#ifdef wbgl_USE_GL_VERSION_3_3
#undef wbgl_USE_GL_VERSION_3_3
#endif
#ifdef WBGL_NO_GL_VERSION_3_3
#undef WBGL_NO_GL_VERSION_3_3
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_4_0
#ifdef wbgl_USE_GL_VERSION_4_0
#undef wbgl_USE_GL_VERSION_4_0
#endif
#ifdef WBGL_NO_GL_VERSION_4_0
#undef WBGL_NO_GL_VERSION_4_0
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_4_1
#ifdef wbgl_USE_GL_VERSION_4_1
#undef wbgl_USE_GL_VERSION_4_1
#endif
#ifdef WBGL_NO_GL_VERSION_4_1
#undef WBGL_NO_GL_VERSION_4_1
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_4_2
#ifdef wbgl_USE_GL_VERSION_4_2
#undef wbgl_USE_GL_VERSION_4_2
#endif
#ifdef WBGL_NO_GL_VERSION_4_2
#undef WBGL_NO_GL_VERSION_4_2
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_4_3
#ifdef wbgl_USE_GL_VERSION_4_3
#undef wbgl_USE_GL_VERSION_4_3
#endif
#ifdef WBGL_NO_GL_VERSION_4_3
#undef WBGL_NO_GL_VERSION_4_3
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_4_4
#ifdef wbgl_USE_GL_VERSION_4_4
#undef wbgl_USE_GL_VERSION_4_4
#endif
#ifdef WBGL_NO_GL_VERSION_4_4
#undef WBGL_NO_GL_VERSION_4_4
#endif
#undef wbgl__GLPROC_LIST_GL_VERSION_4_5
#ifdef wbgl_USE_GL_VERSION_4_5
#undef wbgl_USE_GL_VERSION_4_5
#endif
#ifdef WBGL_NO_GL_VERSION_4_5
#undef WBGL_NO_GL_VERSION_4_5
#endif
#ifdef WBGL_GL_VERSION_2_1
#undef WBGL_GL_VERSION_2_1
#endif
#ifdef WBGL_GL_VERSION_3_3
#undef WBGL_GL_VERSION_3_3
#endif
#ifdef WBGL_GL_VERSION_4_0
#undef WBGL_GL_VERSION_4_0
#endif
#ifdef WBGL_GL_VERSION_4_5
#undef WBGL_GL_VERSION_4_5
#endif
#ifdef WBGL_ONLY_GL_VERSION_2
#undef WBGL_ONLY_GL_VERSION_2
#endif
#ifdef WBGL_ONLY_GL_VERSION_3
#undef WBGL_ONLY_GL_VERSION_3
#endif
#ifdef WBGL_ONLY_GL_VERSION_4
#undef WBGL_ONLY_GL_VERSION_4
#endif
#undef WBGL_API
#undef WBGL_LOAD_PROC_NAME

#include <intrin.h>
#include <xmmintrin.h> 

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef float f32;
typedef double f64;

typedef __m128 vf128;
typedef __m128i vi128;
typedef __m256 vf256;
typedef __m256i vi256;

union vf32x4
{
	f32 e[4];
	vf128 v;
};

union vi32x4
{
	i32 e[4];
	vi128 v;
};

union vf32x8
{
	f32 e[8];
	vf256 v;
};

union vi32x8
{
	i32 e[8];
	vi256 v;
};

typedef ptrdiff_t isize;
typedef size_t usize;

typedef const char* string;

#define Flag(x) (1<<(x))
#define HasFlag(x, flag) ((x)&(flag))
#define SetFlag(x, flag) ((x) |= (flag))
#define ClearFlag(x, flag) ((x) &= ~(flag))

#define Kilobytes(b) ((b) * UINT64_C(1024))
#define Megabytes(b) (Kilobytes(b) * UINT64_C(1024))
#define Gigabytes(b) (Megabytes(b) * UINT64_C(1024))

/* Allocation stuff */

#define PageSize 4096

typedef void* (*AllocateMemoryProc)(isize size, void* userdata);
typedef void (*FreeMemoryProc)(void* ptr, void* userdata);

typedef struct Allocator_
{
	AllocateMemoryProc allocate;
	FreeMemoryProc free;
	void* alloc_userdata;
	void* free_userdata;
} Allocator;

#define AllocatorAlloc(allocator, size) (allocator).allocate((size), (allocator).alloc_userdata)
#define AllocatorFree(allocator, ptr) (allocator).free((ptr), (allocator).free_userdata)

#define log_error(fmt, ...) fprintf(stderr, fmt, __VA_ARGS__)
#define Min(x, y) ((x) < (y) ? (x) : (y))
#define Max(x, y) ((x) > (y) ? (x) : (y))
#define true 1;
#define false 0;
#define isizeof(x) ((isize)(sizeof(x)))

Allocator allocator_create(AllocateMemoryProc alloc, FreeMemoryProc free, void* alloc_user, void* free_user)
{
	/*
	Allocator a;
	a.allocate = alloc;
	a.free = free;
	a.alloc_userdata = alloc_user; 
	a.free_userdata = free_user;
	return a;
	*/
	Allocator a = {0};
	return a;

}

void platform_no_op_free(void* ptr, void* userdata)
{

}

/*
void* platform_malloc_wrapper(isize size, void* userdata)
{
	return malloc(size);
}

void platform_free_wrapper(void* ptr, void* userdata)
{
	free(ptr);
}
*/
//Defined in ld_<platform name>.c: ld_win32.c and ld_linux.c 
//With corressponding WB_WINDOWS and WB_LINUX defines, too

//These need to use VirtualAlloc/VirtualFree on Win32 
//	https://msdn.microsoft.com/en-us/library/windows/desktop/aa366887(v=vs.85).aspx
//These need to use mmap on linux/osx 
//	http://man7.org/linux/man-pages/man2/mmap.2.html


void* platform_allocate_memory(isize size, void* userdata);
void* platform_reserve_memory(isize size, void* userdata);
void platform_commit_memory(isize size, void* ptr);
void platform_free_memory(void* ptr, void* userdata);
void platform_decommit_memory(void* ptr, void* userdata);

/*
char* platform_read_file(string name, isize* size_out, Allocator alloc)
{
	char* str = NULL;
	FILE* fp = fopen(name, "rb");
	if(fp) {
		fseek(fp, 0L, SEEK_END);
		isize size = ftell(fp);
		rewind(fp);
		str = AllocatorAlloc(alloc, size + 1);
		fread(str, sizeof(char), size, fp);
		str[size] = '\0';
		fclose(fp);
		if(size_out != NULL) {
			*size_out = size;
		}
	} else {
		log_error("Error: Could not open file %s\n", name);
	}
	return str;
}
*/
// Timing functions
i64 platform_get_perf_counter();
i64 platform_get_perf_freq();


extern int _fltused;

void* memmove(void *dest, const void *src, size_t n)
{
	size_t d_start = (size_t)dest;
	size_t s_start = (size_t)src;
	size_t d_end = (size_t)dest + n;
	size_t s_end = (size_t)src + n;

	char* c_dest = dest;
	const char* c_src = src;

	if(d_start <= s_start && d_end > s_start) {
		//copy from left to avoid overlap
		for(size_t i = 0; i < n; ++i) {
			c_dest[n] = c_src[n];
		}
	} else if(s_start <= d_start && s_end > d_end) {
		//copy from right to avoid overlap
		while(n--) c_dest[n] = c_src[n];
	} else {
		//"default" memcopy
		while(n--) c_dest[n] = c_src[n];
	}

	return dest;
}

void* memcpy(void *dest, const void *src, size_t n)
{
	char* c_dest = dest;
	const char* c_src = src;
	while(n--) c_dest[n] = c_src[n];
	return dest;
}
#pragma function(memcpy)

void* memset(void* dst, int c, size_t count)
{
	char* buf = dst;
	while(count--) *buf++ = (char)c;
	return dst;
}
#pragma function(memset)

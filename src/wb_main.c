#define $(...) 
#define VariadicArgs ...
$(exclude)
#include <SDL.h>

#include <stdint.h>
#include <limits.h>


#include "thirdparty.h"
#define snprintf stbsp_snprintf
#define vsnprintf stbsp_vsnprintf
#include "wb_platform.h"
int _fltused = 0;

#include "wb_win32.c"
//#include "wb_defines.h"


#include "ld38_generated.h"
#define REFLECTED
$(end);


typedef HANDLE File;
HANDLE stdin;
HANDLE stdout;
HANDLE stderr;

size_t vfprintf(File file, string fmt, va_list args)
{
	char buf[4096];
	size_t len = vsnprintf(buf, 4096, fmt, args);
	DWORD out = 0;
	WriteFile(file, buf, (DWORD)len, &out, NULL);
	//OutputDebugStringA(buf);
	return (size_t)out;
}

size_t fprintf(File file, string fmt, VariadicArgs)
{
	va_list args;
	va_start(args, fmt);
	return vfprintf(file, fmt, args);
}

size_t printf(string fmt, VariadicArgs)
{
	va_list args;
	va_start(args, fmt);
	return vfprintf(stdout, fmt, args);
}

#include "wb_memory.c"
#include "wb_transcendental_math.c"
#include "wb_math.c"
//#include "wb_renderer.c"
//#include "wb_game.c"

void ld38_main()
{
	stdout = GetStdHandle(STD_OUTPUT_HANDLE);
	stderr = GetStdHandle(STD_ERROR_HANDLE);

	SDL_main(0, NULL);
	SDL_Init(SDL_INIT_EVERYTHING);

	ExitProcess(0);
}

int main(int argc, char** argv)
{
	//MemoryArena* arena = arena_bootstrap("u", Gigabytes(1));
	SDL_Init(SDL_INIT_EVERYTHING);
	
	SDL_Window* w = SDL_CreateWindow("bap", 800, 600, 200, 200, 0);


	SDL_Delay(10000);
	SDL_Quit();
	return 0;
}

@echo off
set msvcdir_old="C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\"
set msvcdir="C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\"
if not defined DevEnvDir call %msvcdir%vcvars64.bat >nul

rem =================================
rem Program Definition Stuff
rem =================================

set main_file=src\wb_main.c
set libs_base_name=thirdparty
set libs_file=src\%libs_base_name%.c

set output_dir=bin\
set base_name=ld38
set main_proc=ld38_main
set stack_initial=1048576
set stack_reserve=16777216



set exe_name=%base_name%.exe
set pdb_name=%base_name%.pdb
set ctm_name=utilities\%base_name%.ctm
set libs_ctm_name=utilities\%libs_base_name%.ctm
set meta_out=src\%base_name%_generated.h

rem =================================
rem Compiler/Linker Flags
rem =================================

set disabled_warnings=/wd4477 ^
	/wd4244 ^
	/wd4267 ^
	/wd4334 ^
	/wd4305

set cl_common_flags= ^
	/D_CRT_SECURE_NO_WARNINGS ^
	/Imsvc_libs\include\ ^
	/TC ^
	/Gd ^
	/EHsc ^
	/GS- ^
	/Gs9999999 ^
	/Gm- 


set debug_cl_flags= ^
	/W3 ^
	/Zi 

set release_cl_flags= ^
	/fp:fast ^
	/O2

set link_common_flags= ^
	/INCREMENTAL:NO ^
	/NODEFAULTLIB ^
	/STACK:%stack_reserve%,%stack_initial% ^
	/LIBPATH:msvc_libs\lib\

set debug_link_flags=/SUBSYSTEM:CONSOLE
set release_link_flags=/SUBSYSTEM:WINDOWS

set common_libs=kernel32.lib ^
	user32.lib ^
	shell32.lib ^
	opengl32.lib ^
	SDL2.lib

set debug_libs=thirdparty_debug.lib
set release_libs=thirdparty_release.lib

rem =================================
rem Pre-build utilities.
rem =================================
set zip=utilities\7z.exe
set metaprogram=utilities\metaprogram.exe
set ctime=utilities\ctime.exe

rem =================================
taskkill /IM %exe_name% >NUL 2>&1
%ctime% -begin %ctm_name%

%metaprogram% -p -t -s %main_file% > %meta_out%

if exist %output_dir% goto buildstart
mkdir %output_dir%

rem =================================
:buildstart
for /f "tokens=1-3 delims=/:" %%a in ("%TIME%") do (set mytime=%%a.%%b)

if "%~1"=="debug" goto debug_build
if "%~1"=="release" goto release_build
if "%~1"=="libs" goto libs_build
if "%~1"=="publish" goto release_build
if "%~1"=="run" goto debug_build

goto debug_build

rem =================================
:libs_build
rem =================================
%ctime% -begin %libs_ctm_name%

echo === building %base_name% libs at %mytime% (debug) ===
cl /nologo ^
	%cl_common_flags% ^
	/c ^
	%libs_file% ^
	/Fd%libs_base_name%.pdb ^
	%debug_cl_flags% ^
	%disabled_warnings% ^
/link /NOLOGO ^
	%link_common_flags% ^
	%debug_link_flags% ^
	%common_libs% 
move %libs_base_name%.pdb msvc_libs\lib\ >nul 2>&1
set cl_errors=%errorlevel%

lib /NOLOGO %libs_base_name%.obj /OUT:%libs_base_name%_debug.lib
move %libs_base_name%_debug.lib msvc_libs\lib\ >nul 2>&1

echo === building %base_name% libs at %mytime% (release) ===
cl /nologo ^
	%cl_common_flags% ^
	/c ^
	%libs_file% ^
	%release_cl_flags% ^
	%disabled_warnings% ^
/link /NOLOGO ^
	%link_common_flags% ^
	%release_link_flags% ^
	%common_libs% 
set cl_errors=%errorlevel%

lib /NOLOGO %libs_base_name%.obj /OUT:%libs_base_name%_release.lib
move %libs_base_name%_release.lib msvc_libs\lib\ >nul 2>&1
del *.lib >nul 2>&1 
del vc140.pdb >nul 2>&1

%ctime% -end %libs_ctm_name% %cl_errors%

echo(

rem =================================
:debug_build
rem =================================
echo === building %base_name% at %mytime% (debug) ===
cl /nologo ^
	%cl_common_flags% ^
	%main_file% ^
	%debug_cl_flags% ^
	%disabled_warnings% ^
	/Fe%output_dir%%exe_name% ^
	/Fd%output_dir%%pdb_name% ^
/link /NOLOGO ^
	%link_common_flags% ^
	%debug_link_flags% ^
	/NODEFAULTLIB ^
	/ENTRY:%main_proc% ^
	/STACK:%stack_reserve%,%stack_initial% ^
	%common_libs% ^
	%debug_libs%
set cl_errors=%errorlevel%
goto end_build

rem =================================
:release_build
rem =================================
echo === building %base_name% at %mytime% (release) ===
cl /nologo ^
	%cl_common_flags% ^
	%release_cl_flags% ^
	%disabled_warnings% ^
	%main_file% ^
	/Fe%output_dir%%exe_name% ^
	/Fd%output_dir%%pdb_name% ^
/link /NOLOGO ^
	%link_common_flags% ^
	%release_link_flags% ^
	%common_libs% ^
	%release_libs%
set cl_errors=%errorlevel%
goto end_build

rem =================================
:end_build
del *.obj >nul 2>&1
%ctime% -end %ctm_name% %cl_errors%





REM cl explanation:
REM nologo: disables "Microsoft Optimizing Compiler..."
REM TC: globally use C language -- /TP for global C++
REM W3: enable warning level 3
REM Gd: use cdecl calling convention. Gr is fastcall, Gz is stdcall, Gv is vectorcall 
REM GS-: disable buffer security checks
REM Gs****: set maximum size of local variables before there's a stack probe
REM Gm-: disables minimal rebuild
REM fp:fast: use fast floating point
REM EHsc: Only catch C++ exceptions, extern "C" will never throw a C++ execption
REM MTd: statically link against CRT (debug), MD is dynamic link. LD creates a dll
REM wd****: warning disable
REM D****: define ****. Use /Dname#value for numeric values
REM Fe: rename executable (File executable)
REM Fd: rename pdb (File database)
REM link explanation:
REM ****.lib: library to link against
REM SUBSYSTEM:****: use WINDOWS or CONSOLE
REM nologo: same as above
REM INCREMENTAL:NO: don't do incremental linking or generate ikl files

REM Not included here, but might be useful
REM F *****: sets the size of the stack; 1mb = 1048576, 4mb = 4194308
REM /link
REM /ENTRY:name Name of the function to serve as main.
REM /STACK:reserve[,commit] if you're removing the CRT, you also want to set this.
REM /NODEFAULTLIB: cast away your shackles of mortality and ascend the CRT, becoming one with the system
REM (note, remove /M(T/D)(d) to make /NODEFAULTLIB real)


# sdl2 cmake project-config input for ./configure scripts

set(prefix "/home/malik/Bureau/src/Heimdall/output/Ubuntu-18.04-64bit") 
set(exec_prefix "${prefix}")
set(libdir "${exec_prefix}/lib")
set(SDL2_PREFIX "/home/malik/Bureau/src/Heimdall/output/Ubuntu-18.04-64bit")
set(SDL2_EXEC_PREFIX "/home/malik/Bureau/src/Heimdall/output/Ubuntu-18.04-64bit")
set(SDL2_LIBDIR "${exec_prefix}/lib")
set(SDL2_INCLUDE_DIRS "${prefix}/include/SDL2")
set(SDL2_LIBRARIES "-L${SDL2_LIBDIR} -Wl,-rpath,${libdir} -Wl,--enable-new-dtags -lSDL2 ")
string(STRIP "${SDL2_LIBRARIES}" SDL2_LIBRARIES)

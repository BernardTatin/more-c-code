cmake_minimum_required(VERSION 3.13)
project(moreccode C)

set(CMAKE_C_STANDARD 11)

add_library(libmlib STATIC omlib/pstring.c omlib/pstring.h omlib/inner_pstring.h )
# add_executable(omltest.exe libmlib omlib/omltest.c)

cmake_minimum_required(VERSION 3.15)
project(mlib C)

set(CMAKE_C_STANDARD 11)

add_library(libmlib pstring.c)
add_executable(omltest.exe omltest.c)

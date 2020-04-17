cmake_minimum_required(VERSION 3.15)
project(mlib C)

set(CMAKE_C_STANDARD 11)

add_library(omlib STATIC omlib/pstring.c omlib/pstring.h omlib/inner_pstring.h )

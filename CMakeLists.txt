cmake_minimum_required(VERSION 3.13)
project(moreccode C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(omlib)
add_executable(omltest.exe omlib/omltest.c)
target_link_libraries(omltest.exe ${CMAKE_SOURCE_DIR}/omlib/libomlib.a)

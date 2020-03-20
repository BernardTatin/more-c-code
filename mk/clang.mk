# ======================================================================
# clang.mk
# for inclusion in Makefile
# all about clang
# ======================================================================

CC = $(compiler) -std=c11 -Wall
LD = $(compiler)

AR = llvm-ar-9 rcs
RANLIB = llvm-ranlib-9

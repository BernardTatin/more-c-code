# ======================================================================
# clang.mk
# for inclusion in Makefile
# all about clang
# ======================================================================

CC = clang -std=c11 -Wall
LD = clang

AR = llvm-ar-9 rcs
RANLIB = llvm-ranlib-9

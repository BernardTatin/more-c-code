# ======================================================================
# gcc.mk
# for inclusion in Makefile
# all about gcc
# ======================================================================

CC = $(compiler) -std=c11 -Wall
LD = $(compiler)

AR = ar rcs
RANLIB = ranlib

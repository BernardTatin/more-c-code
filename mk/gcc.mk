# ======================================================================
# gcc.mk
# for inclusion in Makefile
# all about gcc
# ======================================================================

CFLAGS += -std=c11 -Wall

CC = $(compiler) $(CFLAGS)
LD = $(compiler) $(LDFLAGS)

AR = ar rcs
RANLIB = ranlib

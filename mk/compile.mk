# ======================================================================
# compile.mk
# for inclusion in Makefile
# all about compilation
# ======================================================================

ifneq (,$(findstring gcc,$(compiler)))
compfamily := gcc
else ifneq (,$(findstring clang,$(compiler)))
compfamily := clang
endif

include $(compfamily).mk

LIBOBJS = $(patsubst %.c,%.o,$(notdir $(LIBSRC)))
EXEOBJS = $(patsubst %.c,%.o,$(notdir $(EXESRC)))
OBJS = $(EXEOBJS) $(LIBOBJS)

%.o: %.c
	$(CC) -c $< -o $@

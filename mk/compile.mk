# ======================================================================
# compile.mk
# for inclusion in Makefile
# all about compilation
# ======================================================================

include $(compiler).mk

LIBOBJS = $(patsubst %.c,%.o,$(notdir $(LIBSRC)))
EXEOBJS = $(patsubst %.c,%.o,$(notdir $(EXESRC)))
OBJS = $(EXEOBJS) $(LIBOBJS)

%.o: %.c
	$(CC) -c $< -o $@

# ======================================================================
# Makefile
# for omlib
# ======================================================================

LIBSRC = pstring.c
EXESRC = omltest.c
SOURCES = $(EXESRC) $(LIBSRC)
LIB = libomltest.a
EXE = omltest.exe

include compile.mk

all: $(LIB) $(EXE)

include clean.mk

tests: all
	./$(EXE)

$(LIB): $(LIBOBJS)
	$(AR) $(LIB) $(LIBOBJS)

#	$(RANLIB) $(LIB)

$(EXE): $(EXEOBJS)
	$(LD) -L. $(EXEOBJS) -o $@ -lomltest

.PHONY: all tests



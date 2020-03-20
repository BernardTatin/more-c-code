# ======================================================================
# Makefile
# for omlib
# ======================================================================

LIBSRC = pstring.c
EXESRC = omltest.c
SOURCES = $(EXESRC) $(LIBSRC)
LIB = libomltest.a
EXE = omltest.exe

CFLAGS += -std=c11 -Wall
LDFLAGS += -L. -lomltest
include compile.mk

all: $(LIB) $(EXE)

include clean.mk

tests: all
	./$(EXE)

$(LIB): $(LIBOBJS)
	$(AR) $(LIB) $(LIBOBJS)

$(EXE): $(EXEOBJS)
	$(LD) $(EXEOBJS) $(LDFLAGS) -o $@

.PHONY: all tests



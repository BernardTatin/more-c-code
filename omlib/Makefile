# ======================================================================
# Makefile
# for omlib
# ======================================================================

SOURCES = omltest.c pstring.c
OBJS = $(patsubst %.c,%.o,$(notdir $(SOURCES)))
EXE = omltest.exe

include compile.mk

all: $(EXE)

include clean.mk

tests: all
	./$(EXE)

$(EXE): $(OBJS)
	$(LD) $(OBJS) -o $@

.PHONY: all tests



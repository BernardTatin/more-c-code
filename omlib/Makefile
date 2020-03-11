# ======================================================================
# Makefile
# for omlib
# ======================================================================

SOURCES = omltest.c pstring.c
OBJS = $(patsubst %.c,%.o,$(notdir $(SOURCES)))

CC = gcc -std=c11 -Wall
LD = gcc
EXE = omltest.exe

all: $(EXE)

clean:
	@rm -fv $(EXE) $(OBJS)

tests: all
	./$(EXE)

%.o: %.c
	$(CC) -c $< -o $@

$(EXE): $(OBJS)
	$(LD) $(OBJS) -o $@

.PHONY: all clean tests



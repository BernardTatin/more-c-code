# ======================================================================
# compile.mk
# for inclusion in Makefile
# all about compilation
# ======================================================================

include $(compiler).mk

%.o: %.c
	$(CC) -c $< -o $@

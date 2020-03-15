# ======================================================================
# clean.mk
# for inclusion in Makefile
# the clean target
# ======================================================================

clean:
	@rm -fv $(LIB) $(EXE) $(OBJS)

.PHONY: clean

# ======================================================================
# clean.mk
# for inclusion in Makefile
# the clean target
# ======================================================================

clean:
	@rm -fv $(EXE) $(OBJS)

.PHONY: clean
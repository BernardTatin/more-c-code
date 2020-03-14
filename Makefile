# ======================================================================
# Makefile
#
# ======================================================================

compiler ?= gcc

mkoptions = -I../mk compiler=$(compiler)

help:
	@echo "$(MAKE) [OPTIONS] project=project_project_name target"
	@echo "   OPTIONS:"
	@echo "      compiler=gccXXX|clangXXX"
	@echo "   project names:"
	@echo "      omlib: the library (One More library)"
	@echo "   targets:"
	@echo "      all: all"
	@echo "      clean: remove all compilation and tests products"
	@echo "      tests: run all the tests"

all:
	$(MAKE) -C $(project) $(mkoptions) all

clean:
	$(MAKE) -C $(project) $(mkoptions) clean

tests:
	$(MAKE) -C $(project) $(mkoptions) tests

.PHONY: help all clean tests


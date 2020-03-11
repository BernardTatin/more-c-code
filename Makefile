# ======================================================================
# Makefile
# ======================================================================

help:
	@echo "make project=project_project_name target"
	@echo "project names:"
	@echo "		omlib: the library (One More library)"
	@echo "targets:"
	@echo "		all: all"
	@echo "		clean: remove all compilation and tests products"
	@echo "		tests: run all the tests"

all:
	make -C $(project) all

clean:
	make -C $(project) clean

tests:
	make -C $(project) tests

.PHONY: help all clean tests


all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator -Wall --cc --exe --build ./csrc/main.cpp ./vsrc/*.v --trace --top-module ysyx_23060187_top
	make -j -C obj_dir -f Vtop.mk Vtop

include ../Makefile

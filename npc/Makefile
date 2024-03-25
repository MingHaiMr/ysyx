BUILD_DIR = ./build
VERILATOR = verilator
VERI_F += --cc --exe -build --trace -Wall --top-module ysyx_23060187_top
OBJ_DIR = ./obj_dir
SIM_TOPNAME = ysyx_23060187_top
WORK_DIR = $(shell pwd)
INC_PATH := $(WORK_DIR)/csrc/include $(INC_PATH)
INCLUDES = $(addprefix -I, $(INC_PATH))
C_F+= -CFLAGS "$(INCLUDES)"

V_FILE = $(shell find ./vsrc -name "*.v" -o -name "*.sv")
C_FILE = $(shell find ./csrc -name "*.cpp" -o -name "*.c")

run:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(VERILATOR) $(C_F) $(VERI_F) $(C_FILE) $(V_FILE)
	$(OBJ_DIR)/V$(SIM_TOPNAME)

gtk:sim
	gtkwave wave/sim_wave.vcd

clean:
	rm -f dump.vcd
	rm -rf ./obj_dir








	
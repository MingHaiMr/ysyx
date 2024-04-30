V_FILE = $(shell find ./vsrc -name "*.v" -o -name "*.sv")
C_FILE = $(shell find ./csrc -name "*.cpp" -o -name "*.c")
H_FILE = $(shell find ./csrc -name "*.h")

BUILD_DIR := ./build
OBJ_DIR := ./obj_dir
WORK_DIR := $(shell pwd)

SEARCHPATH := $(NPC_HOME)/vsrc
VERILATOR_FLAGS += -I$(SEARCHPATH)
VERILATOR_FLAGS += --trace --cc --exe --build
VERILATOR_FLAGS += --top-module ysyx_23060187_top

INC_PATH := $(WORK_DIR)/csrc/include $(INC_PATH)
INCLUDES := $(addprefix -I, $(INC_PATH))
C_F += -CFLAGS "$(INCLUDES)"

IMG ?= ../am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
RUNFLAGS := --img $(IMG)
NPC_EXEC := ./obj_dir/Vysyx_23060187_top

compile: $(V_FILE) $(C_FILE)
	verilator $(C_F) $(VERILATOR_FLAGS) $(C_FILE) $(V_FILE)
run: compile                  
	$(call git_commit, "sim NPC")
	$(NPC_EXEC) $(RUNFLAGS)
	       

wave:sim
	gtkwave @(OBJ_DIR)/dump.vcd

clean:
	rm -f dump.vcd
	rm -rf ./obj_dir








	
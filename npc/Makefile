BUILD_DIR = ./build
VERILATOR=verilator
VERI_F += --cc --exe --trace --build --top-module ysyx_23060187_top 
OBJ_DIR = ./obj_dir
SIM_TOPNAME = ysyx_23060187_top
WORK_DIR = $(shell pwd)
INC_PATH := $(WORK_DIR)/csrc/include $(INC_PATH)
INCLUDES = $(addprefix -I, $(INC_PATH))
C_F+= -CFLAGS "$(INCLUDES)"
C_F+= -CFLAGS "-g"
#C_F+= -CFLAGS "-DCONFIG_VCD_TRACE_COND"
#C_F+= -CFLAGS "-DCONFIG_DIFF_COND"
# C_F+= -CFLAGS "-DPTR_EXCUTE"
#C_F +=  -CFLAGS "-DTARGET_AM"
export LD_LIBRARY_PATH=/home/chengchen/Desktop/ysyx/nemu/build/nemu-interpreter
LDFLAGS = -L/usr/lib/x86_64-linux-gnu -lreadline -lncurses /home/chengchen/Desktop/ysyx/nemu/build/riscv32-nemu-interpreter-so -lpthread -ldl
IMG ?= ../am-kernels/tests/cpu-tests/build/add-riscv32-nemu.bin
RUNFLAGS := $(IMG) ../nemu/build/riscv32-nemu-interpreter-so
NPC_EXEC := ./obj_dir/Vysyx_23060187_top

V_FILE = $(shell find ./vsrc -name "*.v" -o -name "*.sv")
C_FILE += $(shell find ./csrc -name "*.cpp" -o -name "*.c")


compile:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "runing simulation for test module "
	$(VERILATOR) $(C_F) $(VERI_F) $(C_FILE) $(V_FILE) --LDFLAGS "$(LDFLAGS)"
	
run: compile                  
	$(call git_commit, "sim NPC")
	$(NPC_EXEC) $(RUNFLAGS)

gtk:sim 
	gtkwave wave/sim_wave.vcd

clean:
	rm -rf $(BUILD_DIR) $(OBJ_DIR) dump.vcd

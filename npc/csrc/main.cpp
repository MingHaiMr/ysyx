#include "verilated_vcd_c.h" 
#include "../obj_dir/Vysyx_23060187_top.h"  
#include "verilated.h"
//dpi-c
#include "Vysyx_23060187_top__Dpi.h"
#include <verilated_dpi.h>
//glibc
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//readline
#include <readline/readline.h>
#include <readline/history.h>
//system time
#include <sys/time.h>

VerilatedContext *contextp=NULL;
VerilatedVcdC* tfp=NULL;
Vysyx_23060187_top* dut;
int main_time = 0;

void cpu_init()
{
  // Initialize the CPU
  dut->rst = 0;
  dut->clk = 0;
  dut->eval();
  tfp->dump(main_time);
  main_time++;
  dut->clk = 1;
  dut->rst = 0;
  dut->eval();
  tfp->dump(main_time);
  main_time++;
  top->rst = 1;
}

void exec_once(VerilatedVcdC* tfp)
{
  // Evaluate the CPU
  dut->clk = 0;
  dut->eval();
  tfp->dump(main_time);
  main_time++;
  dut->clk = 1;
  dut->eval();
  tfp->dump(main_time);
  main_time++;
}

void cpu_exec(u_int64_t cycles)
{
  for (u_int64_t i = 0; i < cycles; i++)
  {
    exec_once(tfp);
  }
}

void sim_init() {
  contextp=new VerilatedContext;
  tfp=new VerilatedVcdC;
  dut=new Vtop;
  contextp->traceEverOn(true);
  dut->trace(tfp,0);
  tfp->open("dump.vcd");
}

void sim_exit() {
  single_cycle();
  tfp->close();
}

int main() {
  while(1) {
    dut->inst = pmem_read(dut.pc);
    single_cycle();
  }
  return 0;
}


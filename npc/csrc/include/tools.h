#ifndef __TOOLS_H_
#define __TOOLS_H_

#include <verilated.h>
#include <verilated_vcd_c.h>


#include "cpu.h"
#include "common.h"
#include "host.h"
#include "utils.h"
#include "paddr.h"

#include </home/haiming/ysyx/npc/obj_dir/Vysyx_23060187_top.h>

#endif


VerilatedContext *contextp=NULL;
VerilatedVcdC* tfp=NULL;
static Vysyx_23060187_top* top;


void sim_init()
{
    contextp=new VerilatedContext;
    tfp=new VerilatedVcdC;
    top=new Vysyx_23060187_top;
    //Verilated::commandArgs(argc, argv);
    contextp->traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("dump.vcd");
    top->clk = 0;
}

void signal_reset()
{
    top->rst = 1;
    top->clk = !top->clk;
}

void dump_wave()
{
    tfp->dump(contextp->time());
}

void clk_eval()
{
    top->clk = !top->clk;
    top->eval();
}

void restart()
{
    if(contextp->time() > 0 && contextp->time() < 2)
    {
        top->rst = 1;
        top->clk = 0;
    }
    else
    {  
        if(top->rst == 1)
        {
            top->rst = 0;
        }
        if(top->clk == 1)
        {
            top->inst = inst_fetch(&top->pc, 4);
            top->eval();
        }
    }
}

void excute_once()
{
    contextp->timeInc(1);
    clk_eval();
    restart();
    if(top->clk == 1)
    {
        printf("pc: %08x\n", top->pc);
        printf("inst: %08x\n", top->inst);
    }
    dump_wave();
}

void excute(uint32_t cycles)
{
   while(!contextp->gotFinish() && cycles > 0)
   {
       excute_once();
       cycles--;
   }
}

void final()
{
    tfp->close();
}




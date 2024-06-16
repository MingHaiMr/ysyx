#ifndef __TOOLS_H_
#define __TOOLS_H_

#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vysyx_23060187_top__Dpi.h"

#include "cpu.h"
#include "common.h"
#include "host.h"
#include "utils.h"
#include "paddr.h"
#include </home/haiming/ysyx/npc/obj_dir/Vysyx_23060187_top.h>
#include </home/haiming/ysyx/npc/obj_dir/Vysyx_23060187_top___024root.h>
#include <dlfcn.h>
#endif



VerilatedContext *contextp=NULL;
VerilatedVcdC* tfp=NULL;
static Vysyx_23060187_top* top;


enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };
typedef struct {
  int state;
  vaddr_t halt_pc;
  uint32_t halt_ret;
} NPCState;
NPCState npc_state;

typedef struct {
    paddr_t pc;
    word_t gpr[32];
}NPCREG;
NPCREG npc_reg;

void difftest_step(vaddr_t pc, vaddr_t npc);
void init_difftest(char *ref_so_file, long img_size, int port);
void checkregs(NPCREG *ref, vaddr_t pc);
bool isa_difftest_checkregs(NPCREG *ref_r, vaddr_t pc);
void difftest_skip_ref();
void difftest_skip_dut(int nr_ref, int nr_dut);

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
            top->eval();
        }
    }
}

void excute_once()
{
    //printf("pc: %08x rst: %d clk: %d\n", top->pc, top->rst, top->clk);
    contextp->timeInc(1);
    clk_eval();
    restart();
    for(int i = 0; i < 32; i ++)
    {
      npc_reg.gpr[i] = top->rootp->ysyx_23060187_top__DOT__register1__DOT__rf[i];
    }
    npc_reg.pc = top->pc;
    if(top->clk == 1)
    {
        printf("pc: 0x%08x\n", top->pc);
        printf("inst: %08x\n", top->rootp->ysyx_23060187_top__DOT__instruction);
    }
    difftest_step(npc_reg.pc, npc_reg.pc);
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

void statistic()
{
  
}
void cpu_exec(uint64_t n) {
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT:
      printf("Program execution has ended.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }

  excute(n);

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: case NPC_ABORT:
      printf("nemu: %s at pc = 0x%08x",
          (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          npc_state.halt_pc);
      // fall through
    case NPC_QUIT: statistic();
  }
}

void final()
{
    tfp->close();
}

#ifdef SDB

static int is_batch_mode = false;

void sdb_main_loop();
void isa_reg_display();

static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  npc_state.state = NPC_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args)
{
    if(args == NULL)
    {
        cpu_exec(2);
    }
    else
    {
        int nums = atoi(args);
        cpu_exec(2*nums);   
    }
    return 0;
}

static int cmd_x(char *args)
{
    char *N=strtok(NULL," ");
    char *start=strtok(NULL," ");
    int n,i;
    char *str;
    n=atoi(N);
    paddr_t addr;
    addr=strtol(start,&str,16);
    //printf("%08x\n",addr);
    //data=paddr_read(addr+4,4);
    //printf("%08x\n",data);
    //printf("%d",n);
    for(i=0;i<n;i++)
    {
        paddr_t data=pmem_read(addr+i*4);
        printf("0x%08x\n",data);
    }
    return 0;
}

static int cmd_info(char *args)
{
    char *arg=strtok(NULL," ");
    if(arg == NULL)
    {
        return 0;
    }
    else if(strcmp(arg,"r")==0)
    {
        isa_reg_display();
    }
    return 0;
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display()
{
  int i;
  for(i = 0;i < 32;i++)
  {
    printf("%s:0x%08x\n", regs[i], top->rootp->ysyx_23060187_top__DOT__register1__DOT__rf[i]);
  }
}

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Execution for one step" , cmd_si }, 
  { "info","print regs" , cmd_info},
  { "x", "scan memory" , cmd_x},
  //{ "p", "compute expr" , cmd_p},
  //{ "w", "set watchpoint", cmd_w},
  //{ "d", "delete watchpoint", cmd_d}
  /* TODO: Add more commands */

};

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void engine_start() {
    sdb_main_loop();
}

void sdb_main_loop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      //printf("%d  ",strcmp(cmd, cmd_table[i].name));
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        //printf("%d  ",cmd_table[i].handler(args));
        
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}
#endif

#ifdef CONFIG_DIFFTEST

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

typedef void (*ref_difftest_memcpy_t)(paddr_t addr, void *buf, size_t n, bool direction);
typedef void (*ref_difftest_regcpy_t)(void *dut, bool direction);
typedef void (*ref_difftest_exec_t)(uint64_t n);
typedef void (*ref_difftest_raise_intr_t)(uint64_t NO);
typedef void (*ref_difftest_init_t)(int port);
ref_difftest_memcpy_t ref_difftest_memcpy; 
ref_difftest_regcpy_t ref_difftest_regcpy;
ref_difftest_exec_t ref_difftest_exec;
ref_difftest_raise_intr_t ref_difftest_raise_intr;
ref_difftest_init_t ref_difftest_init;

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (ref_difftest_memcpy_t)dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (ref_difftest_regcpy_t)dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (ref_difftest_exec_t)dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (ref_difftest_raise_intr_t)dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  ref_difftest_init = (ref_difftest_init_t)dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  printf("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  printf("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      , ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&npc_reg, DIFFTEST_TO_REF);
}

void checkregs(NPCREG *ref, vaddr_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    isa_reg_display();
  }
}

bool isa_difftest_checkregs(NPCREG *ref_r, vaddr_t pc)
{
    bool diff = false;
    for (int i = 0; i < 32; i ++) {
        if (npc_reg.gpr[i] != ref_r->gpr[i]) {
            diff = true;
        }
    }
    return !diff;
}

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 1;

void difftest_skip_ref() {
  is_skip_ref = true;
  skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut) {
  skip_dut_nr_inst += nr_dut;
  while (nr_ref -- > 0) {
    ref_difftest_exec(1);
  }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
  NPCREG ref_r;

  if (skip_dut_nr_inst > 0) {
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    if (skip_dut_nr_inst == 0)
      printf("can not catch up with ref.pc = 0x%08x at pc = 0x%08x", ref_r.pc, pc);
    return;
  }

  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&npc_reg, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  checkregs(&ref_r, pc);
}
#endif




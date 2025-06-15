#include <am.h> 
#include <riscv/riscv.h>
#include <klib.h>
#include </home/haiming/ysyx/abstract-machine/am/include/arch/riscv.h>
static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    //printf("__am_irq_handle: mcause = %d, mepc = 0x%x GPR1 = %d\n", c->mcause, c->mepc, c->GPR1);
    switch (c->mcause) {
      case 11:
        if (c->GPR1 == -1) {
          ev.event = EVENT_YIELD;
        }
        else if(c->GPR1 >= 0 && c->GPR1 <=19){
          ev.event = EVENT_SYSCALL;
        }
        c->mepc += 4;
      break;
      default: ev.event = EVENT_ERROR; break;
    }
    c = user_handler(ev, c);
    assert(c != NULL);
  }
  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *p = (Context *)(kstack.end - sizeof(Context));
  p->mepc = (uintptr_t)entry;
  p->gpr[10] = (uintptr_t)arg;
  p->mstatus = 0x1800; // for difftest
  return p;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}

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
  //printf("kstack.end:%p,kstack.start:%p,size:%d\n", kstack.end, kstack.start, kstack.end - kstack.start);
  Context* p = (Context*)(kstack.end - sizeof(Context*));
  memset(p, 0, sizeof(Context*));
  //printf("Context size:%d\n", (kstack.end - (void*)p));
  assert((kstack.end - (void*)p) == sizeof(Context*));
  //printf("entry:%p\n", entry);

  p->mepc = (uintptr_t)entry;   // mret后，进入entry
  p->gpr[10] = (uintptr_t)arg; // a0传参,暂定为一个字符串
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

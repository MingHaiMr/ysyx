#include <am.h>
#include <nemu.h>
#include "/home/haiming/ysyx/abstract-machine/am/src/riscv/riscv.h"

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t kbval = inl(KBD_ADDR);
  kbd->keydown = ((kbval & KEYDOWN_MASK) == 0) ? false : true;
  kbd->keycode = kbval & (~KEYDOWN_MASK); 
}

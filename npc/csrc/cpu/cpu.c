#include "../include/cpu.h"
#include <stdio.h>
uint32_t inst_fetch(paddr_t *pc, int len) {
  uint32_t inst = paddr_read(*pc, len);
  //printf("inst: %08x\n", inst);
  return inst;
}
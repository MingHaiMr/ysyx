#include "../include/cpu.h"

uint32_t inst_fetch(paddr_t *pc, int len) {
  uint32_t inst = paddr_read(*pc, len);
  return inst;
}
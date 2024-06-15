#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__
#include "common.h"


uint8_t* guest_to_host(paddr_t paddr);
paddr_t host_to_guest(uint8_t *haddr);

static inline bool in_pmem(paddr_t addr) {
  return (addr >= MEMORY_BASE) && (addr - MEMORY_BASE < MEMORY_SIZE);
}


#endif
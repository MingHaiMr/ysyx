#include "../include/paddr.h"
#include "../include/host.h"


static uint8_t pmem[MEMORY_SIZE] PG_ALIGN = {};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MEMORY_BASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MEMORY_BASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
}

word_t vaddr_read(vaddr_t addr , int len ){
    return paddr_read(addr,len);
}

void vaddr_write(vaddr_t addr , int len ,word_t data ){
    paddr_write(addr, len , data );
}
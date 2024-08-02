#include "../include/paddr.h"
#include "../include/host.h"
#include "svdpi.h"
#include "Vysyx_23060187_top__Dpi.h"


static uint8_t pmem[MEMORY_SIZE] PG_ALIGN = {};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MEMORY_BASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MEMORY_BASE; }

extern int pmem_read(int raddr, int len) {
  if(likely(in_pmem(raddr))){
    word_t ret = host_read(guest_to_host(raddr), len);
    //printf("inst: 0x%08x\n", ret);
    return ret;
  }
  else {
    printf("raddr = 0x%08x\n", raddr);
    printf("error address!\n");
    assert(0);
  }
}

extern void pmem_write(int waddr, int wdata, char wmask) {
  printf("write address : 0x%08x write data : 0x%08x write mask : 0x%08x\n", waddr, wdata, wmask);
  if(likely(in_pmem(waddr))) {
    uint32_t mask = (uint8_t)wmask;
    if(mask == 1)
    {
      host_write(guest_to_host(waddr), 1, wdata);
    }
    else if(mask == 3)
    {
      host_write(guest_to_host(waddr), 2, wdata);
    }
    else if(mask == 15)
    {
      host_write(guest_to_host(waddr & ~0x3u), 4, wdata);
    }
    else
    {}
  }
}






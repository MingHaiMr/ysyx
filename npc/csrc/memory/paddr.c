#include "../include/paddr.h"
#include "../include/host.h"
#include "svdpi.h"
#include "Vysyx_23060187_top__Dpi.h"


static uint8_t pmem[MEMORY_SIZE] PG_ALIGN = {};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MEMORY_BASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MEMORY_BASE; }

extern int pmem_read(int raddr) {
  if(likely(in_pmem(raddr))){
    word_t ret = host_read(guest_to_host(raddr & ~0x3u), 4);
    return ret;
  }
  else {
    printf("error address!\n");
    assert(0);
  }
}

extern void pmem_write(int waddr, int wdata, char wmask) {
  if(likely(in_pmem(waddr))) {
    word_t write_select = 0;
    uint8_t mask = wmask;
    word_t unwrited_data = pmem_read(waddr & ~0x3u);
    for(int i = 0; i < 4; i ++)
    {
      if(mask & 1)
      {
        for(int j = 0; j < 8; j ++)
        {
          write_select = write_select | (word_t)(0x80000000 >> (i * 8 + j)); 
        }
      }
      mask >>= 1;
    }
    unwrited_data = unwrited_data & (~write_select);
    wdata = wdata & write_select;
    host_write(guest_to_host(waddr & ~0x3u), 4, (wdata | unwrited_data));
  }
}






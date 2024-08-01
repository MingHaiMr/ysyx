#include "../include/paddr.h"
#include "../include/host.h"
#include "svdpi.h"
#include "Vysyx_23060187_top__Dpi.h"


static uint8_t pmem[MEMORY_SIZE] PG_ALIGN = {};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MEMORY_BASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MEMORY_BASE; }

extern int pmem_read(int raddr, int len) {
  if(likely(in_pmem(raddr))){
    word_t ret = host_read(guest_to_host(raddr & ~0x3u), len);
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
    word_t write_select = 0;
    uint8_t mask = wmask;
    word_t unwrited_data = pmem_read(waddr & ~0x3u);
    for(int i = 0; i < 4; i ++) //4字节写入 0x3表示往最低两个字节写入数据
    {
      if(mask & 1)
      {
        printf("字节：%d\n", i);
        for(int j = 0; j < 8; j ++)
        {
          write_select = write_select | (word_t)(0x00000001 << (i * 8 + j)); 
        }
      }
      mask >>= 1;
    }
    unwrited_data = unwrited_data & (~write_select);
    wdata = wdata & write_select;
    host_write(guest_to_host(waddr & ~0x3u), 4, (wdata | unwrited_data));
  }
}






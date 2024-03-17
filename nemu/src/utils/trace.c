#include "trace.h"
#include <stdio.h>

void irbuf_push(word_t pc, uint32_t inst) {
    irbuf[irbuf_head].pc = pc;
    irbuf[irbuf_head].inst = inst;
    irbuf_head = (irbuf_head + 1) % IRINGBUF_SIZE;
    isFull = isFull || (irbuf_head == 0); 
}

void irbuf_dump() {
    char buf[128];
    void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    char *p = buf;
    if(!isFull && irbuf_head == 0) {
        printf("IR Buffer is empty\n");
        return;
    }
    int endloc = irbuf_head;
    int curloc = isFull ? endloc : 0;
    while((curloc + 1) % IRINGBUF_SIZE != endloc) {
        p += sprintf(p, "%s" FMT_WORD ": %08x", (curloc + 1) % IRINGBUF_SIZE == endloc ? "-->" : "   ", irbuf[curloc].pc, irbuf[curloc].inst);
        disassemble(p, sizeof(buf) - (p - buf), irbuf[curloc].pc, (uint8_t *)&irbuf[curloc].inst, 4);
        if((curloc + 1) % IRINGBUF_SIZE == endloc) {
            printf(ANSI_FG_RED);
        }
        printf("%s\n", buf);
        curloc = (curloc + 1) % IRINGBUF_SIZE;
    }
}

void pread_dump(paddr_t addr, int len)
{
    printf("read addr = " FMT_PADDR "len = %d\n", addr, len);
}

void pwrite_dump(paddr_t addr, int len, word_t data)
{
    printf("write addr = " FMT_PADDR "len = %d data =" FMT_WORD "\n", addr, len, data);
}









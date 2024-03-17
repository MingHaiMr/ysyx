#ifndef __TRACE_H__
#define __TRACE_H__

#include <common.h>
#include <utils.h>

#define IRINGBUF_SIZE 16

typedef struct {
    word_t pc;
    uint32_t inst;
}IRINGBUF_NODE;

static IRINGBUF_NODE irbuf[IRINGBUF_SIZE] __attribute__((unused));
static int irbuf_head __attribute__((unused)) = 0;
static bool isFull __attribute__((unused)) = false;
void irbuf_push(word_t pc, uint32_t inst);
void irbuf_dump();
void pread_dump(paddr_t addr, int len);
void pwrite_dump(paddr_t addr, int len, word_t data);
#endif
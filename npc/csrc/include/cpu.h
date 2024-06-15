#ifndef __CPU_H__
#define __CPU_H__
#include "paddr.h"


typedef struct {
    paddr_t pc;
    word_t gpr[32];
}CPU_STATE;


#endif
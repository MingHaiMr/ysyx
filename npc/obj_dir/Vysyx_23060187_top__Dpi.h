// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_23060187_TOP__DPI_H_
#define VERILATED_VYSYX_23060187_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/ebreak_dpi.v:2:29
    extern svBit is_ebreak(int inst, int gpr10);
    // DPI import at vsrc/mem_dpi.v:2:33
    extern int pmem_read(int raddr);
    // DPI import at vsrc/mem_dpi.v:3:34
    extern void pmem_write(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard

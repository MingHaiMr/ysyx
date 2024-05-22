// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060187_top.h for the primary calling header

#ifndef VERILATED_VYSYX_23060187_TOP___024ROOT_H_
#define VERILATED_VYSYX_23060187_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060187_top__Syms;

class Vysyx_23060187_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(opcode,6,0);
    VL_OUT8(fun3,2,0);
    VL_OUT8(fun7,0,0);
    VL_OUT8(rs2,4,0);
    CData/*0:0*/ ysyx_23060187_top__DOT__jalr;
    CData/*0:0*/ __Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(result,31,0);
    VL_OUT(unusedata,31,0);
    IData/*31:0*/ ysyx_23060187_top__DOT__imm;
    IData/*31:0*/ ysyx_23060187_top__DOT__src1;
    IData/*31:0*/ ysyx_23060187_top__DOT__opnumber1;
    IData/*31:0*/ ysyx_23060187_top__DOT__opnumber2;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060187_top__DOT__register1__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060187_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060187_top___024root(Vysyx_23060187_top__Syms* symsp, const char* v__name);
    ~Vysyx_23060187_top___024root();
    VL_UNCOPYABLE(Vysyx_23060187_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(cout_,0,0);
        VL_OUT8(aluctrl,3,0);
        CData/*0:0*/ ysyx_23060187_top__DOT__jalr;
        CData/*0:0*/ ysyx_23060187_top__DOT__sub;
        CData/*0:0*/ ysyx_23060187_top__DOT__sltiu;
        CData/*0:0*/ ysyx_23060187_top__DOT__cout;
        CData/*0:0*/ ysyx_23060187_top__DOT__sltu;
        CData/*0:0*/ ysyx_23060187_top__DOT__bne;
        CData/*0:0*/ ysyx_23060187_top__DOT__beq;
        CData/*0:0*/ ysyx_23060187_top__DOT__sll;
        CData/*0:0*/ ysyx_23060187_top__DOT__and_;
        CData/*0:0*/ ysyx_23060187_top__DOT__andi;
        CData/*0:0*/ ysyx_23060187_top__DOT__or_;
        CData/*0:0*/ ysyx_23060187_top__DOT__ori;
        CData/*0:0*/ ysyx_23060187_top__DOT__xor_;
        CData/*0:0*/ ysyx_23060187_top__DOT__xori;
        CData/*0:0*/ ysyx_23060187_top__DOT__slli;
        CData/*0:0*/ ysyx_23060187_top__DOT__bge;
        CData/*0:0*/ ysyx_23060187_top__DOT__bgeu;
        CData/*0:0*/ ysyx_23060187_top__DOT__sra;
        CData/*0:0*/ ysyx_23060187_top__DOT__blt;
        CData/*0:0*/ ysyx_23060187_top__DOT__slt;
        CData/*0:0*/ ysyx_23060187_top__DOT__slti;
        CData/*0:0*/ ysyx_23060187_top__DOT__mul;
        CData/*0:0*/ ysyx_23060187_top__DOT__mulh;
        CData/*0:0*/ ysyx_23060187_top__DOT__div;
        CData/*0:0*/ ysyx_23060187_top__DOT__divu;
        CData/*0:0*/ ysyx_23060187_top__DOT__rem;
        CData/*0:0*/ ysyx_23060187_top__DOT__remu;
        CData/*0:0*/ ysyx_23060187_top__DOT__lbu;
        CData/*0:0*/ ysyx_23060187_top__DOT__lw;
        CData/*0:0*/ ysyx_23060187_top__DOT__lh;
        CData/*0:0*/ ysyx_23060187_top__DOT__lhu;
        CData/*0:0*/ ysyx_23060187_top__DOT__isjump;
        CData/*4:0*/ ysyx_23060187_top__DOT__shift_amt;
        CData/*0:0*/ ysyx_23060187_top__DOT__valid2;
        CData/*0:0*/ ysyx_23060187_top__DOT__mem_wen;
        CData/*0:0*/ ysyx_23060187_top__DOT____VdfgTmp_h9142cc3d__0;
        CData/*0:0*/ ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0;
        CData/*0:0*/ ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0;
        CData/*0:0*/ ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0;
        CData/*0:0*/ ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0;
        CData/*0:0*/ ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0;
        CData/*0:0*/ ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0;
        CData/*0:0*/ ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0;
        CData/*0:0*/ ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0;
        CData/*0:0*/ __VdfgTmp_h431b7873__0;
        CData/*0:0*/ __VdfgTmp_h2c8c28ec__0;
        CData/*0:0*/ __Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__rst;
        CData/*0:0*/ __VactContinue;
        VL_OUT(pc,31,0);
        VL_OUT(reg_a0,31,0);
        VL_OUT(reg_a5,31,0);
        VL_OUT(result_,31,0);
        IData/*31:0*/ ysyx_23060187_top__DOT__result;
        IData/*31:0*/ ysyx_23060187_top__DOT__imm;
        IData/*31:0*/ ysyx_23060187_top__DOT__src1;
        IData/*31:0*/ ysyx_23060187_top__DOT__src2;
        IData/*31:0*/ ysyx_23060187_top__DOT__opnumber1;
        IData/*31:0*/ ysyx_23060187_top__DOT__opnumber2;
    };
    struct {
        IData/*31:0*/ ysyx_23060187_top__DOT__instruction;
        IData/*31:0*/ ysyx_23060187_top__DOT__mem_raddr;
        IData/*31:0*/ ysyx_23060187_top__DOT__mem_rdata;
        IData/*31:0*/ ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0;
        IData/*31:0*/ ysyx_23060187_top__DOT__decode__DOT__R_imm;
        IData/*31:0*/ ysyx_23060187_top__DOT__alu__DOT__res;
        IData/*31:0*/ __Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__1__Vfuncout;
        IData/*31:0*/ __Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__2__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0;
        QData/*63:0*/ ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0;
        VlUnpacked<IData/*31:0*/, 32> ysyx_23060187_top__DOT__register1__DOT__rf;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
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

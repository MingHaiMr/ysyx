// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060187_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060187_top__Syms.h"
#include "Vysyx_23060187_top___024root.h"

extern "C" svBit is_ebreak(int inst, int gpr10);

VL_INLINE_OPT void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP(IData/*31:0*/ inst, IData/*31:0*/ gpr10, CData/*0:0*/ &is_ebreak__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    int gpr10__Vcvt;
    for (size_t gpr10__Vidx = 0; gpr10__Vidx < 1; ++gpr10__Vidx) gpr10__Vcvt = gpr10;
    svBit is_ebreak__Vfuncrtn__Vcvt;
    is_ebreak__Vfuncrtn__Vcvt = is_ebreak(inst__Vcvt, gpr10__Vcvt);
    is_ebreak__Vfuncrtn = (1U & is_ebreak__Vfuncrtn__Vcvt);
}

extern "C" int pmem_read(int raddr, int len);

VL_INLINE_OPT void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt, len__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask);

VL_INLINE_OPT void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__act(Vysyx_23060187_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060187_top___024root___eval_triggers__act(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (vlSelf->ysyx_23060187_top__DOT__mem_rdata 
                                      != vlSelf->__Vtrigrprev__TOP__ysyx_23060187_top__DOT__mem_rdata);
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__Vtrigrprev__TOP__ysyx_23060187_top__DOT__mem_rdata 
        = vlSelf->ysyx_23060187_top__DOT__mem_rdata;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060187_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060187_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060187_top___024root.h"

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_static(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_initial(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__ysyx_23060187_top__DOT__mem_rdata 
        = vlSelf->ysyx_23060187_top__DOT__mem_rdata;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_final(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_triggers__stl(Vysyx_23060187_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__stl(Vysyx_23060187_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_stl(Vysyx_23060187_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_settle(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_23060187_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060187_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060187_top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_23060187_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__stl(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] ysyx_23060187_top.mem_rdata)\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP(IData/*31:0*/ inst, IData/*31:0*/ gpr10, CData/*0:0*/ &is_ebreak__Vfuncrtn);
void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vysyx_23060187_top___024root___stl_sequent__TOP__0(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->reg_a5 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [0xfU];
    vlSelf->reg_a0 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [0xaU];
    if ((0U != vlSelf->pc)) {
        Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read_TOP(vlSelf->pc, 4U, vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__1__Vfuncout);
        vlSelf->ysyx_23060187_top__DOT__instruction 
            = vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->ysyx_23060187_top__DOT__instruction = 0U;
    }
    Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP(vlSelf->ysyx_23060187_top__DOT__instruction, vlSelf->reg_a0, vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout);
    if (VL_UNLIKELY(vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout)) {
        VL_WRITEF("\n\033[1;34mebreak! pc : 0x%08x $a0 : 0x%08x\n\033[0m\n\n",
                  32,vlSelf->pc,32,vlSelf->reg_a0);
        VL_FINISH_MT("vsrc/ebreak_dpi.v", 8, "");
    }
    vlSelf->ysyx_23060187_top__DOT__mem_wen = ((IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->ysyx_23060187_top__DOT__instruction))) 
                                               | ((IData)(
                                                          (0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->ysyx_23060187_top__DOT__instruction))) 
                                                  | (IData)(
                                                            (0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->ysyx_23060187_top__DOT__instruction)))));
    vlSelf->ysyx_23060187_top__DOT__lbu = (IData)((0x4003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__lw = (IData)((0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__jalr = (IData)(
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__lh = (IData)((0x1003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__lhu = (IData)((0x5003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__src1 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                   >> 0xfU))];
    vlSelf->ysyx_23060187_top__DOT__src2 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                   >> 0x14U))];
    vlSelf->ysyx_23060187_top__DOT__imm = (((3U == 
                                             (0x7fU 
                                              & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                            | ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                               | (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction))))
                                            ? (((- (IData)(
                                                           (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                  >> 0x14U))
                                            : (((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)))
                                                ? (0xfffff000U 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)
                                                : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                                 >> 0x1fU))) 
                                                     << 0x14U) 
                                                    | ((0xff000U 
                                                        & vlSelf->ysyx_23060187_top__DOT__instruction) 
                                                       | ((0x800U 
                                                           & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                                >> 0x14U)))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->ysyx_23060187_top__DOT__instruction))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xdU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                                    >> 7U))))))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                              >> 7U))))))));
    vlSelf->ysyx_23060187_top__DOT__sltiu = (IData)(
                                                    (0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__andi = (IData)(
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__ori = (IData)((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__xori = (IData)(
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__sltu = (IData)(
                                                   (0x3033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__slli = (IData)(
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0 
        = (IData)((0x1033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0 
        = (IData)((0x7033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0 
        = (IData)((0x6033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0 
        = (IData)((0x4033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__beq = (IData)((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__bne = (IData)((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__bge = (IData)((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__blt = (IData)((0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__bgeu = (IData)(
                                                   (0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__bltu = (IData)(
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0 
        = (IData)((0x33U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0 
        = (IData)((0x2000U == (0xfe007000U & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h866de172__0 
        = ((IData)(vlSelf->ysyx_23060187_top__DOT__lh) 
           | (IData)(vlSelf->ysyx_23060187_top__DOT__lhu));
    vlSelf->ysyx_23060187_top__DOT__opnumber1 = (((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                  | ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                     | (IData)(vlSelf->ysyx_23060187_top__DOT__jalr)))
                                                  ? vlSelf->pc
                                                  : vlSelf->ysyx_23060187_top__DOT__src1);
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0 
        = ((QData)((IData)(vlSelf->ysyx_23060187_top__DOT__src1)) 
           * (QData)((IData)(vlSelf->ysyx_23060187_top__DOT__src2)));
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_23060187_top__DOT__src1), 
                      VL_EXTENDS_QI(64,32, vlSelf->ysyx_23060187_top__DOT__src2));
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0 
        = VL_MODDIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2);
    if (vlSelf->ysyx_23060187_top__DOT__mem_wen) {
        Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_write_TOP(
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__mem_wen)
                                                                                 ? 
                                                                                (vlSelf->ysyx_23060187_top__DOT__imm 
                                                                                + vlSelf->ysyx_23060187_top__DOT__src1)
                                                                                 : 0U), 
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__mem_wen)
                                                                                 ? vlSelf->ysyx_23060187_top__DOT__src2
                                                                                 : 0U), 
                                                                                ((IData)(
                                                                                (0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->ysyx_23060187_top__DOT__instruction)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->ysyx_23060187_top__DOT__instruction)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->ysyx_23060187_top__DOT__instruction)))
                                                                                 ? 3U
                                                                                 : 0U))));
    }
    vlSelf->ysyx_23060187_top__DOT__mulh = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0) 
                                            & (1U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__sll = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0) 
                                           & (0U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__remu = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0) 
                                            & (1U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__and_ = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0) 
                                            & (0U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__rem = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0) 
                                           & (1U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__or_ = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0) 
                                           & (0U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__div = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0) 
                                           & (1U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__xor_ = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0) 
                                            & (0U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__srai = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                                            & (0x20U 
                                               == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                   >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__srli = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                                            & (0U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__divu = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0) 
                                            & (1U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__sra = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                  >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__srl = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0) 
                                           & (0U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__mul = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                                           & (1U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__sub = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                  >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__slti = ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                            & (IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0));
    vlSelf->ysyx_23060187_top__DOT__slt = ((0x33U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                           & (IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0));
    vlSelf->ysyx_23060187_top__DOT__mem_rlen = ((IData)(vlSelf->ysyx_23060187_top__DOT__lbu)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h866de172__0)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->ysyx_23060187_top__DOT__lw)
                                                   ? 4U
                                                   : 0U)));
    vlSelf->ysyx_23060187_top__DOT__valid2 = ((IData)(vlSelf->ysyx_23060187_top__DOT__lbu) 
                                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__lw) 
                                                 | (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h866de172__0)));
    vlSelf->ysyx_23060187_top__DOT__shift_amt = (0x1fU 
                                                 & ((IData)(vlSelf->ysyx_23060187_top__DOT__sra)
                                                     ? vlSelf->ysyx_23060187_top__DOT__src2
                                                     : vlSelf->ysyx_23060187_top__DOT__imm));
    vlSelf->__VdfgTmp_h431b7873__0 = ((IData)(vlSelf->ysyx_23060187_top__DOT__slt) 
                                      | (IData)(vlSelf->ysyx_23060187_top__DOT__slti));
    vlSelf->ysyx_23060187_top__DOT__opnumber2 = (((IData)(
                                                          (0x13U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->ysyx_23060187_top__DOT__instruction))) 
                                                  | ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                                                        | ((IData)(vlSelf->ysyx_23060187_top__DOT__andi) 
                                                           | ((IData)(vlSelf->ysyx_23060187_top__DOT__ori) 
                                                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__slti) 
                                                                 | (IData)(vlSelf->ysyx_23060187_top__DOT__xori)))))))
                                                  ? vlSelf->ysyx_23060187_top__DOT__imm
                                                  : 
                                                 ((((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                        >> 0x19U))) 
                                                   | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltu) 
                                                      | ((IData)(vlSelf->ysyx_23060187_top__DOT__bne) 
                                                         | ((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                                                            | ((IData)(vlSelf->ysyx_23060187_top__DOT__sll) 
                                                               | ((IData)(vlSelf->ysyx_23060187_top__DOT__srl) 
                                                                  | ((IData)(vlSelf->ysyx_23060187_top__DOT__and_) 
                                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__or_) 
                                                                        | ((IData)(vlSelf->ysyx_23060187_top__DOT__xor_) 
                                                                           | ((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                                                                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__bgeu) 
                                                                                | ((IData)(vlSelf->ysyx_23060187_top__DOT__blt) 
                                                                                | ((IData)(vlSelf->ysyx_23060187_top__DOT__slt) 
                                                                                | ((IData)(vlSelf->ysyx_23060187_top__DOT__bltu) 
                                                                                | (IData)(vlSelf->ysyx_23060187_top__DOT__sub)))))))))))))))
                                                   ? vlSelf->ysyx_23060187_top__DOT__src2
                                                   : 
                                                  (((IData)(vlSelf->ysyx_23060187_top__DOT__slli) 
                                                    | (IData)(vlSelf->ysyx_23060187_top__DOT__srli))
                                                    ? 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__imm)
                                                    : 4U)));
    vlSelf->ysyx_23060187_top__DOT__mem_raddr = ((IData)(vlSelf->ysyx_23060187_top__DOT__valid2)
                                                  ? 
                                                 (vlSelf->ysyx_23060187_top__DOT__imm 
                                                  + vlSelf->ysyx_23060187_top__DOT__src1)
                                                  : 0U);
    vlSelf->aluctrl = (((IData)(vlSelf->ysyx_23060187_top__DOT__sub) 
                        | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                           | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltu) 
                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__bne) 
                                 | ((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                                    | ((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                                       | ((IData)(vlSelf->ysyx_23060187_top__DOT__bgeu) 
                                          | ((IData)(vlSelf->ysyx_23060187_top__DOT__blt) 
                                             | ((IData)(vlSelf->ysyx_23060187_top__DOT__bltu) 
                                                | (IData)(vlSelf->__VdfgTmp_h431b7873__0))))))))))
                        ? 6U : (((IData)(vlSelf->ysyx_23060187_top__DOT__and_) 
                                 | (IData)(vlSelf->ysyx_23060187_top__DOT__andi))
                                 ? 0U : (((IData)(vlSelf->ysyx_23060187_top__DOT__or_) 
                                          | (IData)(vlSelf->ysyx_23060187_top__DOT__ori))
                                          ? 1U : (((IData)(vlSelf->ysyx_23060187_top__DOT__xor_) 
                                                   | (IData)(vlSelf->ysyx_23060187_top__DOT__xori))
                                                   ? 5U
                                                   : 
                                                  (((IData)(vlSelf->ysyx_23060187_top__DOT__sll) 
                                                    | (IData)(vlSelf->ysyx_23060187_top__DOT__slli))
                                                    ? 3U
                                                    : 
                                                   (((IData)(vlSelf->ysyx_23060187_top__DOT__sra) 
                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__srai) 
                                                        | ((IData)(vlSelf->ysyx_23060187_top__DOT__srli) 
                                                           | (IData)(vlSelf->ysyx_23060187_top__DOT__srl))))
                                                     ? 4U
                                                     : 2U))))));
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h4e0dfd58__0 
        = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
           < vlSelf->ysyx_23060187_top__DOT__opnumber2);
    if ((0U == (IData)(vlSelf->aluctrl))) {
        vlSelf->ysyx_23060187_top__DOT__alu__DOT__tmp = 0U;
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  & vlSelf->ysyx_23060187_top__DOT__opnumber2);
        vlSelf->ysyx_23060187_top__DOT__overflow = 0U;
    } else if ((1U == (IData)(vlSelf->aluctrl))) {
        vlSelf->ysyx_23060187_top__DOT__alu__DOT__tmp = 0U;
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  | vlSelf->ysyx_23060187_top__DOT__opnumber2);
        vlSelf->ysyx_23060187_top__DOT__overflow = 0U;
    } else if ((2U == (IData)(vlSelf->aluctrl))) {
        vlSelf->ysyx_23060187_top__DOT__alu__DOT__tmp = 0U;
        vlSelf->ysyx_23060187_top__DOT__cout = (1U 
                                                & (IData)(
                                                          (1ULL 
                                                           & (((QData)((IData)(vlSelf->ysyx_23060187_top__DOT__opnumber1)) 
                                                               + (QData)((IData)(vlSelf->ysyx_23060187_top__DOT__opnumber2))) 
                                                              >> 0x20U))));
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  + vlSelf->ysyx_23060187_top__DOT__opnumber2);
        vlSelf->ysyx_23060187_top__DOT__overflow = 
            (((vlSelf->ysyx_23060187_top__DOT__opnumber1 
               >> 0x1fU) == (vlSelf->ysyx_23060187_top__DOT__opnumber2 
                             >> 0x1fU)) & ((vlSelf->ysyx_23060187_top__DOT__result 
                                            >> 0x1fU) 
                                           != (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                               >> 0x1fU)));
    } else if ((3U == (IData)(vlSelf->aluctrl))) {
        vlSelf->ysyx_23060187_top__DOT__alu__DOT__tmp = 0U;
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = ((0x1fU 
                                                   >= vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   ? 
                                                  (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                   << vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   : 0U);
        vlSelf->ysyx_23060187_top__DOT__overflow = 0U;
    } else if ((4U == (IData)(vlSelf->aluctrl))) {
        vlSelf->ysyx_23060187_top__DOT__alu__DOT__tmp = 0U;
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = ((0x1fU 
                                                   >= vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   ? 
                                                  (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                   >> vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   : 0U);
        vlSelf->ysyx_23060187_top__DOT__overflow = 0U;
    } else if ((5U == (IData)(vlSelf->aluctrl))) {
        vlSelf->ysyx_23060187_top__DOT__alu__DOT__tmp = 0U;
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  ^ vlSelf->ysyx_23060187_top__DOT__opnumber2);
        vlSelf->ysyx_23060187_top__DOT__overflow = 0U;
    } else if ((6U == (IData)(vlSelf->aluctrl))) {
        vlSelf->ysyx_23060187_top__DOT__alu__DOT__tmp 
            = vlSelf->ysyx_23060187_top__DOT__opnumber2;
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  - vlSelf->ysyx_23060187_top__DOT__opnumber2);
        vlSelf->ysyx_23060187_top__DOT__overflow = 
            ((vlSelf->ysyx_23060187_top__DOT__opnumber1 
              < vlSelf->ysyx_23060187_top__DOT__opnumber2)
              ? 1U : 0U);
    } else {
        vlSelf->ysyx_23060187_top__DOT__alu__DOT__tmp = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = 0U;
        vlSelf->ysyx_23060187_top__DOT__overflow = 0U;
    }
    vlSelf->jump_ = ((((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                       | (IData)(vlSelf->ysyx_23060187_top__DOT__bne)) 
                      & (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                         == vlSelf->ysyx_23060187_top__DOT__opnumber2)) 
                     | ((((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                          | (IData)(vlSelf->ysyx_23060187_top__DOT__blt)) 
                         & VL_LTS_III(32, vlSelf->ysyx_23060187_top__DOT__opnumber1, vlSelf->ysyx_23060187_top__DOT__opnumber2)) 
                        | (((IData)(vlSelf->ysyx_23060187_top__DOT__bgeu) 
                            | (IData)(vlSelf->ysyx_23060187_top__DOT__bltu)) 
                           & (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h4e0dfd58__0))));
    vlSelf->result_ = vlSelf->ysyx_23060187_top__DOT__result;
    vlSelf->overflow_ = vlSelf->ysyx_23060187_top__DOT__overflow;
}

void Vysyx_23060187_top___024root___act_sequent__TOP__0(Vysyx_23060187_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_stl(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_23060187_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        Vysyx_23060187_top___024root___act_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__act(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] ysyx_23060187_top.mem_rdata)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__nba(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] ysyx_23060187_top.mem_rdata)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060187_top___024root___ctor_var_reset(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->reg_a0 = VL_RAND_RESET_I(32);
    vlSelf->reg_a5 = VL_RAND_RESET_I(32);
    vlSelf->overflow_ = VL_RAND_RESET_I(1);
    vlSelf->result_ = VL_RAND_RESET_I(32);
    vlSelf->aluctrl = VL_RAND_RESET_I(4);
    vlSelf->jump_ = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__opnumber1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__opnumber2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__sub = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__sltiu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__sltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__bne = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__beq = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__sll = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__srl = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__and_ = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__andi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__or_ = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__ori = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__xor_ = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__xori = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__srli = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__slli = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__bge = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__bgeu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__sra = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__srai = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__blt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__bltu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__slt = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__slti = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__mul = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__mulh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__div = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__divu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__rem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__remu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__lbu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__lw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__lh = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__lhu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__shift_amt = VL_RAND_RESET_I(5);
    vlSelf->ysyx_23060187_top__DOT__valid2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__mem_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__mem_rlen = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__mem_raddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__overflow = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h4e0dfd58__0 = 0;
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h866de172__0 = 0;
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0 = 0;
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0 = 0;
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0 = 0;
    vlSelf->ysyx_23060187_top__DOT__decode__DOT__R_imm = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060187_top__DOT__alu__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0 = 0;
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0 = 0;
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0 = 0;
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0 = 0;
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0 = 0;
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0 = 0;
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0 = 0;
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0 = 0;
    vlSelf->__VdfgTmp_h431b7873__0 = 0;
    vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__3__Vfuncout = 0;
    vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__4__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060187_top__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

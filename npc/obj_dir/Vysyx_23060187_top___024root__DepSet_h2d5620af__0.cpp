// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060187_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060187_top___024root.h"

void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP(IData/*31:0*/ inst, IData/*31:0*/ gpr10, CData/*0:0*/ &is_ebreak__Vfuncrtn);

VL_INLINE_OPT void Vysyx_23060187_top___024root___ico_sequent__TOP__0(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->fun7 = (1U & (vlSelf->inst >> 0x1eU));
    vlSelf->rs2 = (0x1fU & (vlSelf->inst >> 0x14U));
    Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP(vlSelf->inst, 
                                                                                vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
                                                                                [0xaU], vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout);
    if (VL_UNLIKELY(vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout)) {
        VL_WRITEF("\n\033[1;34mebreak! pc : 0x%08x $a0 : 0x%08x\n\033[0m\n\n",
                  32,vlSelf->pc,32,vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
                  [0xaU]);
        VL_FINISH_MT("vsrc/dpi.v", 8, "");
    }
    vlSelf->ysyx_23060187_top__DOT__src1 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->fun3 = (7U & (vlSelf->inst >> 0xcU));
    vlSelf->opcode = (0x7fU & vlSelf->inst);
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0 
        = ((0x33U == (IData)(vlSelf->opcode)) & (0U 
                                                 == (IData)(vlSelf->fun3)));
    vlSelf->ysyx_23060187_top__DOT__imm = (((3U == (IData)(vlSelf->opcode)) 
                                            | ((0x13U 
                                                == (IData)(vlSelf->opcode)) 
                                               | (0x67U 
                                                  == (IData)(vlSelf->opcode))))
                                            ? (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->inst 
                                                  >> 0x14U))
                                            : (((0x17U 
                                                 == (IData)(vlSelf->opcode)) 
                                                | (0x37U 
                                                   == (IData)(vlSelf->opcode)))
                                                ? (0xfffff000U 
                                                   & vlSelf->inst)
                                                : (
                                                   ((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->inst 
                                                               >> 0x14U)))))));
    vlSelf->ysyx_23060187_top__DOT__jalr = ((0x67U 
                                             == (IData)(vlSelf->opcode)) 
                                            & (0U == (IData)(vlSelf->fun3)));
    vlSelf->ysyx_23060187_top__DOT__opnumber2 = (((
                                                   (0x13U 
                                                    == (IData)(vlSelf->opcode)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->fun3))) 
                                                  | (0x17U 
                                                     == (IData)(vlSelf->opcode)))
                                                  ? vlSelf->ysyx_23060187_top__DOT__imm
                                                  : 4U);
    vlSelf->ysyx_23060187_top__DOT__opnumber1 = (((0x17U 
                                                   == (IData)(vlSelf->opcode)) 
                                                  | ((0x6fU 
                                                      == (IData)(vlSelf->opcode)) 
                                                     | (IData)(vlSelf->ysyx_23060187_top__DOT__jalr)))
                                                  ? vlSelf->pc
                                                  : vlSelf->ysyx_23060187_top__DOT__src1);
    vlSelf->result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                      + vlSelf->ysyx_23060187_top__DOT__opnumber2);
}

void Vysyx_23060187_top___024root___eval_ico(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_23060187_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_23060187_top___024root___eval_act(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_23060187_top___024root___nba_sequent__TOP__0(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : ((0x6fU == (IData)(vlSelf->opcode))
                       ? (vlSelf->pc + vlSelf->ysyx_23060187_top__DOT__imm)
                       : ((IData)(vlSelf->ysyx_23060187_top__DOT__jalr)
                           ? (0xfffffffeU & (vlSelf->ysyx_23060187_top__DOT__src1 
                                             + vlSelf->ysyx_23060187_top__DOT__imm))
                           : ((IData)(4U) + vlSelf->pc))));
}

VL_INLINE_OPT void Vysyx_23060187_top___024root___nba_sequent__TOP__1(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060187_top__DOT__register1__DOT__rf__v0;
    __Vdlyvdim0__ysyx_23060187_top__DOT__register1__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060187_top__DOT__register1__DOT__rf__v0;
    __Vdlyvval__ysyx_23060187_top__DOT__register1__DOT__rf__v0 = 0;
    // Body
    __Vdlyvval__ysyx_23060187_top__DOT__register1__DOT__rf__v0 
        = ((0x37U == (IData)(vlSelf->opcode)) ? vlSelf->ysyx_23060187_top__DOT__imm
            : vlSelf->result);
    __Vdlyvdim0__ysyx_23060187_top__DOT__register1__DOT__rf__v0 
        = (0x1fU & (vlSelf->inst >> 7U));
    vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[__Vdlyvdim0__ysyx_23060187_top__DOT__register1__DOT__rf__v0] 
        = __Vdlyvval__ysyx_23060187_top__DOT__register1__DOT__rf__v0;
    vlSelf->ysyx_23060187_top__DOT__src1 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
}

VL_INLINE_OPT void Vysyx_23060187_top___024root___nba_comb__TOP__0(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___nba_comb__TOP__0\n"); );
    // Body
    Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP(vlSelf->inst, 
                                                                                vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
                                                                                [0xaU], vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout);
    if (VL_UNLIKELY(vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout)) {
        VL_WRITEF("\n\033[1;34mebreak! pc : 0x%08x $a0 : 0x%08x\n\033[0m\n\n",
                  32,vlSelf->pc,32,vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
                  [0xaU]);
        VL_FINISH_MT("vsrc/dpi.v", 8, "");
    }
    vlSelf->ysyx_23060187_top__DOT__opnumber1 = (((0x17U 
                                                   == (IData)(vlSelf->opcode)) 
                                                  | ((0x6fU 
                                                      == (IData)(vlSelf->opcode)) 
                                                     | (IData)(vlSelf->ysyx_23060187_top__DOT__jalr)))
                                                  ? vlSelf->pc
                                                  : vlSelf->ysyx_23060187_top__DOT__src1);
    vlSelf->result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                      + vlSelf->ysyx_23060187_top__DOT__opnumber2);
}

void Vysyx_23060187_top___024root___eval_nba(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_23060187_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060187_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_23060187_top___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vysyx_23060187_top___024root___eval_triggers__ico(Vysyx_23060187_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__ico(Vysyx_23060187_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_23060187_top___024root___eval_triggers__act(Vysyx_23060187_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__act(Vysyx_23060187_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__nba(Vysyx_23060187_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060187_top___024root___eval(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_23060187_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060187_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060187_top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_23060187_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_23060187_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060187_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_23060187_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_23060187_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060187_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060187_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_23060187_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_23060187_top___024root___eval_debug_assertions(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG

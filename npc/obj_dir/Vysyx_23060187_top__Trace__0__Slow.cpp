// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060187_top__Syms.h"


VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_init_sub__TOP__0(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBus(c+40,"inst", false,-1, 31,0);
    tracep->declBit(c+41,"rst", false,-1);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+43,"result", false,-1, 31,0);
    tracep->declBus(c+44,"opcode", false,-1, 6,0);
    tracep->declBus(c+45,"fun3", false,-1, 2,0);
    tracep->declBit(c+46,"fun7", false,-1);
    tracep->declBus(c+47,"unusedata", false,-1, 31,0);
    tracep->declBus(c+48,"rs2", false,-1, 4,0);
    tracep->pushNamePrefix("ysyx_23060187_top ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBus(c+40,"inst", false,-1, 31,0);
    tracep->declBit(c+41,"rst", false,-1);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declBus(c+43,"result", false,-1, 31,0);
    tracep->declBus(c+44,"opcode", false,-1, 6,0);
    tracep->declBus(c+45,"fun3", false,-1, 2,0);
    tracep->declBit(c+46,"fun7", false,-1);
    tracep->declBus(c+47,"unusedata", false,-1, 31,0);
    tracep->declBus(c+48,"rs2", false,-1, 4,0);
    tracep->declBus(c+49,"rs1", false,-1, 4,0);
    tracep->declBit(c+50,"auipc", false,-1);
    tracep->declBit(c+51,"jal", false,-1);
    tracep->declBit(c+1,"jalr", false,-1);
    tracep->declBit(c+52,"lui", false,-1);
    tracep->declBus(c+53,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+54,"src1", false,-1, 31,0);
    tracep->declBus(c+55,"opnumber1", false,-1, 31,0);
    tracep->declBus(c+3,"opnumber2", false,-1, 31,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->declBus(c+65,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+56,"addi", false,-1);
    tracep->declBit(c+57,"zero", false,-1);
    tracep->declBus(c+58,"wdata", false,-1, 31,0);
    tracep->declBus(c+6,"gpr10", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+65,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+55,"opnum1", false,-1, 31,0);
    tracep->declBus(c+3,"opnum2", false,-1, 31,0);
    tracep->declBus(c+43,"result", false,-1, 31,0);
    tracep->declBit(c+57,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+40,"inst", false,-1, 31,0);
    tracep->declBus(c+49,"rs1", false,-1, 4,0);
    tracep->declBus(c+48,"rs2", false,-1, 4,0);
    tracep->declBus(c+53,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+44,"opcode", false,-1, 6,0);
    tracep->declBus(c+45,"fun3", false,-1, 2,0);
    tracep->declBit(c+46,"fun7", false,-1);
    tracep->declBit(c+59,"U_type", false,-1);
    tracep->declBit(c+60,"I_type", false,-1);
    tracep->declBit(c+51,"J_type", false,-1);
    tracep->declBus(c+61,"U_imm", false,-1, 31,0);
    tracep->declBus(c+62,"I_imm", false,-1, 31,0);
    tracep->declBus(c+63,"J_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi1 ");
    tracep->declBus(c+40,"inst", false,-1, 31,0);
    tracep->declBus(c+6,"gpr10", false,-1, 31,0);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("maincontroller ");
    tracep->declBus(c+45,"fun3", false,-1, 2,0);
    tracep->declBus(c+66,"fun7", false,-1, 6,0);
    tracep->declBus(c+44,"opcode", false,-1, 6,0);
    tracep->declBus(c+65,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+56,"addi", false,-1);
    tracep->declBit(c+50,"auipc", false,-1);
    tracep->declBit(c+51,"jal", false,-1);
    tracep->declBit(c+1,"jalr", false,-1);
    tracep->declBit(c+52,"lui", false,-1);
    tracep->declBit(c+4,"sub", false,-1);
    tracep->declBit(c+5,"add", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcRegister ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+41,"rst", false,-1);
    tracep->declBit(c+51,"jal", false,-1);
    tracep->declBit(c+1,"jalr", false,-1);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+54,"src1", false,-1, 31,0);
    tracep->declBus(c+42,"pc_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register1 ");
    tracep->declBus(c+67,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+68,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBus(c+58,"wdata", false,-1, 31,0);
    tracep->declBus(c+53,"waddr", false,-1, 4,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->declBus(c+49,"raddr", false,-1, 4,0);
    tracep->declBus(c+54,"rdata", false,-1, 31,0);
    tracep->declBus(c+6,"GPR10", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+7+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_init_top(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060187_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060187_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060187_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_register(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060187_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060187_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060187_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_full_sub_0(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060187_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060187_top___024root*>(voidSelf);
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060187_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_full_sub_0(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyx_23060187_top__DOT__jalr));
    bufp->fullIData(oldp+2,(vlSelf->ysyx_23060187_top__DOT__imm),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060187_top__DOT__opnumber2),32);
    bufp->fullBit(oldp+4,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                           & (0x20U == (IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT__fun7)))));
    bufp->fullBit(oldp+5,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                           & (0U == (IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT__fun7)))));
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
                            [0xaU]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[0]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[1]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[2]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[3]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[4]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[5]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[6]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[7]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[8]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[9]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[10]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[11]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[12]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[13]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[14]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[15]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[16]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[17]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[18]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[19]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[20]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[21]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[22]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[23]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[24]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[25]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[26]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[27]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[28]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[29]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[30]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[31]),32);
    bufp->fullBit(oldp+39,(vlSelf->clk));
    bufp->fullIData(oldp+40,(vlSelf->inst),32);
    bufp->fullBit(oldp+41,(vlSelf->rst));
    bufp->fullIData(oldp+42,(vlSelf->pc),32);
    bufp->fullIData(oldp+43,(vlSelf->result),32);
    bufp->fullCData(oldp+44,(vlSelf->opcode),7);
    bufp->fullCData(oldp+45,(vlSelf->fun3),3);
    bufp->fullBit(oldp+46,(vlSelf->fun7));
    bufp->fullIData(oldp+47,(vlSelf->unusedata),32);
    bufp->fullCData(oldp+48,(vlSelf->rs2),5);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullBit(oldp+50,((0x17U == (IData)(vlSelf->opcode))));
    bufp->fullBit(oldp+51,((0x6fU == (IData)(vlSelf->opcode))));
    bufp->fullBit(oldp+52,((0x37U == (IData)(vlSelf->opcode))));
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_23060187_top__DOT__src1),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_23060187_top__DOT__opnumber1),32);
    bufp->fullBit(oldp+56,(((0x13U == (IData)(vlSelf->opcode)) 
                            & (0U == (IData)(vlSelf->fun3)))));
    bufp->fullBit(oldp+57,((0U == vlSelf->result)));
    bufp->fullIData(oldp+58,(((0x37U == (IData)(vlSelf->opcode))
                               ? vlSelf->ysyx_23060187_top__DOT__imm
                               : vlSelf->result)),32);
    bufp->fullBit(oldp+59,(((0x17U == (IData)(vlSelf->opcode)) 
                            | (0x37U == (IData)(vlSelf->opcode)))));
    bufp->fullBit(oldp+60,(((3U == (IData)(vlSelf->opcode)) 
                            | ((0x13U == (IData)(vlSelf->opcode)) 
                               | (0x67U == (IData)(vlSelf->opcode))))));
    bufp->fullIData(oldp+61,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+62,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+63,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
    bufp->fullBit(oldp+64,(1U));
    bufp->fullCData(oldp+65,(2U),4);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT__fun7),7);
    bufp->fullIData(oldp+67,(5U),32);
    bufp->fullIData(oldp+68,(0x20U),32);
}

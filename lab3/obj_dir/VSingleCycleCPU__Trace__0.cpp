// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,((vlSelf->SingleCycleCPU__DOT__IDEX_out_imm 
                                << 1U)),32);
        bufp->chgIData(oldp+1,((vlSelf->SingleCycleCPU__DOT__IDEX_out_pc 
                                + (vlSelf->SingleCycleCPU__DOT__IDEX_out_imm 
                                   << 1U))),32);
        bufp->chgIData(oldp+2,(vlSelf->SingleCycleCPU__DOT__w23),32);
        bufp->chgCData(oldp+3,(vlSelf->SingleCycleCPU__DOT__w22),4);
        bufp->chgIData(oldp+4,(vlSelf->SingleCycleCPU__DOT__IFID_out_pc),32);
        bufp->chgIData(oldp+5,(vlSelf->SingleCycleCPU__DOT__IDEX_out_pc),32);
        bufp->chgIData(oldp+6,(vlSelf->SingleCycleCPU__DOT__IDEX_out_rs1),32);
        bufp->chgIData(oldp+7,(vlSelf->SingleCycleCPU__DOT__IDEX_out_rs2),32);
        bufp->chgIData(oldp+8,(vlSelf->SingleCycleCPU__DOT__IDEX_out_imm),32);
        bufp->chgCData(oldp+9,(vlSelf->SingleCycleCPU__DOT__IDEX_out_funct3),3);
        bufp->chgCData(oldp+10,(vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUOp),2);
        bufp->chgBit(oldp+11,(vlSelf->SingleCycleCPU__DOT__IDEX_out_memWrite));
        bufp->chgBit(oldp+12,(vlSelf->SingleCycleCPU__DOT__IDEX_out_branch));
        bufp->chgBit(oldp+13,(vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUSrc));
        bufp->chgBit(oldp+14,(vlSelf->SingleCycleCPU__DOT__IDEX_out_funct7));
        bufp->chgIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_pc),32);
        bufp->chgIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_rs2),32);
        bufp->chgBit(oldp+17,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_memWrite));
        bufp->chgBit(oldp+18,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_branch));
        bufp->chgBit(oldp+19,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_zero));
        bufp->chgCData(oldp+20,((((IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUOp) 
                                  << 4U) | (((IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_funct7) 
                                             << 3U) 
                                            | (IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_funct3)))),6);
        bufp->chgBit(oldp+21,(((IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_branch) 
                               & (IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_zero))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+22,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+23,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+26,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+46,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__w1),32);
        bufp->chgIData(oldp+55,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__w1)),32);
        bufp->chgIData(oldp+56,(((0x80U <= vlSelf->SingleCycleCPU__DOT__w1)
                                  ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->SingleCycleCPU__DOT__w1)] 
                                           << 0x18U) 
                                          | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->SingleCycleCPU__DOT__w1))] 
                                              << 0x10U) 
                                             | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->SingleCycleCPU__DOT__w1))] 
                                                 << 8U) 
                                                | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->SingleCycleCPU__DOT__w1))]))))),32);
        bufp->chgIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__w13),32);
        bufp->chgIData(oldp+58,(((IData)(vlSelf->SingleCycleCPU__DOT__MEMWB_out_memtoReg)
                                  ? vlSelf->SingleCycleCPU__DOT__MEMWB_out_memData
                                  : vlSelf->SingleCycleCPU__DOT__MEMWB_out_aluResult)),32);
        bufp->chgIData(oldp+59,(vlSelf->SingleCycleCPU__DOT__IFID_out_inst),32);
        bufp->chgBit(oldp+60,(vlSelf->SingleCycleCPU__DOT__IDEX_out_regWrite));
        bufp->chgBit(oldp+61,(vlSelf->SingleCycleCPU__DOT__IDEX_out_memtoReg));
        bufp->chgBit(oldp+62,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_memtoReg));
        bufp->chgBit(oldp+63,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_regWrite));
        bufp->chgIData(oldp+64,(vlSelf->SingleCycleCPU__DOT__MEMWB_out_memData),32);
        bufp->chgIData(oldp+65,(vlSelf->SingleCycleCPU__DOT__MEMWB_out_aluResult),32);
        bufp->chgBit(oldp+66,(vlSelf->SingleCycleCPU__DOT__MEMWB_out_memtoReg));
        bufp->chgBit(oldp+67,(vlSelf->SingleCycleCPU__DOT__MEMWB_out_regWrite));
        bufp->chgCData(oldp+68,(vlSelf->SingleCycleCPU__DOT__IDEX_out_rd),5);
        bufp->chgCData(oldp+69,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_rd),5);
        bufp->chgCData(oldp+70,(vlSelf->SingleCycleCPU__DOT__MEMWB_out_rd),5);
        bufp->chgCData(oldp+71,((0x7fU & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)),7);
        bufp->chgCData(oldp+72,((7U & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+73,((1U & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+74,((0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+75,((0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+76,((0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                          >> 0x14U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+77,(vlSelf->SingleCycleCPU__DOT__w19),32);
        bufp->chgCData(oldp+78,(vlSelf->SingleCycleCPU__DOT__w7),2);
        bufp->chgBit(oldp+79,(vlSelf->SingleCycleCPU__DOT__w4));
        bufp->chgBit(oldp+80,(vlSelf->SingleCycleCPU__DOT__w5));
        bufp->chgBit(oldp+81,(vlSelf->SingleCycleCPU__DOT__w6));
        bufp->chgBit(oldp+82,(vlSelf->SingleCycleCPU__DOT__w8));
        bufp->chgBit(oldp+83,(vlSelf->SingleCycleCPU__DOT__w9));
        bufp->chgBit(oldp+84,(vlSelf->SingleCycleCPU__DOT__w10));
        bufp->chgBit(oldp+85,((0U == vlSelf->SingleCycleCPU__DOT__w19)));
        bufp->chgBit(oldp+86,(vlSelf->SingleCycleCPU__DOT__IDEX_out_memRead));
        bufp->chgIData(oldp+87,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult),32);
        bufp->chgBit(oldp+88,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_memRead));
    }
    bufp->chgBit(oldp+89,(vlSelf->clk));
    bufp->chgBit(oldp+90,(vlSelf->start));
    bufp->chgIData(oldp+91,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+92,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+93,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+94,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+95,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+96,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+97,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+98,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+99,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+100,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+101,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+102,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+103,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+104,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+105,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+123,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+124,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+125,((((IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_branch) 
                               & (IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_zero))
                               ? vlSelf->SingleCycleCPU__DOT__EXMEM_out_pc
                               : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__w1))),32);
    bufp->chgIData(oldp+126,(vlSelf->SingleCycleCPU__DOT__w20),32);
}

void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___eval_act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*3:0*/, 128> VPipelineCPU__ConstPool__TABLE_h748f80b3_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__PipelineCPU__DOT__w4;
    __Vdly__PipelineCPU__DOT__w4 = 0;
    IData/*31:0*/ __Vdly__PipelineCPU__DOT__IFID_next_pc;
    __Vdly__PipelineCPU__DOT__IFID_next_pc = 0;
    // Body
    __Vdly__PipelineCPU__DOT__IFID_next_pc = vlSelf->PipelineCPU__DOT__IFID_next_pc;
    __Vdly__PipelineCPU__DOT__w4 = vlSelf->PipelineCPU__DOT__w4;
    vlSelf->__Vdly__PipelineCPU__DOT__IFID_inst = vlSelf->PipelineCPU__DOT__IFID_inst;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__hazard_o) {
            __Vdly__PipelineCPU__DOT__IFID_next_pc 
                = vlSelf->PipelineCPU__DOT__IFID_next_pc;
            __Vdly__PipelineCPU__DOT__w4 = vlSelf->PipelineCPU__DOT__w4;
            vlSelf->PipelineCPU__DOT__IFID_pc = vlSelf->PipelineCPU__DOT__IFID_pc;
            vlSelf->__Vdly__PipelineCPU__DOT__IFID_inst 
                = vlSelf->PipelineCPU__DOT__IFID_inst;
        } else {
            if (vlSelf->PipelineCPU__DOT__flush) {
                __Vdly__PipelineCPU__DOT__IFID_next_pc = 0U;
                vlSelf->PipelineCPU__DOT__IFID_pc = 0U;
                vlSelf->__Vdly__PipelineCPU__DOT__IFID_inst = 0U;
            } else {
                __Vdly__PipelineCPU__DOT__IFID_next_pc 
                    = ((IData)(4U) + vlSelf->PipelineCPU__DOT__w4);
                vlSelf->PipelineCPU__DOT__IFID_pc = vlSelf->PipelineCPU__DOT__w4;
                vlSelf->__Vdly__PipelineCPU__DOT__IFID_inst 
                    = ((0x80U <= vlSelf->PipelineCPU__DOT__w4)
                        ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                 [(0x7fU & vlSelf->PipelineCPU__DOT__w4)] 
                                 << 0x18U) | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                               [(0x7fU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->PipelineCPU__DOT__w4))] 
                                               << 0x10U) 
                                              | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->PipelineCPU__DOT__w4))] 
                                                  << 8U) 
                                                 | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->PipelineCPU__DOT__w4))]))));
            }
            __Vdly__PipelineCPU__DOT__w4 = vlSelf->PipelineCPU__DOT__w3;
        }
        if (vlSelf->PipelineCPU__DOT__EXMEM_memWrite) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->PipelineCPU__DOT__EXMEM_rs2 
                   >> 0x18U);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->PipelineCPU__DOT__EXMEM_aluResult));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->PipelineCPU__DOT__EXMEM_rs2 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->PipelineCPU__DOT__EXMEM_aluResult));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->PipelineCPU__DOT__EXMEM_rs2 
                            >> 8U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->PipelineCPU__DOT__EXMEM_aluResult));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->PipelineCPU__DOT__EXMEM_rs2);
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->PipelineCPU__DOT__EXMEM_aluResult);
        }
        vlSelf->PipelineCPU__DOT__IDEX_ALUOp = vlSelf->PipelineCPU__DOT__w28;
        vlSelf->PipelineCPU__DOT__IDEX_imm = vlSelf->PipelineCPU__DOT__w7;
        vlSelf->PipelineCPU__DOT__IDEX_rs1 = vlSelf->PipelineCPU__DOT__w5;
        vlSelf->PipelineCPU__DOT__IDEX_rs2 = vlSelf->PipelineCPU__DOT__w6;
        vlSelf->PipelineCPU__DOT__IDEX_funct3 = (7U 
                                                 & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                    >> 0xcU));
        vlSelf->PipelineCPU__DOT__IDEX_rs1_num = (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                     >> 0xfU));
        vlSelf->PipelineCPU__DOT__IDEX_rs2_num = (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                     >> 0x14U));
        vlSelf->PipelineCPU__DOT__MEMWB_aluResult = vlSelf->PipelineCPU__DOT__EXMEM_aluResult;
        vlSelf->PipelineCPU__DOT__MEMWB_memtoReg = vlSelf->PipelineCPU__DOT__EXMEM_memtoReg;
        vlSelf->PipelineCPU__DOT__MEMWB_next_pc = vlSelf->PipelineCPU__DOT__EXMEM_next_pc;
        vlSelf->PipelineCPU__DOT__MEMWB_memData = vlSelf->PipelineCPU__DOT__w14;
        vlSelf->PipelineCPU__DOT__EXMEM_rs2 = vlSelf->PipelineCPU__DOT__w9;
        vlSelf->PipelineCPU__DOT__EXMEM_memtoReg = vlSelf->PipelineCPU__DOT__IDEX_memtoReg;
        vlSelf->PipelineCPU__DOT__EXMEM_next_pc = vlSelf->PipelineCPU__DOT__IDEX_next_pc;
        vlSelf->PipelineCPU__DOT__IDEX_memtoReg = vlSelf->PipelineCPU__DOT__w25;
        vlSelf->PipelineCPU__DOT__IDEX_next_pc = vlSelf->PipelineCPU__DOT__IFID_next_pc;
        vlSelf->PipelineCPU__DOT__IDEX_ALUSrc = (1U 
                                                 & (IData)(vlSelf->PipelineCPU__DOT__w29));
        vlSelf->PipelineCPU__DOT__IDEX_funct7 = (1U 
                                                 & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                    >> 0x1eU));
        vlSelf->PipelineCPU__DOT__w4 = __Vdly__PipelineCPU__DOT__w4;
        vlSelf->PipelineCPU__DOT__EXMEM_memWrite = 
            (1U & (IData)(vlSelf->PipelineCPU__DOT__IDEX_memWrite));
    } else {
        __Vdly__PipelineCPU__DOT__IFID_next_pc = 0U;
        __Vdly__PipelineCPU__DOT__w4 = 0U;
        vlSelf->PipelineCPU__DOT__IFID_pc = 0U;
        vlSelf->__Vdly__PipelineCPU__DOT__IFID_inst = 0U;
        vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        vlSelf->PipelineCPU__DOT__IDEX_ALUOp = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_imm = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_rs1 = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_rs2 = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_funct3 = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_rs1_num = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_rs2_num = 0U;
        vlSelf->PipelineCPU__DOT__MEMWB_aluResult = 0U;
        vlSelf->PipelineCPU__DOT__MEMWB_memtoReg = 0U;
        vlSelf->PipelineCPU__DOT__MEMWB_next_pc = 0U;
        vlSelf->PipelineCPU__DOT__MEMWB_memData = 0U;
        vlSelf->PipelineCPU__DOT__EXMEM_rs2 = 0U;
        vlSelf->PipelineCPU__DOT__EXMEM_memtoReg = 0U;
        vlSelf->PipelineCPU__DOT__EXMEM_next_pc = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_memtoReg = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_next_pc = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_ALUSrc = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_funct7 = 0U;
        vlSelf->PipelineCPU__DOT__w4 = __Vdly__PipelineCPU__DOT__w4;
        vlSelf->PipelineCPU__DOT__EXMEM_memWrite = 0U;
    }
    __Vtableidx2 = (((IData)(vlSelf->PipelineCPU__DOT__IDEX_ALUOp) 
                     << 4U) | (((IData)(vlSelf->PipelineCPU__DOT__IDEX_funct7) 
                                << 3U) | (IData)(vlSelf->PipelineCPU__DOT__IDEX_funct3)));
    vlSelf->PipelineCPU__DOT__ALUCtl = VPipelineCPU__ConstPool__TABLE_h748f80b3_0
        [__Vtableidx2];
    vlSelf->PipelineCPU__DOT__IDEX_memWrite = ((IData)(vlSelf->start) 
                                               & (IData)(vlSelf->PipelineCPU__DOT__w27));
    vlSelf->PipelineCPU__DOT__IFID_next_pc = __Vdly__PipelineCPU__DOT__IFID_next_pc;
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__MEMWB_regWrite) {
            __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->PipelineCPU__DOT__MEMWB_rd))
                    ? 0U : vlSelf->PipelineCPU__DOT__w15);
            __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->PipelineCPU__DOT__MEMWB_rd;
        }
    } else {
        __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->PipelineCPU__DOT__EXMEM_memRead) {
        vlSelf->PipelineCPU__DOT__w14 = ((0xffffffU 
                                          & vlSelf->PipelineCPU__DOT__w14) 
                                         | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                            [(0x7fU 
                                              & ((IData)(3U) 
                                                 + vlSelf->PipelineCPU__DOT__EXMEM_aluResult))] 
                                            << 0x18U));
        vlSelf->PipelineCPU__DOT__w14 = ((0xff00ffffU 
                                          & vlSelf->PipelineCPU__DOT__w14) 
                                         | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                            [(0x7fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->PipelineCPU__DOT__EXMEM_aluResult))] 
                                            << 0x10U));
        vlSelf->PipelineCPU__DOT__w14 = ((0xffff00ffU 
                                          & vlSelf->PipelineCPU__DOT__w14) 
                                         | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                            [(0x7fU 
                                              & ((IData)(1U) 
                                                 + vlSelf->PipelineCPU__DOT__EXMEM_aluResult))] 
                                            << 8U));
        vlSelf->PipelineCPU__DOT__w14 = ((0xffffff00U 
                                          & vlSelf->PipelineCPU__DOT__w14) 
                                         | vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                         [(0x7fU & vlSelf->PipelineCPU__DOT__EXMEM_aluResult)]);
    }
}

extern const VlUnpacked<CData/*5:0*/, 128> VPipelineCPU__ConstPool__TABLE_h6befec82_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*1:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3896431d_0;
extern const VlUnpacked<CData/*2:0*/, 128> VPipelineCPU__ConstPool__TABLE_h26b4c800_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h166e3cc7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3729482a_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->PipelineCPU__DOT__w15 = ((0U == (IData)(vlSelf->PipelineCPU__DOT__MEMWB_memtoReg))
                                      ? vlSelf->PipelineCPU__DOT__MEMWB_aluResult
                                      : ((1U == (IData)(vlSelf->PipelineCPU__DOT__MEMWB_memtoReg))
                                          ? vlSelf->PipelineCPU__DOT__MEMWB_memData
                                          : vlSelf->PipelineCPU__DOT__MEMWB_next_pc));
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->start) {
        vlSelf->PipelineCPU__DOT__MEMWB_regWrite = 
            (1U & (IData)(vlSelf->PipelineCPU__DOT__EXMEM_regWrite));
        vlSelf->PipelineCPU__DOT__MEMWB_rd = vlSelf->PipelineCPU__DOT__EXMEM_rd;
        vlSelf->PipelineCPU__DOT__EXMEM_aluResult = vlSelf->PipelineCPU__DOT__w13;
        vlSelf->PipelineCPU__DOT__EXMEM_rd = vlSelf->PipelineCPU__DOT__IDEX_rd;
        vlSelf->PipelineCPU__DOT__IDEX_rd = (0x1fU 
                                             & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                >> 7U));
        vlSelf->PipelineCPU__DOT__EXMEM_memRead = (1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__IDEX_memRead));
        vlSelf->PipelineCPU__DOT__EXMEM_regWrite = 
            (1U & (IData)(vlSelf->PipelineCPU__DOT__IDEX_regWrite));
        vlSelf->PipelineCPU__DOT__IDEX_memRead = (1U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__w26));
        vlSelf->PipelineCPU__DOT__IDEX_regWrite = (1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__w24));
    } else {
        vlSelf->PipelineCPU__DOT__MEMWB_regWrite = 0U;
        vlSelf->PipelineCPU__DOT__MEMWB_rd = 0U;
        vlSelf->PipelineCPU__DOT__EXMEM_aluResult = 0U;
        vlSelf->PipelineCPU__DOT__EXMEM_rd = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_rd = 0U;
        vlSelf->PipelineCPU__DOT__EXMEM_memRead = 0U;
        vlSelf->PipelineCPU__DOT__EXMEM_regWrite = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_memRead = 0U;
        vlSelf->PipelineCPU__DOT__IDEX_regWrite = 0U;
    }
    vlSelf->PipelineCPU__DOT__w16 = ((((IData)(vlSelf->PipelineCPU__DOT__EXMEM_regWrite) 
                                       & (0U != (IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd))) 
                                      & ((IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd) 
                                         == (IData)(vlSelf->PipelineCPU__DOT__IDEX_rs1_num)))
                                      ? 2U : ((((IData)(vlSelf->PipelineCPU__DOT__MEMWB_regWrite) 
                                                & (0U 
                                                   != (IData)(vlSelf->PipelineCPU__DOT__MEMWB_rd))) 
                                               & ((IData)(vlSelf->PipelineCPU__DOT__MEMWB_rd) 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__IDEX_rs1_num)))
                                               ? 1U
                                               : 0U));
    vlSelf->PipelineCPU__DOT__w17 = ((((IData)(vlSelf->PipelineCPU__DOT__EXMEM_regWrite) 
                                       & (0U != (IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd))) 
                                      & ((IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd) 
                                         == (IData)(vlSelf->PipelineCPU__DOT__IDEX_rs2_num)))
                                      ? 2U : ((((IData)(vlSelf->PipelineCPU__DOT__MEMWB_regWrite) 
                                                & (0U 
                                                   != (IData)(vlSelf->PipelineCPU__DOT__MEMWB_rd))) 
                                               & ((IData)(vlSelf->PipelineCPU__DOT__MEMWB_rd) 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__IDEX_rs2_num)))
                                               ? 1U
                                               : 0U));
    vlSelf->PipelineCPU__DOT__w11 = ((0U == (IData)(vlSelf->PipelineCPU__DOT__w16))
                                      ? vlSelf->PipelineCPU__DOT__IDEX_rs1
                                      : ((1U == (IData)(vlSelf->PipelineCPU__DOT__w16))
                                          ? vlSelf->PipelineCPU__DOT__w15
                                          : vlSelf->PipelineCPU__DOT__EXMEM_aluResult));
    vlSelf->PipelineCPU__DOT__w9 = ((0U == (IData)(vlSelf->PipelineCPU__DOT__w17))
                                     ? vlSelf->PipelineCPU__DOT__IDEX_rs2
                                     : ((1U == (IData)(vlSelf->PipelineCPU__DOT__w17))
                                         ? vlSelf->PipelineCPU__DOT__w15
                                         : vlSelf->PipelineCPU__DOT__EXMEM_aluResult));
    vlSelf->PipelineCPU__DOT__IFID_inst = vlSelf->__Vdly__PipelineCPU__DOT__IFID_inst;
    vlSelf->PipelineCPU__DOT__w12 = ((IData)(vlSelf->PipelineCPU__DOT__IDEX_ALUSrc)
                                      ? vlSelf->PipelineCPU__DOT__IDEX_imm
                                      : vlSelf->PipelineCPU__DOT__w9);
    vlSelf->PipelineCPU__DOT__w7 = ((0x40U & vlSelf->PipelineCPU__DOT__IFID_inst)
                                     ? ((0x20U & vlSelf->PipelineCPU__DOT__IFID_inst)
                                         ? ((0x10U 
                                             & vlSelf->PipelineCPU__DOT__IFID_inst)
                                             ? 0U : 
                                            ((8U & vlSelf->PipelineCPU__DOT__IFID_inst)
                                              ? ((4U 
                                                  & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                 >> 0x1fU))) 
                                                     << 0x14U) 
                                                    | ((0xff000U 
                                                        & vlSelf->PipelineCPU__DOT__IFID_inst) 
                                                       | ((0x800U 
                                                           & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                >> 0x14U)))))
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)
                                              : ((4U 
                                                  & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xbU) 
                                                    | (0x7ffU 
                                                       & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                          >> 0x14U)))
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                >> 7U)))))
                                                    : 0U)
                                                   : 0U))))
                                         : 0U) : ((0x20U 
                                                   & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xbU) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                 >> 7U))))
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xbU) 
                                                        | (0x7ffU 
                                                           & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                              >> 0x14U)))
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xbU) 
                                                        | (0x7ffU 
                                                           & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                              >> 0x14U)))
                                                        : 0U)
                                                       : 0U))))));
    __Vtableidx1 = (0x7fU & vlSelf->PipelineCPU__DOT__IFID_inst);
    if ((1U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w20 = VPipelineCPU__ConstPool__TABLE_he16e6d56_0
            [__Vtableidx1];
    }
    if ((2U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w19 = VPipelineCPU__ConstPool__TABLE_h3896431d_0
            [__Vtableidx1];
    }
    if ((4U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w22 = VPipelineCPU__ConstPool__TABLE_h26b4c800_0
            [__Vtableidx1];
    }
    if ((8U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w21 = VPipelineCPU__ConstPool__TABLE_hbdb291c7_0
            [__Vtableidx1];
    }
    if ((0x10U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w23 = VPipelineCPU__ConstPool__TABLE_h166e3cc7_0
            [__Vtableidx1];
    }
    if ((0x20U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w18 = VPipelineCPU__ConstPool__TABLE_h3729482a_0
            [__Vtableidx1];
    }
    vlSelf->PipelineCPU__DOT__hazard_o = ((((IData)(vlSelf->PipelineCPU__DOT__IDEX_memRead) 
                                            | (IData)(vlSelf->PipelineCPU__DOT__IDEX_regWrite)) 
                                           & (((IData)(vlSelf->PipelineCPU__DOT__IDEX_rd) 
                                               == (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                      >> 0xfU))) 
                                              | ((IData)(vlSelf->PipelineCPU__DOT__IDEX_rd) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                     >> 0x14U))))) 
                                          | ((IData)(vlSelf->PipelineCPU__DOT__EXMEM_regWrite) 
                                             & (((IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                     >> 0xfU))) 
                                                | ((IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                       >> 0x14U))))));
    if ((1U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__w13 = (vlSelf->PipelineCPU__DOT__w11 
                                         + vlSelf->PipelineCPU__DOT__w12);
    } else if ((4U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__w13 = (vlSelf->PipelineCPU__DOT__w11 
                                         - vlSelf->PipelineCPU__DOT__w12);
    } else if ((6U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__w13 = (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__w11, vlSelf->PipelineCPU__DOT__w12)
                                          ? 1U : 0U);
    } else if ((7U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__w13 = (vlSelf->PipelineCPU__DOT__w11 
                                         & vlSelf->PipelineCPU__DOT__w12);
    } else if ((8U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__w13 = (vlSelf->PipelineCPU__DOT__w11 
                                         | vlSelf->PipelineCPU__DOT__w12);
    }
    if (vlSelf->PipelineCPU__DOT__hazard_o) {
        vlSelf->PipelineCPU__DOT__w28 = 0U;
        vlSelf->PipelineCPU__DOT__w25 = 0U;
    } else {
        vlSelf->PipelineCPU__DOT__w28 = vlSelf->PipelineCPU__DOT__w22;
        vlSelf->PipelineCPU__DOT__w25 = vlSelf->PipelineCPU__DOT__w19;
    }
    vlSelf->PipelineCPU__DOT__w26 = ((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                     & (IData)(vlSelf->PipelineCPU__DOT__w20));
    vlSelf->PipelineCPU__DOT__w27 = ((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                     & (IData)(vlSelf->PipelineCPU__DOT__w21));
    vlSelf->PipelineCPU__DOT__w29 = ((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                     & (IData)(vlSelf->PipelineCPU__DOT__w23));
    vlSelf->PipelineCPU__DOT__w24 = ((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                     & (IData)(vlSelf->PipelineCPU__DOT__w18));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->PipelineCPU__DOT__w6 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__IFID_inst 
                   >> 0x14U))];
    vlSelf->PipelineCPU__DOT__w5 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__IFID_inst 
                   >> 0xfU))];
    vlSelf->PipelineCPU__DOT__flush = ((0x6fU == (0x7fU 
                                                  & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                       | ((0x67U == 
                                           (0x7fU & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                          | ((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                             & ((IData)(
                                                        ((0U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                                         & (vlSelf->PipelineCPU__DOT__w5 
                                                            == vlSelf->PipelineCPU__DOT__w6))) 
                                                | ((IData)(
                                                           ((0x1000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                                            & (vlSelf->PipelineCPU__DOT__w5 
                                                               != vlSelf->PipelineCPU__DOT__w6))) 
                                                   | ((IData)(
                                                              ((0x4000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                                               & (vlSelf->PipelineCPU__DOT__w5 
                                                                  < vlSelf->PipelineCPU__DOT__w6))) 
                                                      | (IData)(
                                                                ((0x5000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                                                 & (vlSelf->PipelineCPU__DOT__w5 
                                                                    >= vlSelf->PipelineCPU__DOT__w6)))))))));
    vlSelf->PipelineCPU__DOT__w3 = (((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                     & (IData)(vlSelf->PipelineCPU__DOT__flush))
                                     ? (((0x67U == 
                                          (0x7fU & vlSelf->PipelineCPU__DOT__IFID_inst))
                                          ? vlSelf->PipelineCPU__DOT__w5
                                          : vlSelf->PipelineCPU__DOT__IFID_pc) 
                                        + vlSelf->PipelineCPU__DOT__w7)
                                     : ((IData)(4U) 
                                        + vlSelf->PipelineCPU__DOT__w4));
}

void VPipelineCPU___024root___eval_nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VPipelineCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPipelineCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPipelineCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("PipelineCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPipelineCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPipelineCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG

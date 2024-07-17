// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleCPU.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLECPU___024ROOT_H_
#define VERILATED_VSINGLECYCLECPU___024ROOT_H_  // guard

#include "verilated.h"

class VSingleCycleCPU__Syms;

class VSingleCycleCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ SingleCycleCPU__DOT__EXMEM_out_memRead;
        CData/*3:0*/ SingleCycleCPU__DOT__w22;
        CData/*1:0*/ SingleCycleCPU__DOT__w7;
        CData/*0:0*/ SingleCycleCPU__DOT__w4;
        CData/*0:0*/ SingleCycleCPU__DOT__w5;
        CData/*0:0*/ SingleCycleCPU__DOT__w6;
        CData/*0:0*/ SingleCycleCPU__DOT__w8;
        CData/*0:0*/ SingleCycleCPU__DOT__w9;
        CData/*0:0*/ SingleCycleCPU__DOT__w10;
        CData/*2:0*/ SingleCycleCPU__DOT__IDEX_out_funct3;
        CData/*1:0*/ SingleCycleCPU__DOT__IDEX_out_ALUOp;
        CData/*0:0*/ SingleCycleCPU__DOT__IDEX_out_regWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__IDEX_out_memRead;
        CData/*0:0*/ SingleCycleCPU__DOT__IDEX_out_memtoReg;
        CData/*0:0*/ SingleCycleCPU__DOT__IDEX_out_memWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__IDEX_out_branch;
        CData/*0:0*/ SingleCycleCPU__DOT__IDEX_out_ALUSrc;
        CData/*0:0*/ SingleCycleCPU__DOT__IDEX_out_funct7;
        CData/*0:0*/ SingleCycleCPU__DOT__EXMEM_out_memtoReg;
        CData/*0:0*/ SingleCycleCPU__DOT__EXMEM_out_memWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__EXMEM_out_regWrite;
        CData/*0:0*/ SingleCycleCPU__DOT__EXMEM_out_branch;
        CData/*0:0*/ SingleCycleCPU__DOT__EXMEM_out_zero;
        CData/*0:0*/ SingleCycleCPU__DOT__MEMWB_out_memtoReg;
        CData/*0:0*/ SingleCycleCPU__DOT__MEMWB_out_regWrite;
        CData/*4:0*/ SingleCycleCPU__DOT__IDEX_out_rd;
        CData/*4:0*/ SingleCycleCPU__DOT__EXMEM_out_rd;
        CData/*4:0*/ SingleCycleCPU__DOT__MEMWB_out_rd;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__EXMEM_out_memRead;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ SingleCycleCPU__DOT__w1;
        IData/*31:0*/ SingleCycleCPU__DOT__w13;
        IData/*31:0*/ SingleCycleCPU__DOT__w18;
        IData/*31:0*/ SingleCycleCPU__DOT__w19;
        IData/*31:0*/ SingleCycleCPU__DOT__w20;
        IData/*31:0*/ SingleCycleCPU__DOT__w23;
        IData/*31:0*/ SingleCycleCPU__DOT__IFID_out_pc;
        IData/*31:0*/ SingleCycleCPU__DOT__IFID_out_inst;
        IData/*31:0*/ SingleCycleCPU__DOT__IDEX_out_pc;
        IData/*31:0*/ SingleCycleCPU__DOT__IDEX_out_rs1;
        IData/*31:0*/ SingleCycleCPU__DOT__IDEX_out_rs2;
        IData/*31:0*/ SingleCycleCPU__DOT__IDEX_out_imm;
        IData/*31:0*/ SingleCycleCPU__DOT__EXMEM_out_aluResult;
        IData/*31:0*/ SingleCycleCPU__DOT__EXMEM_out_pc;
        IData/*31:0*/ SingleCycleCPU__DOT__EXMEM_out_rs2;
        IData/*31:0*/ SingleCycleCPU__DOT__MEMWB_out_memData;
        IData/*31:0*/ SingleCycleCPU__DOT__MEMWB_out_aluResult;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__EXMEM_out_aluResult;
    };
    struct {
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> SingleCycleCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSingleCycleCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCycleCPU___024root(VSingleCycleCPU__Syms* symsp, const char* v__name);
    ~VSingleCycleCPU___024root();
    VL_UNCOPYABLE(VSingleCycleCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

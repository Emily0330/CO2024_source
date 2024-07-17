// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"

class VPipelineCPU__Syms;

class VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ PipelineCPU__DOT__EXMEM_memRead;
        CData/*0:0*/ PipelineCPU__DOT__hazard_o;
        CData/*0:0*/ PipelineCPU__DOT__flush;
        CData/*0:0*/ PipelineCPU__DOT__w18;
        CData/*0:0*/ PipelineCPU__DOT__w20;
        CData/*0:0*/ PipelineCPU__DOT__w21;
        CData/*0:0*/ PipelineCPU__DOT__w23;
        CData/*0:0*/ PipelineCPU__DOT__w24;
        CData/*0:0*/ PipelineCPU__DOT__w26;
        CData/*0:0*/ PipelineCPU__DOT__w27;
        CData/*0:0*/ PipelineCPU__DOT__w29;
        CData/*1:0*/ PipelineCPU__DOT__w16;
        CData/*1:0*/ PipelineCPU__DOT__w17;
        CData/*1:0*/ PipelineCPU__DOT__w19;
        CData/*1:0*/ PipelineCPU__DOT__w25;
        CData/*2:0*/ PipelineCPU__DOT__w22;
        CData/*2:0*/ PipelineCPU__DOT__w28;
        CData/*0:0*/ PipelineCPU__DOT__IDEX_regWrite;
        CData/*0:0*/ PipelineCPU__DOT__IDEX_memRead;
        CData/*0:0*/ PipelineCPU__DOT__IDEX_memWrite;
        CData/*0:0*/ PipelineCPU__DOT__IDEX_ALUSrc;
        CData/*2:0*/ PipelineCPU__DOT__IDEX_ALUOp;
        CData/*2:0*/ PipelineCPU__DOT__IDEX_funct3;
        CData/*0:0*/ PipelineCPU__DOT__IDEX_funct7;
        CData/*3:0*/ PipelineCPU__DOT__ALUCtl;
        CData/*0:0*/ PipelineCPU__DOT__EXMEM_memWrite;
        CData/*0:0*/ PipelineCPU__DOT__EXMEM_regWrite;
        CData/*0:0*/ PipelineCPU__DOT__MEMWB_regWrite;
        CData/*4:0*/ PipelineCPU__DOT__IDEX_rd;
        CData/*4:0*/ PipelineCPU__DOT__EXMEM_rd;
        CData/*4:0*/ PipelineCPU__DOT__MEMWB_rd;
        CData/*4:0*/ PipelineCPU__DOT__IDEX_rs1_num;
        CData/*4:0*/ PipelineCPU__DOT__IDEX_rs2_num;
        CData/*1:0*/ PipelineCPU__DOT__IDEX_memtoReg;
        CData/*1:0*/ PipelineCPU__DOT__EXMEM_memtoReg;
        CData/*1:0*/ PipelineCPU__DOT__MEMWB_memtoReg;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__EXMEM_memRead;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ PipelineCPU__DOT__w3;
        IData/*31:0*/ PipelineCPU__DOT__w4;
        IData/*31:0*/ PipelineCPU__DOT__w5;
        IData/*31:0*/ PipelineCPU__DOT__w6;
        IData/*31:0*/ PipelineCPU__DOT__w7;
        IData/*31:0*/ PipelineCPU__DOT__w9;
        IData/*31:0*/ PipelineCPU__DOT__w11;
        IData/*31:0*/ PipelineCPU__DOT__w12;
        IData/*31:0*/ PipelineCPU__DOT__w13;
        IData/*31:0*/ PipelineCPU__DOT__w14;
        IData/*31:0*/ PipelineCPU__DOT__w15;
    };
    struct {
        IData/*31:0*/ PipelineCPU__DOT__IFID_pc;
        IData/*31:0*/ PipelineCPU__DOT__IFID_inst;
        IData/*31:0*/ PipelineCPU__DOT__IFID_next_pc;
        IData/*31:0*/ PipelineCPU__DOT__IDEX_next_pc;
        IData/*31:0*/ PipelineCPU__DOT__IDEX_rs1;
        IData/*31:0*/ PipelineCPU__DOT__IDEX_rs2;
        IData/*31:0*/ PipelineCPU__DOT__IDEX_imm;
        IData/*31:0*/ PipelineCPU__DOT__EXMEM_aluResult;
        IData/*31:0*/ PipelineCPU__DOT__EXMEM_rs2;
        IData/*31:0*/ PipelineCPU__DOT__EXMEM_next_pc;
        IData/*31:0*/ PipelineCPU__DOT__MEMWB_memData;
        IData/*31:0*/ PipelineCPU__DOT__MEMWB_aluResult;
        IData/*31:0*/ PipelineCPU__DOT__MEMWB_next_pc;
        IData/*31:0*/ __Vdly__PipelineCPU__DOT__IFID_inst;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__EXMEM_aluResult;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

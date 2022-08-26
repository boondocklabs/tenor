// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__5(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__5\n"); );
    // Body
    if ((((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
          >> 2U) & (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_1))) {
        vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol2__v0 
            = (0xffU & (vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
                        >> 0x10U));
        vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0 = 1U;
        vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol2__v0 
            = vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
    if ((((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
          >> 1U) & (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_1))) {
        vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol1__v0 
            = (0xffU & (vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
                        >> 8U));
        vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0 = 1U;
        vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol1__v0 
            = vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_1))) {
        vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol0__v0 
            = (0xffU & vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data);
        vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0 = 1U;
        vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol0__v0 
            = vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__CsrPlugin_mcycle = 0ULL;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correctionReg = 0U;
        vlSelf->__Vdly__CsrPlugin_minstret = 0ULL;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
        vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
    } else {
        vlSelf->__PVT__CsrPlugin_mcycle = (1ULL + vlSelf->__PVT__CsrPlugin_mcycle);
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction) {
            vlSelf->__PVT__IBusCachedPlugin_fetchPc_correctionReg = 1U;
        }
        if (vlSelf->__PVT__writeBack_arbitration_isFiring) {
            vlSelf->__Vdly__CsrPlugin_minstret = (1ULL 
                                                  + vlSelf->__PVT__CsrPlugin_minstret);
        }
        if (((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction) 
             | (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))) {
            vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        }
        if (((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_valid) 
             & (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))) {
            vlSelf->__PVT__IBusCachedPlugin_fetchPc_correctionReg = 0U;
            vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc = 1U;
        }
        if (((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
             & (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))) {
            vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache_io_flush) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 1U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 
                = vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = 0U;
        }
    }
    vlSelf->__PVT___zz_RegFilePlugin_regFile_port1 
        = vlSelf->RegFilePlugin_regFile[(0x1fU & (vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED 
                                                  >> 0x14U))];
    vlSelf->__PVT___zz_RegFilePlugin_regFile_port0 
        = vlSelf->RegFilePlugin_regFile[(0x1fU & (vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED 
                                                  >> 0xfU))];
    vlSelf->__PVT__execute_CsrPlugin_wfiWake = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
                                                & (0U 
                                                   != 
                                                   (((IData)(vlSelf->__PVT___zz_when_CsrPlugin_l965_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__PVT___zz_when_CsrPlugin_l965_1) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__PVT___zz_when_CsrPlugin_l965)))));
    vlSelf->__PVT___zz_7 = vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset;
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_data 
        = vlSelf->__PVT___zz_decode_RS2_2;
    if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l338) {
        vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342 
        = (1U & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                 >> 7U));
    if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351) {
        vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = 0U;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess 
            = (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
               >> 0x1fU);
    }
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers) 
              & (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)));
    if (vlSelf->__PVT__CsrPlugin_mstatus_MIE) {
        if (vlSelf->__PVT___zz_when_CsrPlugin_l965) {
            vlSelf->CsrPlugin_interrupt_code = 7U;
            vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSelf->__PVT___zz_when_CsrPlugin_l965_1) {
            vlSelf->CsrPlugin_interrupt_code = 3U;
            vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
        if (vlSelf->__PVT___zz_when_CsrPlugin_l965_2) {
            vlSelf->CsrPlugin_interrupt_code = 0xbU;
            vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = 3U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_FORMAL_PC_NEXT 
            = vlSelf->__PVT__decode_to_execute_FORMAL_PC_NEXT;
        vlSelf->__PVT__execute_to_memory_SHIFT_CTRL 
            = vlSelf->__PVT__decode_to_execute_SHIFT_CTRL;
        vlSelf->__PVT__memory_DivPlugin_rs2 = (((IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs2)
                                                 ? 
                                                (~ vlSelf->__PVT__decode_to_execute_RS2)
                                                 : vlSelf->__PVT__decode_to_execute_RS2) 
                                               + (IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs2));
        vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE 
            = vlSelf->__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE;
        vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
            = (IData)((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                       (((QData)((IData)(
                                                                         ((3U 
                                                                           == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                          & (vlSelf->__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                             >> 0x1fU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                       (0x1fU 
                                                        & vlSelf->__PVT___zz_execute_SRC2_5))));
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
            = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    }
    vlSelf->__PVT__CsrPlugin_mip_MTIP = 0U;
    vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext = vlSymsp->TOP__sim.__PVT__builder_shared_dat_r;
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__memory_to_writeBack_FORMAL_PC_NEXT 
            = vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT;
        vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address 
            = (0xfffffU & (vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                           >> 2U));
        vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid 
            = (1U & vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0);
        vlSelf->__PVT__dataCache_1__DOT__stageB_request_totalyConsistent 
            = vlSelf->__PVT__dataCache_1__DOT__stageA_request_totalyConsistent;
        vlSelf->__PVT__memory_to_writeBack_MUL_HH = vlSelf->__PVT__execute_to_memory_MUL_HH;
        vlSelf->__PVT__dataCache_1__DOT__stageB_dataReadRsp_0 
            = (((IData)(vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                << 0x18U) | (((IData)(vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                              << 0x10U) | (((IData)(vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))));
        vlSelf->__PVT__memory_to_writeBack_MEMORY_WR 
            = vlSelf->__PVT__execute_to_memory_MEMORY_WR;
        vlSelf->__PVT__memory_to_writeBack_IS_MUL = vlSelf->__PVT__execute_to_memory_IS_MUL;
    }
    vlSelf->__PVT__CsrPlugin_mip_MEIP = (0U != vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1);
    vlSelf->__PVT__externalInterruptArray_regNext = vlSymsp->TOP__sim.__PVT__main_interrupt;
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED 
            = (1U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x1eU));
        vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL 
            = (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x12U));
        vlSelf->__PVT__decode_to_execute_ALU_CTRL = 
            (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                   >> 6U));
        vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED 
            = (1U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x11U));
        vlSelf->__PVT__decode_to_execute_IS_CSR = (1U 
                                                   & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                                                      >> 0x19U));
        vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO 
            = (IData)((0x100000U == (0x100008U & vlSelf->__PVT___zz_decode_IS_RS2_SIGNED)));
        vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS 
            = (1U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 3U));
        vlSelf->__PVT__decode_to_execute_MEMORY_MANAGMENT 
            = (1U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x10U));
        vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE 
            = (1U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0xbU));
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1032) {
        if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
            vlSelf->__PVT__CsrPlugin_mcause_exceptionCode 
                = vlSelf->__PVT__CsrPlugin_trapCause;
        }
    }
    if (vlSelf->__PVT___zz_when) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
            = ((1U & (IData)(vlSelf->__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1))
                ? (IData)(vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code)
                : 2U);
    }
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
            = vlSelf->__PVT__CsrPlugin_selfException_payload_code;
    }
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code = 0U;
    }
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code 
            = vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__6(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__6\n"); );
    // Body
    if (vlSelf->__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_DivPlugin_div_done)))) {
            vlSelf->__PVT__memory_DivPlugin_rs1 = (
                                                   (0x100000000ULL 
                                                    & vlSelf->__PVT__memory_DivPlugin_rs1) 
                                                   | (IData)((IData)(vlSelf->__PVT___zz_memory_DivPlugin_div_stage_0_outNumerator)));
            vlSelf->__PVT__memory_DivPlugin_accumulator[0U] 
                = ((1U & (IData)((vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                  >> 0x20U))) ? (IData)(vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                    : (IData)(vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__memory_DivPlugin_rs1 = (0x1ffffffffULL 
                                               & (((IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs1)
                                                    ? 
                                                   (~ vlSelf->__PVT___zz_memory_DivPlugin_rs1_1)
                                                    : vlSelf->__PVT___zz_memory_DivPlugin_rs1_1) 
                                                  + (QData)((IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs1))));
        vlSelf->__PVT__memory_DivPlugin_accumulator[0U] = 0U;
        vlSelf->__PVT__memory_DivPlugin_accumulator[1U] = 0U;
        vlSelf->__PVT__memory_DivPlugin_accumulator[2U] = 0U;
        vlSelf->__PVT__execute_to_memory_IS_DIV = vlSelf->__PVT__decode_to_execute_IS_DIV;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_SRC2_CTRL 
            = (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 8U));
        vlSelf->__PVT__decode_to_execute_SRC1_CTRL 
            = (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 1U));
        vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE 
            = (0x20U != (0x7fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                  >> 7U)));
        vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE 
            = (1U & (~ ((IData)((0x2000U == (0xfe000U 
                                             & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                        | (IData)((0x6000U == (0xfe000U 
                                               & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))));
        vlSelf->__PVT__execute_CsrPlugin_csr_3264 = 
            (0xcc0U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_835 = 
            (0x343U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_4032 = 
            (0xfc0U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_834 = 
            (0x342U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
    }
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
              & (IData)(vlSelf->__PVT__writeBack_arbitration_isFiring)));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__Vdly__IBusCachedPlugin_rspCounter = 0U;
        vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = 0U;
        vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        vlSelf->__PVT__CsrPlugin_mie_MTIE = 0U;
        vlSelf->__PVT__CsrPlugin_mie_MEIE = 0U;
        vlSelf->__PVT__CsrPlugin_mie_MSIE = 0U;
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit = 0U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
    } else {
        if (vlSelf->__PVT___zz_iBus_rsp_valid) {
            vlSelf->__Vdly__IBusCachedPlugin_rspCounter 
                = ((IData)(1U) + vlSelf->__PVT__IBusCachedPlugin_rspCounter);
            vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
                = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex)));
        }
        vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        if (vlSelf->__PVT__CsrPlugin_mstatus_MIE) {
            if (vlSelf->__PVT___zz_when_CsrPlugin_l965) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->__PVT___zz_when_CsrPlugin_l965_1) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
            if (vlSelf->__PVT___zz_when_CsrPlugin_l965_2) {
                vlSelf->__PVT__CsrPlugin_interrupt_valid = 1U;
            }
        }
        if (vlSelf->CsrPlugin_interruptJump) {
            vlSelf->__PVT__CsrPlugin_interrupt_valid = 0U;
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__PVT__CsrPlugin_mie_MTIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 7U));
                vlSelf->__PVT__CsrPlugin_mie_MEIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 0xbU));
                vlSelf->__PVT__CsrPlugin_mie_MSIE = 
                    (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                           >> 3U));
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_3008) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit 
                    = vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal;
            }
        }
        if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
                vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 
                    = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l998) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__memory_to_writeBack_ENV_CTRL 
            = vlSelf->__PVT__execute_to_memory_ENV_CTRL;
        vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
            = (0xfffffffffffffULL & (((((QData)((IData)(
                                                        (0x7ffffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                ((QData)((IData)(vlSelf->__PVT__execute_to_memory_MUL_LL)) 
                                                                                >> 0x20U)))))))) 
                                        << 0x21U) | (QData)((IData)(vlSelf->__PVT__execute_to_memory_MUL_LL))) 
                                      + (((QData)((IData)(
                                                          (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (1ULL 
                                                                                & (vlSelf->__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                          << 0x32U) 
                                         | (0x3ffffffffffffULL 
                                            & (vlSelf->__PVT__execute_to_memory_MUL_LH 
                                               << 0x10U)))) 
                                     + (((QData)((IData)(
                                                         (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (1ULL 
                                                                                & (vlSelf->__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                         << 0x32U) 
                                        | (0x3ffffffffffffULL 
                                           & (vlSelf->__PVT__execute_to_memory_MUL_HL 
                                              << 0x10U)))));
        vlSelf->__PVT__dataCache_1__DOT__stageB_dataColisions 
            = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
               | ((((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                    & (IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                   & ((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                      == (0x3ffU & (vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                    >> 2U)))) & (0U 
                                                 != 
                                                 ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageA_mask) 
                                                  & (IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))));
    }
    if (vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last 
            = (1U & ((~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid)) 
                     | (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_last)));
        vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask 
            = ((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid)
                ? (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_mask)
                : (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mask));
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_773) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mtvec_base = (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                                   >> 2U);
            vlSelf->__PVT__CsrPlugin_mtvec_mode = (3U 
                                                   & vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal);
        }
    }
    vlSelf->__PVT__CsrPlugin_mip_MSIP = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mip_MSIP = (1U 
                                                 & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                                    >> 3U));
        }
    }
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((IData)(vlSelf->__PVT__execute_arbitration_isStuck)
               ? (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute)
               : ((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode) 
                  & (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)))));
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((IData)(vlSelf->__PVT__memory_arbitration_isStuck)
               ? (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory)
               : ((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                  & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))));
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack 
        = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
           & ((~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)) 
              & ((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                 & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))));
    if (vlSelf->__PVT__when_CsrPlugin_l1032) {
        if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
            vlSelf->__PVT__CsrPlugin_mepc = vlSelf->__PVT__memory_to_writeBack_PC;
            vlSelf->__PVT__CsrPlugin_mcause_interrupt 
                = (1U & (~ (IData)(vlSelf->CsrPlugin_hadException)));
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_833) {
        if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
            vlSelf->__PVT__CsrPlugin_mepc = vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal;
        }
    }
    if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1) {
        vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0 
            = vlSelf->__PVT__iBusWishbone_DAT_MISO_regNext;
        vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0 = 1U;
        vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0 
            = ((0x3f8U & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                          >> 2U)) | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex));
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__7(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__7\n"); );
    // Body
    if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2) {
        vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
            = ((0x3ffffcU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                             >> 0xaU)) | (((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                                 >> 7U))));
        vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 1U;
        vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 
            = (0x7fU & ((0x80U & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                         ? (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                            >> 5U) : (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)));
    }
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address 
        = (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                    >> 7U));
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling = 0U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging = 0U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_exception = 0U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite = 1U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead = 1U;
    }
    if (vlSelf->__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_DivPlugin_div_done)))) {
            if ((0x20U == (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value))) {
                vlSelf->__PVT__memory_DivPlugin_div_result 
                    = (((IData)(vlSelf->__PVT__memory_DivPlugin_div_needRevert)
                         ? (~ vlSelf->__PVT___zz_memory_DivPlugin_div_result)
                         : vlSelf->__PVT___zz_memory_DivPlugin_div_result) 
                       + (IData)((QData)((IData)(vlSelf->__PVT__memory_DivPlugin_div_needRevert))));
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_BRANCH_DO 
            = (((IData)(vlSelf->__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                != (IData)(vlSelf->__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
               | ((IData)(vlSelf->__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                  & ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                      ? ((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                          >> 0x15U) ^ (vlSelf->__PVT__decode_to_execute_RS1 
                                       >> 1U)) : ((2U 
                                                   == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                                                   ? 
                                                  (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 8U)))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error 
            = (1U & (vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                     >> 1U));
        vlSelf->__PVT__dataCache_1__DOT__stageB_request_size 
            = vlSelf->__PVT__dataCache_1__DOT__stageA_request_size;
        vlSelf->__PVT__dataCache_1__DOT__stageB_unaligned 
            = (0U != ((((2U == (IData)(vlSelf->__PVT__dataCache_1__DOT__stageA_request_size)) 
                        & (0U != (3U & vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA))) 
                       << 1U) | ((1U == (IData)(vlSelf->__PVT__dataCache_1__DOT__stageA_request_size)) 
                                 & vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA)));
        vlSelf->__PVT__dataCache_1__DOT__stageB_wayInvalidate 
            = vlSelf->__PVT__dataCache_1__DOT__stageA_wayInvalidate;
        vlSelf->__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate 
            = (((vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                 >> 0xcU) == (0xfffffU & (vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                          >> 2U))) 
               & vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0);
        vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr 
            = vlSelf->__PVT__dataCache_1__DOT__stageA_request_wr;
        vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE 
            = vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE;
    }
    if (vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
        if (vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address 
                = vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_address;
            vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size 
                = vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_size;
            vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data 
                = vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_data;
            vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached 
                = vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_uncached;
        } else {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address 
                = vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address;
            vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size 
                = vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size;
            vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data 
                = vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF;
            vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached 
                = vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess;
        }
    }
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error 
            = (1U & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                     >> 1U));
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid 
            = (vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
               & ((0xfffffU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                               >> 2U)) == (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                                           >> 0xcU)));
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute = 1U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling = 0U;
        vlSelf->__PVT__IBusCachedPlugin_s2_tightlyCoupledHit 
            = vlSelf->__PVT__IBusCachedPlugin_s1_tightlyCoupledHit;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
        vlSelf->__Vdly__DBusCachedPlugin_rspCounter = 0U;
        vlSelf->__Vdly___zz_dBus_cmd_ready = 0U;
        vlSelf->__Vdly__CsrPlugin_mstatus_MIE = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
        vlSelf->__Vdly___zz_iBusWishbone_ADR = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
        vlSelf->__PVT__writeBack_arbitration_isValid = 0U;
        vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = 0U;
    } else {
        if (vlSelf->__PVT__when_CsrPlugin_l1032) {
            if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
                vlSelf->__Vdly__CsrPlugin_mstatus_MIE = 0U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1077) {
            if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPP = 0U;
                vlSelf->__Vdly__CsrPlugin_mstatus_MIE 
                    = vlSelf->__PVT__CsrPlugin_mstatus_MPIE;
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                if ((3U == (3U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                  >> 0xbU)))) {
                    vlSelf->__PVT__CsrPlugin_mstatus_MPP = 3U;
                }
                vlSelf->__Vdly__CsrPlugin_mstatus_MIE 
                    = (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 3U));
            }
        }
        if (vlSelf->__PVT___zz_dBus_rsp_valid) {
            vlSelf->__Vdly__DBusCachedPlugin_rspCounter 
                = ((IData)(1U) + vlSelf->__PVT__DBusCachedPlugin_rspCounter);
        }
        if (((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
             & (IData)(vlSelf->__PVT___zz_dBus_cmd_ready_2))) {
            vlSelf->__Vdly___zz_dBus_cmd_ready = (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT___zz_dBus_cmd_ready)));
            if (vlSelf->__PVT___zz_dBus_cmd_ready_4) {
                vlSelf->__Vdly___zz_dBus_cmd_ready = 0U;
            }
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = 1U;
        }
        if (vlSelf->__PVT__when_InstructionCache_l239) {
            if (vlSymsp->TOP__sim.__PVT__main_ibus_ack) {
                vlSelf->__Vdly___zz_iBusWishbone_ADR 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->__PVT___zz_iBusWishbone_ADR)));
            }
        }
        if (((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
             & (IData)(vlSymsp->TOP__sim.__PVT__main_ibus_ack))) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 1U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)) 
                   | (IData)(vlSelf->__PVT__writeBack_arbitration_removeIt)))) {
            vlSelf->__PVT__writeBack_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
                   & (~ (IData)(vlSelf->__PVT__memory_arbitration_removeIt))))) {
            vlSelf->__PVT__writeBack_arbitration_isValid 
                = vlSelf->__PVT__memory_arbitration_isValid;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush) {
            vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
            vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid 
                = ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                   & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush)));
        }
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1032) {
        if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
            if (vlSelf->CsrPlugin_hadException) {
                vlSelf->__PVT__CsrPlugin_mtval = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr;
            }
        }
    }
    vlSelf->__PVT__dataCache_1__DOT__loader_valid_regNext 
        = vlSelf->__PVT__dataCache_1__DOT__loader_valid;
}

extern const VlUnpacked<VlWide<3>/*71:0*/, 4> Vsim__ConstPool__TABLE_h70ffaf08_0;
extern const VlUnpacked<VlWide<3>/*95:0*/, 4> Vsim__ConstPool__TABLE_h5aae0e3d_0;

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__9(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__9\n"); );
    // Init
    CData/*1:0*/ __Vtableidx11;
    CData/*1:0*/ __Vtableidx15;
    CData/*1:0*/ __Vtableidx21;
    CData/*1:0*/ __Vtableidx23;
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_FORMAL_PC_NEXT 
            = vlSelf->__PVT___zz_decode_to_execute_FORMAL_PC_NEXT;
        vlSelf->__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE 
            = (1U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0xcU));
        vlSelf->__PVT__decode_to_execute_SHIFT_CTRL 
            = (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x15U));
        vlSelf->__PVT__decode_to_execute_IS_DIV = (1U 
                                                   & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                                                      >> 0x1dU));
        vlSelf->__PVT__execute_CsrPlugin_csr_773 = 
            (0x305U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_836 = 
            (0x344U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_772 = 
            (0x304U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__dataCache_1__DOT__stageA_request_totalyConsistent 
            = vlSelf->__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY;
        vlSelf->__PVT__execute_to_memory_MUL_HH = (0x3ffffffffULL 
                                                   & VL_MULS_QQQ(34, 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, vlSelf->__PVT__execute_MulPlugin_aHigh)), 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, vlSelf->__PVT__execute_MulPlugin_bHigh))));
        vlSelf->__PVT__execute_to_memory_MEMORY_WR 
            = vlSelf->__PVT__decode_to_execute_MEMORY_WR;
        vlSelf->__PVT__execute_to_memory_IS_MUL = vlSelf->__PVT__decode_to_execute_IS_MUL;
        vlSelf->__PVT__execute_to_memory_ENV_CTRL = vlSelf->__PVT__decode_to_execute_ENV_CTRL;
        vlSelf->__PVT__execute_to_memory_MUL_HL = (0x3ffffffffULL 
                                                   & VL_MULS_QQQ(34, 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, vlSelf->__PVT__execute_MulPlugin_aHigh)), 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, 
                                                                                (0xffffU 
                                                                                & vlSelf->__PVT__decode_to_execute_RS2)))));
        vlSelf->__PVT__execute_to_memory_MUL_LH = (0x3ffffffffULL 
                                                   & VL_MULS_QQQ(34, 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, 
                                                                                (0xffffU 
                                                                                & vlSelf->__PVT__decode_to_execute_RS1))), 
                                                                 (0x3ffffffffULL 
                                                                  & VL_EXTENDS_QI(34,17, vlSelf->__PVT__execute_MulPlugin_bHigh))));
        vlSelf->__PVT__execute_to_memory_MUL_LL = (
                                                   (0xffffU 
                                                    & vlSelf->__PVT__decode_to_execute_RS1) 
                                                   * 
                                                   (0xffffU 
                                                    & vlSelf->__PVT__decode_to_execute_RS2));
    }
    if (vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem) {
        vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3 
            = vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol3
            [vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload];
        vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2 
            = vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol2
            [vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload];
        vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1 
            = vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol1
            [vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload];
        vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read 
            = vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol0
            [vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload];
    }
    __Vtableidx11 = vlSelf->__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelf->__PVT__memory_SHIFT_CTRL_string[0U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx11][0U];
    vlSelf->__PVT__memory_SHIFT_CTRL_string[1U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx11][1U];
    vlSelf->__PVT__memory_SHIFT_CTRL_string[2U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx11][2U];
    __Vtableidx23 = vlSelf->__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx23][0U];
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx23][1U];
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx23][2U];
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
    } else {
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 
                = vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = 0U;
        }
    }
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xfffffff8U 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((4U & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 0x1bU)) 
                                          | ((2U & 
                                              (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                               >> 0x1dU)) 
                                             | (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                >> 0x1fU))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xffffffc7U 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x20U & 
                                           (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                            >> 0x15U)) 
                                          | ((0x10U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 0x17U)) 
                                             | (8U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 0x19U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xfffffe3fU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x100U & 
                                           (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                            >> 0xfU)) 
                                          | ((0x80U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 0x11U)) 
                                             | (0x40U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 0x13U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xfffff1ffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x800U & 
                                           (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                            >> 9U)) 
                                          | ((0x400U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 0xbU)) 
                                             | (0x200U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 0xdU)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xffff8fffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x4000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              >> 3U)) 
                                          | ((0x2000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 5U)) 
                                             | (0x1000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 7U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xfffc7fffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x20000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 3U)) 
                                          | ((0x10000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 1U)) 
                                             | (0x8000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 1U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xffe3ffffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x100000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 9U)) 
                                          | ((0x80000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 7U)) 
                                             | (0x40000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 5U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xff1fffffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x800000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 0xfU)) 
                                          | ((0x400000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 0xdU)) 
                                             | (0x200000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 0xbU)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xf8ffffffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x4000000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 0x15U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 0x13U)) 
                                             | (0x1000000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 0x11U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xc7ffffffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x20000000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 0x1bU)) 
                                          | ((0x10000000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 0x19U)) 
                                             | (0x8000000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 0x17U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0x3fffffffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                           << 0x1fU) 
                                          | (0x40000000U 
                                             & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                << 0x1dU))));
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderShifted 
        = (((QData)((IData)(vlSelf->__PVT__memory_DivPlugin_accumulator[0U])) 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSelf->__PVT__memory_DivPlugin_rs1 
                                                    >> 0x1fU))))));
    __Vtableidx15 = vlSelf->__PVT__decode_to_execute_SRC1_CTRL;
    vlSelf->__PVT__execute_SRC1_CTRL_string[0U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx15][0U];
    vlSelf->__PVT__execute_SRC1_CTRL_string[1U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx15][1U];
    vlSelf->__PVT__execute_SRC1_CTRL_string[2U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx15][2U];
    __Vtableidx21 = vlSelf->__PVT__decode_to_execute_SRC1_CTRL;
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_h5aae0e3d_0[__Vtableidx21][0U];
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_h5aae0e3d_0[__Vtableidx21][1U];
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_h5aae0e3d_0[__Vtableidx21][2U];
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID;
    }
    vlSelf->__PVT___zz_iBus_rsp_valid = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
                                         & ((IData)(vlSelf->__PVT__iBusWishbone_CYC) 
                                            & (IData)(vlSymsp->TOP__sim.__PVT__main_ibus_ack)));
    if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid)))) {
        vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_last = 1U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3264) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0x1000U | (0xffffe000U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0x2000000U | (0xfc0fffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
    }
    vlSelf->__PVT___zz_when_CsrPlugin_l965 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP) 
                                              & (IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE));
    vlSelf->__PVT___zz_when_CsrPlugin_l965_2 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP) 
                                                & (IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE));
    vlSelf->__PVT___zz_when_CsrPlugin_l965_1 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP) 
                                                & (IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE));
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__10(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__10\n"); );
    // Body
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
        = (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit 
           & vlSelf->__PVT__externalInterruptArray_regNext);
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_CsrPlugin_csr_3008 = 
            (0xbc0U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__execute_CsrPlugin_csr_833 = 
            (0x341U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2 
            = vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid)))) {
        vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_mask 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_mask;
        vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_address 
            = vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address;
        vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_size 
            = vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size;
        vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_data 
            = vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF;
        vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_uncached 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)) 
               & (~ (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))) {
        vlSelf->__PVT__memory_to_writeBack_PC = vlSelf->__PVT__execute_to_memory_PC;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0x7fffffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mcause_interrupt) 
                  << 0x1fU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0xfffffff0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | (IData)(vlSelf->__PVT__CsrPlugin_mcause_exceptionCode));
    }
    vlSelf->__PVT__iBusWishbone_DAT_MISO_regNext = vlSymsp->TOP__sim.__PVT__builder_shared_dat_r;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l338 
        = (1U & (~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                    >> 7U)));
    if (vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress;
    }
    if ((0x20U == (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value))) {
        vlSelf->__PVT__memory_DivPlugin_div_done = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen 
            = ((((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                 & (IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                & ((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                   == (0x3ffU & (vlSelf->__PVT__execute_SrcPlugin_addSub 
                                 >> 2U)))) & (0U != 
                                              ((IData)(vlSelf->__PVT__dataCache_1__DOT__stage0_mask) 
                                               & (IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))));
        vlSelf->__PVT__memory_DivPlugin_div_done = 0U;
        vlSelf->__PVT__memory_DivPlugin_div_needRevert 
            = (((IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs1) 
                ^ ((IData)(vlSelf->__PVT___zz_memory_DivPlugin_rs2) 
                   & (~ (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                         >> 0xdU)))) & (~ (((0U == vlSelf->__PVT__decode_to_execute_RS2) 
                                            & (IData)(vlSelf->__PVT__decode_to_execute_IS_RS2_SIGNED)) 
                                           & (~ (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0xdU)))));
        vlSelf->__PVT__dataCache_1__DOT__stageA_request_size 
            = (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                     >> 0xcU));
        vlSelf->__PVT__dataCache_1__DOT__stageA_wayInvalidate = 0U;
        vlSelf->__PVT__dataCache_1__DOT__stageA_request_wr 
            = vlSelf->__PVT__decode_to_execute_MEMORY_WR;
    }
    vlSelf->__PVT___zz_dBus_rsp_valid = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
                                         & (((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                             & (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr))) 
                                            & (IData)(vlSymsp->TOP__sim.__PVT__main_dbus_ack)));
    vlSelf->__PVT___zz_dBus_cmd_ready_4 = ((5U != (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size)) 
                                           | (7U == (IData)(vlSelf->__PVT___zz_dBus_cmd_ready)));
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_835) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
            = vlSelf->__PVT__CsrPlugin_mtval;
    }
    vlSelf->CsrPlugin_hadException = ((~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)) 
                                      & (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
    if (vlSelf->__PVT___zz_when) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = ((1U & (IData)(vlSelf->__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1))
                ? (0xfffffffcU & vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)
                : vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen);
    }
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = vlSelf->__PVT__decode_to_execute_INSTRUCTION;
    }
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = vlSelf->__PVT__execute_to_memory_BRANCH_CALC;
    }
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr 
            = vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)));
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid) 
         & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
            = vlSelf->__PVT__dataCache_1__DOT__ways_0_tags
            [vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload];
    }
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate) 
           & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_wayInvalidate)));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
        vlSelf->__PVT__CsrPlugin_mstatus_MPIE = 0U;
    } else {
        if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
                vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 
                    = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l998) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = 0U;
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1032) {
            if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPIE 
                    = vlSelf->__PVT__CsrPlugin_mstatus_MIE;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l1077) {
            if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                              >> 0x1cU)))) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPIE = 1U;
            }
        }
        if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
            if (vlSelf->__PVT__execute_CsrPlugin_writeEnable) {
                vlSelf->__PVT__CsrPlugin_mstatus_MPIE 
                    = (1U & (vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                             >> 7U));
            }
        }
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__dataCache_1__DOT__memCmdSent = 0U;
        vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 0U;
        vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter = 0U;
        vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start = 1U;
        vlSelf->__PVT__dataCache_1__DOT__loader_valid = 0U;
        vlSelf->__PVT__dataCache_1__DOT__loader_counter_value = 0U;
        vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator = 1U;
        vlSelf->__Vdly__dataCache_1__DOT__loader_error = 0U;
        vlSelf->__PVT__dataCache_1__DOT__loader_killReg = 0U;
    } else {
        if (vlSelf->__PVT__dataCache_1_io_cpu_flush_ready) {
            vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 0U;
        }
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                          & (~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt))) 
                         & (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
            VL_WRITEF("ERROR writeBack stuck by another plugin is not allowed\n");
        }
        if (((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_valid) 
             & (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid)))) {
            vlSelf->__PVT__dataCache_1__DOT__memCmdSent = 1U;
        }
        if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l850) {
            vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter)));
            if ((0U != (0x1fU & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                 >> 0xfU)))) {
                vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter 
                    = (0x80U | (IData)(vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter));
            }
        }
        if (vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid) {
            vlSelf->__PVT__dataCache_1__DOT__loader_valid = 1U;
        }
        vlSelf->__PVT__dataCache_1__DOT__loader_counter_value 
            = vlSelf->__PVT__dataCache_1__DOT__loader_counter_valueNext;
        if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1118) {
            vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator 
                = (1U & (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_loader_waysAllocator));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
            vlSelf->__PVT__dataCache_1__DOT__memCmdSent = 0U;
        }
        vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start 
            = (((((((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone)) 
                    & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start))) 
                   & (IData)(vlSelf->__PVT__dataCache_1_io_cpu_flush_valid)) 
                  & (~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid))) 
                 & (~ ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
                       & (IData)(vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE)))) 
                & (~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid))) 
               & (~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_redo)));
        if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1090) {
            vlSelf->__Vdly__dataCache_1__DOT__loader_error 
                = vlSelf->__PVT__dataCache_1__DOT__loader_error;
        }
        if (vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start) {
            vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = 1U;
            vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter = 0U;
            if ((0U != (0x1fU & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                 >> 0xfU)))) {
                vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter 
                    = (0x7fU & (vlSelf->__PVT__decode_to_execute_RS1 
                                >> 5U));
            }
        }
        if (vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
            vlSelf->__PVT__dataCache_1__DOT__loader_valid = 0U;
            vlSelf->__Vdly__dataCache_1__DOT__loader_error = 0U;
            vlSelf->__PVT__dataCache_1__DOT__loader_killReg = 0U;
        }
    }
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags
            [(0x7fU & (vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
                       >> 5U))];
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__11(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__11\n"); );
    // Init
    CData/*1:0*/ __Vtableidx13;
    CData/*1:0*/ __Vtableidx22;
    // Body
    vlSelf->lastStageIsValid = vlSelf->__PVT__writeBack_arbitration_isValid;
    vlSelf->__PVT__when_DBusCachedPlugin_l446 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                                 & (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT__IBusCachedPlugin_s1_tightlyCoupledHit = 0U;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2 = 0U;
        vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
    } else {
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush) {
            vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2 = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
            vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2 
                = ((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                   & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)));
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 
                = vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = 0U;
        }
    }
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid 
        = ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
           & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_s2_tightlyCoupledHit)));
    if (vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol3[vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol3__v0] 
            = vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol3__v0;
    }
    if (vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol2[vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol2__v0] 
            = vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol2__v0;
    }
    if (vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol1[vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol1__v0] 
            = vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol1__v0;
    }
    if (vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol0[vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol0__v0] 
            = vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol0__v0;
    }
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
        = (0x1ffffffffULL & (vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderShifted 
                             - (QData)((IData)(vlSelf->__PVT__memory_DivPlugin_rs2))));
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_4032) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 
            = vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1;
    }
    vlSelf->__PVT__CsrPlugin_mstatus_MIE = vlSelf->__Vdly__CsrPlugin_mstatus_MIE;
    vlSelf->__PVT__when_CsrPlugin_l1077 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                           & (1U == (IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL)));
    vlSelf->__PVT__when_InstructionCache_l239 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT___zz_iBusWishbone_ADR)));
    if (vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_tags[vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_tags__v0] 
            = vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_tags__v0;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits) 
           | (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr));
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start 
        = vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start;
    vlSelf->__PVT__dataCache_1__DOT__loader_error = vlSelf->__Vdly__dataCache_1__DOT__loader_error;
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone 
        = vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone;
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter 
        = vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter;
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid 
        = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE));
    if (vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0] 
            = vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0;
    }
    vlSelf->__PVT__when_IBusCachedPlugin_l239 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                 & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY = 0U;
        vlSelf->__PVT__decode_to_execute_IS_MUL = (1U 
                                                   & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                                                      >> 0x1cU));
        vlSelf->__PVT__decode_to_execute_ENV_CTRL = 
            (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                   >> 0x1aU));
    }
    __Vtableidx13 = vlSelf->__PVT__decode_to_execute_SHIFT_CTRL;
    vlSelf->__PVT__execute_SHIFT_CTRL_string[0U] = 
        Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx13][0U];
    vlSelf->__PVT__execute_SHIFT_CTRL_string[1U] = 
        Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx13][1U];
    vlSelf->__PVT__execute_SHIFT_CTRL_string[2U] = 
        Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx13][2U];
    __Vtableidx22 = vlSelf->__PVT__decode_to_execute_SHIFT_CTRL;
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx22][0U];
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx22][1U];
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx22][2U];
    vlSelf->__PVT___zz_memory_DivPlugin_div_stage_0_outNumerator 
        = (((QData)((IData)(vlSelf->__PVT__memory_DivPlugin_rs1)) 
            << 1U) | (QData)((IData)((1U & (~ (IData)(
                                                      (vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                       >> 0x20U)))))));
    vlSelf->__PVT__when_HazardSimplePlugin_l45 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                                  & (IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 0U;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    if (vlSelf->__PVT___zz_iBus_rsp_valid) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 1U;
        if ((7U == (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
        }
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = ((0xfffff7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP) 
                  << 3U));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffff7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE) 
                  << 3U));
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__12(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__12\n"); );
    // Body
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3008) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 
            = vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit;
    }
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
        vlSelf->__PVT__memory_DivPlugin_div_counter_value = 0U;
        vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid = 0U;
        vlSelf->__PVT__memory_arbitration_isValid = 0U;
        vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
    } else {
        if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
            if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
                vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 1U;
            }
        }
        if (vlSelf->__PVT__when_CsrPlugin_l998) {
            vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = 0U;
        }
        vlSelf->__PVT__memory_DivPlugin_div_counter_value 
            = vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext;
        if (vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid 
                = ((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_valid) 
                   | (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid));
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
                   | (IData)(vlSelf->__PVT__memory_arbitration_removeIt)))) {
            vlSelf->__PVT__memory_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
                   & (~ (IData)(vlSelf->__PVT__execute_arbitration_removeIt))))) {
            vlSelf->__PVT__memory_arbitration_isValid 
                = vlSelf->__PVT__execute_arbitration_isValid;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 
                = vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = 0U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)))) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mask 
            = vlSelf->__PVT__dataCache_1__DOT__stageA_mask;
        vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF 
            = vlSelf->__PVT__execute_to_memory_MEMORY_STORE_DATA_RF;
        vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA 
            = vlSelf->__PVT___zz_decode_RS2_1;
        vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
            = vlSelf->__PVT__execute_to_memory_INSTRUCTION;
    }
    vlSelf->lastStagePc = vlSelf->__PVT__memory_to_writeBack_PC;
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__execute_to_memory_PC = vlSelf->__PVT__decode_to_execute_PC;
        vlSelf->__PVT__execute_to_memory_BRANCH_CALC 
            = (0xfffffffeU & (((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                                ? vlSelf->__PVT__decode_to_execute_RS1
                                : vlSelf->__PVT__decode_to_execute_PC) 
                              + vlSelf->__PVT__execute_BranchPlugin_branch_src2));
        vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE 
            = vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_833) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
            = vlSelf->__PVT__CsrPlugin_mepc;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress 
            = vlSelf->IBusCachedPlugin_fetchPc_pcReg;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_IS_RS2_SIGNED 
            = (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
               >> 0x1fU);
        vlSelf->__PVT__execute_CsrPlugin_csr_768 = 
            (0x300U == (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                        >> 0x14U));
        vlSelf->__PVT__decode_to_execute_MEMORY_WR 
            = (1U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0xdU));
    }
    if (vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
        vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr 
            = ((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid)
                ? (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_wr)
                : (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr));
    }
    vlSelf->__PVT__CsrPlugin_trapCause = vlSelf->CsrPlugin_interrupt_code;
    vlSelf->__PVT__CsrPlugin_targetPrivilege = vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege;
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_done 
        = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if ((0U != (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                 << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                            << 1U) | (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSelf->CsrPlugin_hadException) {
        vlSelf->__PVT__CsrPlugin_trapCause = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
        vlSelf->__PVT__CsrPlugin_targetPrivilege = 3U;
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess 
            = (vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA 
               >> 0x1fU);
    }
    vlSelf->__PVT__iBusWishbone_STB = 0U;
    vlSelf->__PVT__iBusWishbone_CYC = 0U;
    if (vlSelf->__PVT__when_InstructionCache_l239) {
        vlSelf->__PVT__iBusWishbone_STB = 1U;
        vlSelf->__PVT__iBusWishbone_CYC = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_loader_waysAllocator 
        = (3U & (- (IData)((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator))));
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l850 = 1U;
        vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = 0U;
        vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = 1U;
    } else {
        vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l850 = 0U;
        vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = 0U;
    }
    vlSelf->__PVT__dataCache_1_io_cpu_flush_ready = 
        ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone) 
         & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
            >> 7U));
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1118 
        = (1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid)));
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1090 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid) 
           & (IData)(vlSelf->__PVT___zz_dBus_rsp_valid));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess 
        = ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_unaligned));
    vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault 
        = ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
           & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_exception) 
              | (((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                  & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                 | ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                    & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr))))));
    vlSelf->__PVT__IBusCachedPlugin_incomingInstruction = 0U;
    if (((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
         | (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))) {
        vlSelf->__PVT__IBusCachedPlugin_incomingInstruction = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending) 
           & (~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
                 | ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                    & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_s1_tightlyCoupledHit))))));
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l239) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 0U;
    if ((1U & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
               | (~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                     >> 7U))))) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 1U;
    }
    vlSelf->__PVT__CsrPlugin_xtvec_mode = 0U;
    vlSelf->__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
        vlSelf->__PVT__CsrPlugin_xtvec_mode = vlSelf->__PVT__CsrPlugin_mtvec_mode;
        vlSelf->__PVT__CsrPlugin_xtvec_base = vlSelf->__PVT__CsrPlugin_mtvec_base;
    }
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
                                       & (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_done));
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
    vlSelf->__PVT__when_IBusCachedPlugin_l244 = (((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                  & (((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                                                      & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                                     & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                                        | (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))) 
                                                 & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1)));
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__13(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__13\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID 
            = vlSelf->__PVT__decode_REGFILE_WRITE_VALID;
        vlSelf->__PVT__decode_to_execute_BRANCH_CTRL 
            = (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 0x17U));
        vlSelf->__PVT__decode_to_execute_RS1 = vlSelf->__PVT__decode_RS1;
        vlSelf->__PVT__decode_to_execute_PC = vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload;
        vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE 
            = (1U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                     >> 4U));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__dataCache_1__DOT__stageA_mask 
            = vlSelf->__PVT__dataCache_1__DOT__stage0_mask;
        vlSelf->__PVT__execute_to_memory_MEMORY_STORE_DATA_RF 
            = ((0U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU))) ? ((vlSelf->__PVT__decode_to_execute_RS2 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & (vlSelf->__PVT__decode_to_execute_RS2 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->__PVT__decode_to_execute_RS2 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->__PVT__decode_to_execute_RS2))))
                : ((1U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                 >> 0xcU))) ? ((vlSelf->__PVT__decode_to_execute_RS2 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->__PVT__decode_to_execute_RS2))
                    : vlSelf->__PVT__decode_to_execute_RS2));
        vlSelf->__PVT__execute_to_memory_INSTRUCTION 
            = vlSelf->__PVT__decode_to_execute_INSTRUCTION;
        vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA 
            = vlSelf->__PVT___zz_decode_RS2;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid)))) {
        vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_wr 
            = vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr;
    }
    vlSelf->__PVT__when_CsrPlugin_l1032 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                           | (IData)(vlSelf->CsrPlugin_interruptJump));
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPIE) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MIE) 
                  << 3U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xffffe7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPP) 
                  << 0xbU));
    }
    vlSelf->lastStageInstruction = vlSelf->__PVT__memory_to_writeBack_INSTRUCTION;
    vlSelf->lastStageRegFileWrite_payload_address = 
        (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                  >> 7U));
    if (vlSelf->__PVT___zz_7) {
        vlSelf->lastStageRegFileWrite_payload_address = 0U;
    }
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress;
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_request_size;
    vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = 0U;
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
            ? vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext
            : vlSelf->__PVT__dataCache_1__DOT__stageB_dataReadRsp_0);
    vlSelf->__PVT__dataCache_1_io_cpu_redo = 0U;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004)))) {
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address 
                    = (0xffffffe0U & vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address);
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size = 5U;
            }
            if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004) {
                vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = 1U;
                if (((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                     & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_dataColisions) 
                        & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits)))) {
                    vlSelf->__PVT__dataCache_1_io_cpu_redo = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))) {
        vlSelf->__PVT__dataCache_1_io_cpu_redo = 1U;
    }
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid) 
         & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid_regNext)))) {
        vlSelf->__PVT__dataCache_1_io_cpu_redo = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError 
        = ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)) 
           & (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits) 
               & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error)) 
              | ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
                 & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging)))));
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_valueNext 
        = (7U & ((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value) 
                 + (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement)));
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow 
        = ((7U == (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value)) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement));
    vlSelf->__PVT__when_HazardSimplePlugin_l45_1 = 
        ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid 
        = ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
           & ((IData)(vlSelf->__PVT__execute_to_memory_BRANCH_DO) 
              & (vlSelf->__PVT__execute_to_memory_BRANCH_CALC 
                 >> 1U)));
    vlSelf->__PVT__when_HazardSimplePlugin_l57_1 = 
        ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSelf->__PVT__BranchPlugin_jumpInterface_valid 
        = ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__execute_to_memory_BRANCH_DO));
    vlSelf->__PVT__when_MulDivIterativePlugin_l128 
        = ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__execute_to_memory_IS_DIV));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__execute_arbitration_isValid = 0U;
    } else {
        if ((1U & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)) 
                   | (IData)(vlSelf->__PVT__execute_arbitration_removeIt)))) {
            vlSelf->__PVT__execute_arbitration_isValid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
                   & (~ (IData)(vlSelf->__PVT__decode_arbitration_removeIt))))) {
            vlSelf->__PVT__execute_arbitration_isValid 
                = vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid;
        }
    }
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l244) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2 = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004)))) {
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr = 0U;
            }
        }
    }
    vlSelf->__PVT__CsrPlugin_jumpInterface_payload = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1032) {
        vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
            = (vlSelf->__PVT__CsrPlugin_xtvec_base 
               << 2U);
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 0U;
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 0U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1077) {
        if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
                = vlSelf->__PVT__CsrPlugin_mepc;
        }
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    vlSelf->__PVT__CsrPlugin_csrMapping_readDataInit 
        = ((((vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
              | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
             | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
                | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5)) 
            | ((vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
                | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
                  | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9))) 
           | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_mask;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address 
            = (0x3ffU & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                         >> 2U));
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = 0U;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits;
    } else {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = 0xfU;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address 
            = ((0x3f8U & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                          >> 2U)) | (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value));
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator;
    }
    vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted 
        = ((0xff000000U & vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data) 
           | ((0xff0000U & vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data) 
              | ((0xff00U & (((2U & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA)
                               ? (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                  >> 0x18U) : (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                               >> 8U)) 
                             << 8U)) | (0xffU & ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                                                  ? vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                                                   ? 
                                                  (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                                   >> 8U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                                                    ? 
                                                   (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                                    >> 0x18U))))))));
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__14(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__14\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h75ebc642__0;
    VlWide<3>/*95:0*/ __Vtemp_h7745e5b2__0;
    VlWide<3>/*95:0*/ __Vtemp_h604d3819__0;
    VlWide<3>/*95:0*/ __Vtemp_ha4e02b11__0;
    // Body
    vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid = 0U;
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code = 0U;
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
    if (vlSelf->__PVT__when_DBusCachedPlugin_l446) {
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 7U : 5U);
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 0xfU : 0xdU);
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 6U : 4U);
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_redo) {
            vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid = 1U;
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
        }
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1066 
        = ((((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling) 
             | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError)) 
            | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException)) 
           | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x7fU & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 1U;
    }
    vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
        = vlSelf->__PVT__execute_to_memory_FORMAL_PC_NEXT;
    vlSelf->__PVT__memory_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__BranchPlugin_jumpInterface_valid) {
        vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
            = vlSelf->__PVT__execute_to_memory_BRANCH_CALC;
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = 0U;
    vlSelf->__PVT__memory_arbitration_haltItself = 0U;
    vlSelf->__PVT__when_IBusCachedPlugin_l250 = (((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                  & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid))) 
                                                 & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2)));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
        vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid = 0U;
    } else {
        if (vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 0U;
        }
        if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
            vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_mem_cmd_valid) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid = 0U;
        }
    }
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)))) {
        vlSelf->__PVT__decode_to_execute_RS2 = vlSelf->__PVT__decode_RS2;
        vlSelf->__PVT__decode_to_execute_INSTRUCTION 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen;
    }
    vlSelf->__PVT___zz_memory_DivPlugin_rs1_1 = (((QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED) 
                                                                   & (vlSelf->__PVT__decode_to_execute_RS1 
                                                                      >> 0x1fU)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__decode_to_execute_RS1)));
    vlSelf->__PVT___zz_memory_DivPlugin_rs1 = (((IData)(vlSelf->__PVT__decode_to_execute_IS_DIV) 
                                                & (vlSelf->__PVT__decode_to_execute_RS1 
                                                   >> 0x1fU)) 
                                               & (IData)(vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload 
            = vlSelf->IBusCachedPlugin_fetchPc_pcReg;
    }
    vlSelf->__PVT___zz_memory_DivPlugin_div_result 
        = ((0x2000U & vlSelf->__PVT__execute_to_memory_INSTRUCTION)
            ? vlSelf->__PVT__memory_DivPlugin_accumulator[0U]
            : (IData)(vlSelf->__PVT__memory_DivPlugin_rs1));
    vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSelf->__PVT__memory_arbitration_isValid) {
        if ((1U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL))) {
            vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT___zz_decode_RS2_3;
        } else if (((2U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL)) 
                    | (3U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL)))) {
            vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT;
        }
    }
    if (vlSelf->__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_DivPlugin_div_done)))) {
            vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = 1U;
            vlSelf->__PVT__memory_arbitration_haltItself = 1U;
        }
        vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__memory_DivPlugin_div_result;
    }
    vlSelf->__PVT___zz_decode_RS2_2 = vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE))) {
        vlSelf->__PVT___zz_decode_RS2_2 = ((0U == (3U 
                                                   & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                      >> 0xcU)))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & ((vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted 
                                                                >> 7U) 
                                                               & (~ 
                                                                  (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                                   >> 0xeU)))))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                    >> 0xcU)))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted 
                                                                    >> 0xfU) 
                                                                   & (~ 
                                                                      (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                                       >> 0xeU)))))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted))
                                                : vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted));
    }
    if (((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__memory_to_writeBack_IS_MUL))) {
        __Vtemp_h75ebc642__0[0U] = (IData)(vlSelf->__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp_h75ebc642__0[1U] = (((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
                                                            >> 0x33U))))) 
                                     << 0x14U) | (IData)(
                                                         (vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
                                                          >> 0x20U)));
        __Vtemp_h75ebc642__0[2U] = (3U & ((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
                                                                 >> 0x33U))))) 
                                          >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp_h7745e5b2__0, vlSelf->__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,32, __Vtemp_h604d3819__0, __Vtemp_h7745e5b2__0, 0x20U);
        VL_ADD_W(3, __Vtemp_ha4e02b11__0, __Vtemp_h75ebc642__0, __Vtemp_h604d3819__0);
        vlSelf->__PVT___zz_decode_RS2_2 = ((0U == (3U 
                                                   & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                      >> 0xcU)))
                                            ? (IData)(vlSelf->__PVT__memory_to_writeBack_MUL_LOW)
                                            : __Vtemp_ha4e02b11__0[1U]);
    }
    vlSelf->__PVT__writeBack_arbitration_flushIt = 0U;
    vlSelf->__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushIt = 1U;
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1032) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1077) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error 
            = vlSelf->__PVT__dataCache_1__DOT__loader_error;
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address 
            = (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
               >> 0xcU);
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x7fU & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                        >> 5U));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid 
            = (1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_killReg)));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        if (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr) 
             & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits))) {
            vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 1U;
        }
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 1U;
    }
    vlSelf->__PVT__execute_CsrPlugin_readInstruction 
        = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
            & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE));
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__15(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__15\n"); );
    // Body
    vlSelf->__PVT__execute_CsrPlugin_writeInstruction 
        = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
            & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 1U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3264) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_773) {
        if (vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_833) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_835) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3008) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_4032) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isValid)) 
               | (~ (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR))))) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    vlSelf->__PVT__when_HazardSimplePlugin_l45_2 = 
        ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid 
        = ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE));
    vlSelf->__PVT__execute_arbitration_haltByOther = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid) 
         & (IData)(vlSelf->__PVT__execute_arbitration_isValid))) {
        vlSelf->__PVT__execute_arbitration_haltByOther = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_cpu_flush_valid = 
        ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_MEMORY_MANAGMENT));
    vlSelf->__PVT__when_HazardSimplePlugin_l57_2 = 
        ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSelf->__PVT__when_CsrPlugin_l1157 = ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
                                           & (2U == (IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL)));
    vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l239) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2;
    vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = 0U;
    vlSelf->lastStageRegFileWrite_payload_data = vlSelf->__PVT___zz_decode_RS2_2;
    if (vlSelf->__PVT___zz_7) {
        vlSelf->lastStageRegFileWrite_payload_data = 0U;
    }
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack 
        = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack;
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 1U;
        vlSelf->__PVT__writeBack_arbitration_removeIt = 0U;
        vlSelf->__PVT__writeBack_arbitration_removeIt = 1U;
    } else {
        vlSelf->__PVT__writeBack_arbitration_removeIt = 0U;
    }
    if (vlSelf->__PVT__writeBack_arbitration_flushIt) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 0U;
        vlSelf->__PVT__writeBack_arbitration_removeIt = 1U;
    }
    vlSelf->__PVT__memory_arbitration_isFlushed = ((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                                                   | (0U 
                                                      != 
                                                      ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                                                       << 1U)));
    vlSelf->__PVT__execute_arbitration_isFlushed = 
        ((0U != (((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                  << 1U) | (IData)(vlSelf->__PVT__memory_arbitration_flushNext))) 
         | (0U != ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                   << 2U)));
    vlSelf->__PVT__dataCache_1__DOT___zz_2 = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_2 = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_1 = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__execute_arbitration_haltItself = 0U;
    if ((((IData)(vlSelf->__PVT__dataCache_1_io_cpu_flush_valid) 
          & (~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_flush_ready))) 
         | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt))) {
        vlSelf->__PVT__execute_arbitration_haltItself = 1U;
    }
    if (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR))) {
        if (((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
             | (IData)(vlSelf->__PVT__memory_arbitration_isValid))) {
            vlSelf->__PVT__execute_arbitration_haltItself = 1U;
        }
    }
    vlSelf->__PVT__CsrPlugin_selfException_payload_code = 0U;
    vlSelf->__PVT__CsrPlugin_selfException_valid = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1157) {
        vlSelf->__PVT__CsrPlugin_selfException_payload_code = 0xbU;
        vlSelf->__PVT__CsrPlugin_selfException_valid = 1U;
    }
    if (vlSelf->__PVT__when_IBusCachedPlugin_l250) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch) 
           & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)));
    if (vlSelf->__PVT__when_IBusCachedPlugin_l250) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3 = 1U;
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch = 1U;
    }
    vlSelf->__PVT__when_IBusCachedPlugin_l256 = (((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                  & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                                     | ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                                        & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                                           | (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute)))))) 
                                                 & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3)));
    vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = 0U;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid)))) {
                    vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = 1U;
                }
            }
        }
        vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = 1U;
        if (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_valid 
                = (1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__memCmdSent)));
            if ((1U & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)
                        ? (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid))
                        : (IData)(vlSelf->__PVT___zz_dBus_rsp_valid)))) {
                vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = 0U;
            }
        } else if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004) {
            if (vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr) {
                vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = 1U;
            }
            if ((1U & ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                       | (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid))))) {
                vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__memCmdSent)))) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = 1U;
        }
    } else {
        vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = 1U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = 0U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = 0U;
        vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = 0U;
    }
    vlSelf->__PVT___zz_memory_DivPlugin_rs2 = ((vlSelf->__PVT__decode_to_execute_RS2 
                                                >> 0x1fU) 
                                               & (IData)(vlSelf->__PVT__decode_to_execute_IS_RS2_SIGNED));
    if (vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset) {
        vlSelf->IBusCachedPlugin_fetchPc_pcReg = 0U;
    } else if (((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted) 
                & (((IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
                    | (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction)) 
                   | (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))) {
        vlSelf->IBusCachedPlugin_fetchPc_pcReg = vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc;
    }
    vlSelf->__PVT__execute_MulPlugin_aHigh = ((0x10000U 
                                               & ((((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 0xcU))) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                           >> 0xcU)))) 
                                                   << 0x10U) 
                                                  & (vlSelf->__PVT__decode_to_execute_RS1 
                                                     >> 0xfU))) 
                                              | (vlSelf->__PVT__decode_to_execute_RS1 
                                                 >> 0x10U));
    vlSelf->__PVT__execute_MulPlugin_bHigh = (((IData)(
                                                       ((0x1000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSelf->__PVT__decode_to_execute_INSTRUCTION)) 
                                                        & (vlSelf->__PVT__decode_to_execute_RS2 
                                                           >> 0x1fU))) 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__decode_to_execute_RS2 
                                                 >> 0x10U));
    if ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))) {
        vlSelf->__PVT__execute_BranchPlugin_branch_src2 
            = (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                            >> 0x1fU))) << 0xcU) | 
               (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                >> 0x14U));
    } else {
        vlSelf->__PVT__execute_BranchPlugin_branch_src2 
            = ((2U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                ? (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                >> 0x1fU))) << 0x15U) 
                   | ((0x100000U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                    >> 0xbU)) | ((0xff000U 
                                                  & vlSelf->__PVT__decode_to_execute_INSTRUCTION) 
                                                 | ((0x800U 
                                                     & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                          >> 0x14U))))))
                : (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                >> 0x1fU))) << 0xdU) 
                   | ((0x1000U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                  >> 0x13U)) | ((0x800U 
                                                 & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 7U)))))));
        if (vlSelf->__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) {
            vlSelf->__PVT__execute_BranchPlugin_branch_src2 = 4U;
        }
    }
}

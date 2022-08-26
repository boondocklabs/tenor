// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim_VexRiscv.h"

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__4(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__4\n"); );
    // Body
    vlSelf->__Vdlyvset__RegFilePlugin_regFile__v0 = 0U;
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0 = 0U;
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0U;
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0U;
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0U;
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0U;
    vlSelf->__Vdly__CsrPlugin_minstret = vlSelf->__PVT__CsrPlugin_minstret;
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
        = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter;
    vlSelf->__Vdly__IBusCachedPlugin_rspCounter = vlSelf->__PVT__IBusCachedPlugin_rspCounter;
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
        = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0U;
    vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0U;
    vlSelf->__Vdly__DBusCachedPlugin_rspCounter = vlSelf->__PVT__DBusCachedPlugin_rspCounter;
    vlSelf->__Vdly___zz_dBus_cmd_ready = vlSelf->__PVT___zz_dBus_cmd_ready;
    vlSelf->__Vdly__CsrPlugin_mstatus_MIE = vlSelf->__PVT__CsrPlugin_mstatus_MIE;
    vlSelf->__Vdly___zz_iBusWishbone_ADR = vlSelf->__PVT___zz_iBusWishbone_ADR;
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start;
    vlSelf->__Vdly__dataCache_1__DOT__loader_error 
        = vlSelf->__PVT__dataCache_1__DOT__loader_error;
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone;
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l824) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute = 1U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation 
            = vlSelf->__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation;
    }
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid 
        = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid;
    if (vlSelf->__PVT___zz_1) {
        vlSelf->__Vdlyvval__RegFilePlugin_regFile__v0 
            = vlSelf->lastStageRegFileWrite_payload_data;
        vlSelf->__Vdlyvset__RegFilePlugin_regFile__v0 = 1U;
        vlSelf->__Vdlyvdim0__RegFilePlugin_regFile__v0 
            = vlSelf->lastStageRegFileWrite_payload_address;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite = 1U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead = 1U;
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation 
            = vlSelf->__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation;
    }
    if (vlSelf->__PVT__dataCache_1__DOT___zz_2) {
        vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_tags__v0 
            = ((vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address 
                << 2U) | (((IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error) 
                           << 1U) | (IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid)));
        vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0 = 1U;
        vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_tags__v0 
            = vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address;
    }
    if ((((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask) 
          >> 3U) & (IData)(vlSelf->__PVT__dataCache_1__DOT___zz_1))) {
        vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol3__v0 
            = (vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
               >> 0x18U);
        vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0 = 1U;
        vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol3__v0 
            = vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__8(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__8\n"); );
    // Body
    if (vlSelf->__Vdlyvset__RegFilePlugin_regFile__v0) {
        vlSelf->RegFilePlugin_regFile[vlSelf->__Vdlyvdim0__RegFilePlugin_regFile__v0] 
            = vlSelf->__Vdlyvval__RegFilePlugin_regFile__v0;
    }
    vlSelf->__PVT__CsrPlugin_minstret = vlSelf->__Vdly__CsrPlugin_minstret;
    vlSelf->__PVT__IBusCachedPlugin_rspCounter = vlSelf->__Vdly__IBusCachedPlugin_rspCounter;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex 
        = vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter 
        = vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter;
    vlSelf->__PVT__DBusCachedPlugin_rspCounter = vlSelf->__Vdly__DBusCachedPlugin_rspCounter;
    vlSelf->__PVT___zz_dBus_cmd_ready = vlSelf->__Vdly___zz_dBus_cmd_ready;
    vlSelf->__PVT___zz_iBusWishbone_ADR = vlSelf->__Vdly___zz_iBusWishbone_ADR;
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__16(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__16\n"); );
    // Body
    vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 0U;
    if ((0U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                      >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 1U;
    } else if ((1U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 3U;
    } else if ((2U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 0xfU;
    }
    vlSelf->__PVT___zz_execute_SRC2_5 = ((0U == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                          ? vlSelf->__PVT__decode_to_execute_RS2
                                          : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                              ? (((- (IData)(
                                                             (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x14U))
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                           >> 7U))))
                                                  : vlSelf->__PVT__decode_to_execute_PC)));
    vlSelf->__PVT___zz_execute_SRC1 = ((0U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                        ? vlSelf->__PVT__decode_to_execute_RS1
                                        : ((2U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                            ? 4U : 
                                           ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                             ? (0xfffff000U 
                                                & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                                             : (0x1fU 
                                                & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xfU)))));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1;
    }
    vlSelf->__PVT__memory_arbitration_removeIt = 0U;
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    }
    if (vlSelf->__PVT__memory_arbitration_isFlushed) {
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    vlSelf->__PVT__execute_arbitration_removeIt = 0U;
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
        = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
    }
    if (vlSelf->__PVT__execute_arbitration_isFlushed) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
    }
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 1U;
    }
    if (vlSelf->__PVT__execute_arbitration_isFlushed) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    vlSelf->__PVT__execute_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__execute_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l244) {
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0xcU;
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
            = vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    } else {
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l256) {
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 1U;
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
            = vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError;
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4 = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid) 
         | (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid))) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = 1U;
    }
    vlSelf->__PVT__writeBack_arbitration_haltItself = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
         & (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt))) {
        vlSelf->__PVT__writeBack_arbitration_haltItself = 1U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                ? (vlSelf->__PVT__CsrPlugin_csrMapping_readDataInit 
                   & (~ vlSelf->__PVT___zz_execute_SRC1))
                : (vlSelf->__PVT__CsrPlugin_csrMapping_readDataInit 
                   | vlSelf->__PVT___zz_execute_SRC1))
            : vlSelf->__PVT___zz_execute_SRC1);
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffff8U & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((4U & (vlSelf->__PVT___zz_execute_SRC1 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT___zz_execute_SRC1 
                                          >> 0x1dU)) 
                                   | (vlSelf->__PVT___zz_execute_SRC1 
                                      >> 0x1fU))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffffc7U & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x20U & (vlSelf->__PVT___zz_execute_SRC1 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT___zz_execute_SRC1 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT___zz_execute_SRC1 
                                               >> 0x19U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffe3fU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x100U & (vlSelf->__PVT___zz_execute_SRC1 
                         >> 0xfU)) | ((0x80U & (vlSelf->__PVT___zz_execute_SRC1 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->__PVT___zz_execute_SRC1 
                                                  >> 0x13U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffff1ffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x800U & (vlSelf->__PVT___zz_execute_SRC1 
                         >> 9U)) | ((0x400U & (vlSelf->__PVT___zz_execute_SRC1 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->__PVT___zz_execute_SRC1 
                                                 >> 0xdU)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffff8fffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x4000U & (vlSelf->__PVT___zz_execute_SRC1 
                          >> 3U)) | ((0x2000U & (vlSelf->__PVT___zz_execute_SRC1 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->__PVT___zz_execute_SRC1 
                                                   >> 7U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffc7fffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x20000U & (vlSelf->__PVT___zz_execute_SRC1 
                           << 3U)) | ((0x10000U & (vlSelf->__PVT___zz_execute_SRC1 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->__PVT___zz_execute_SRC1 
                                          >> 1U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffe3ffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x100000U & (vlSelf->__PVT___zz_execute_SRC1 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->__PVT___zz_execute_SRC1 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->__PVT___zz_execute_SRC1 
                                         << 5U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xff1fffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x800000U & (vlSelf->__PVT___zz_execute_SRC1 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->__PVT___zz_execute_SRC1 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->__PVT___zz_execute_SRC1 
                                               << 0xbU)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xf8ffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x4000000U & (vlSelf->__PVT___zz_execute_SRC1 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->__PVT___zz_execute_SRC1 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->__PVT___zz_execute_SRC1 
                                                 << 0x11U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xc7ffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x20000000U & (vlSelf->__PVT___zz_execute_SRC1 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->__PVT___zz_execute_SRC1 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->__PVT___zz_execute_SRC1 
                                                  << 0x17U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0x3fffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((vlSelf->__PVT___zz_execute_SRC1 << 0x1fU) 
              | (0x40000000U & (vlSelf->__PVT___zz_execute_SRC1 
                                << 0x1dU))));
    vlSelf->__PVT__execute_BranchPlugin_eq = (vlSelf->__PVT___zz_execute_SRC1 
                                              == vlSelf->__PVT___zz_execute_SRC2_5);
    vlSelf->__PVT__execute_SrcPlugin_addSub = ((vlSelf->__PVT___zz_execute_SRC1 
                                                + ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                    ? 
                                                   (~ vlSelf->__PVT___zz_execute_SRC2_5)
                                                    : vlSelf->__PVT___zz_execute_SRC2_5)) 
                                               + ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                   ? 1U
                                                   : 0U));
    if (vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
        vlSelf->__PVT__execute_SrcPlugin_addSub = vlSelf->__PVT___zz_execute_SRC1;
    }
    vlSelf->__PVT__decode_arbitration_isFlushed = (
                                                   (0U 
                                                    != 
                                                    (((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->__PVT__memory_arbitration_flushNext) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->__PVT__execute_arbitration_flushNext)))) 
                                                   | (0U 
                                                      != 
                                                      ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                                                       << 3U)));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 1U;
    }
}

extern const VlUnpacked<VlWide<3>/*71:0*/, 4> Vsim__ConstPool__TABLE_h70ffaf08_0;
extern const VlUnpacked<VlWide<3>/*95:0*/, 4> Vsim__ConstPool__TABLE_h5aae0e3d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h5df815ea_0;

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__18(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__18\n"); );
    // Init
    CData/*1:0*/ __Vtableidx3;
    CData/*1:0*/ __Vtableidx7;
    CData/*6:0*/ __Vtableidx24;
    CData/*6:0*/ __Vtableidx25;
    // Body
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid 
        = ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
           & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)));
    vlSelf->lastStageIsFiring = vlSelf->__PVT__writeBack_arbitration_isFiring;
    vlSelf->lastStageRegFileWrite_valid = ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                           & (IData)(vlSelf->__PVT__writeBack_arbitration_isFiring));
    if (vlSelf->__PVT___zz_7) {
        vlSelf->lastStageRegFileWrite_valid = 1U;
    }
    vlSelf->__PVT__memory_DivPlugin_div_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__memory_DivPlugin_div_counter_willClear = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l664 
        = ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid) 
           & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)));
    vlSelf->__PVT__execute_arbitration_isStuck = ((IData)(vlSelf->__PVT__execute_arbitration_haltItself) 
                                                  | ((IData)(vlSelf->__PVT__execute_arbitration_haltByOther) 
                                                     | ((IData)(vlSelf->__PVT__memory_arbitration_isStuck) 
                                                        | (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself))));
    vlSelf->__PVT___zz_execute_BRANCH_COND_RESULT_1 
        = ((0U != (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
           & ((2U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
              | ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
                 | ((0U == (7U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                  >> 0xcU))) ? (IData)(vlSelf->__PVT__execute_BranchPlugin_eq)
                     : ((1U == (7U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0xcU))) ? 
                        (~ (IData)(vlSelf->__PVT__execute_BranchPlugin_eq))
                         : ((5U == (5U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xcU)))
                             ? (~ (IData)(vlSelf->__PVT__execute_SrcPlugin_less))
                             : (IData)(vlSelf->__PVT__execute_SrcPlugin_less)))))));
    vlSelf->__PVT___zz_decode_RS2 = ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
                                      ? ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? (vlSelf->__PVT___zz_execute_SRC1 
                                             & vlSelf->__PVT___zz_execute_SRC2_5)
                                          : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                              ? (vlSelf->__PVT___zz_execute_SRC1 
                                                 | vlSelf->__PVT___zz_execute_SRC2_5)
                                              : (vlSelf->__PVT___zz_execute_SRC1 
                                                 ^ vlSelf->__PVT___zz_execute_SRC2_5)))
                                      : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
                                          ? (IData)(vlSelf->__PVT__execute_SrcPlugin_less)
                                          : vlSelf->__PVT__execute_SrcPlugin_addSub));
    if (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR))) {
        vlSelf->__PVT___zz_decode_RS2 = vlSelf->__PVT__CsrPlugin_csrMapping_readDataInit;
    }
    if (vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__banks_0[vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0] 
            = vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0;
    }
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = (1U 
                                                 & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 0xaU));
    if ((0U == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 7U)))) {
        vlSelf->__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    __Vtableidx3 = (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                          >> 0x15U));
    vlSelf->__PVT__decode_SHIFT_CTRL_string[0U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx3][0U];
    vlSelf->__PVT__decode_SHIFT_CTRL_string[1U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx3][1U];
    vlSelf->__PVT__decode_SHIFT_CTRL_string[2U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx3][2U];
    __Vtableidx7 = (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                          >> 1U));
    vlSelf->__PVT__decode_SRC1_CTRL_string[0U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx7][0U];
    vlSelf->__PVT__decode_SRC1_CTRL_string[1U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx7][1U];
    vlSelf->__PVT__decode_SRC1_CTRL_string[2U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx7][2U];
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload 
        = (vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload 
           + ((2U == (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                            >> 0x17U))) ? (((- (IData)(
                                                       (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                        >> 0x1fU))) 
                                            << 0x15U) 
                                           | ((0x100000U 
                                               & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                  >> 0xbU)) 
                                              | ((0xff000U 
                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                 | ((0x800U 
                                                     & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                          >> 0x14U))))))
               : (((- (IData)((vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                               >> 0x1fU))) << 0xdU) 
                  | ((0x1000U & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                 >> 0x13U)) | ((0x800U 
                                                & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                        >> 7U))))))));
    __Vtableidx24 = ((0x40U & ((~ (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 5U)) << 6U)) 
                     | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l48_2) 
                         << 5U) | ((0x10U & ((~ (IData)(vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                             << 4U)) 
                                   | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l57_2) 
                                       << 3U) | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l48_1) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->__PVT__when_HazardSimplePlugin_l57_1)))))));
    vlSelf->__PVT__HazardSimplePlugin_src0Hazard = 
        Vsim__ConstPool__TABLE_h5df815ea_0[__Vtableidx24];
    __Vtableidx25 = ((0x40U & ((~ (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0xfU)) << 6U)) 
                     | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l51_2) 
                         << 5U) | ((0x10U & ((~ (IData)(vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                             << 4U)) 
                                   | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l57_2) 
                                       << 3U) | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l51_1) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->__PVT__when_HazardSimplePlugin_l57_1)))))));
    vlSelf->__PVT__HazardSimplePlugin_src1Hazard = 
        Vsim__ConstPool__TABLE_h5df815ea_0[__Vtableidx25];
    vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch 
        = ((2U == (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                         >> 0x17U))) | (IData)(((0x800000U 
                                                 == 
                                                 (0x1800000U 
                                                  & vlSelf->__PVT___zz_decode_IS_RS2_SIGNED)) 
                                                & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 0x1fU))));
    if ((1U & ((2U == (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                             >> 0x17U))) ? (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x15U)
                : (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                   >> 8U)))) {
        vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache_io_flush 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
           & vlSelf->__PVT___zz_decode_IS_RS2_SIGNED);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid));
    vlSelf->__PVT__decodeExceptionPort_valid = ((IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                                                & (~ 
                                                   ((0x17U 
                                                     == 
                                                     (0x5fU 
                                                      & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                    | ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                       | ((3U 
                                                           == 
                                                           (0x106fU 
                                                            & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                          | ((0x1073U 
                                                              == 
                                                              (0x107fU 
                                                               & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                             | ((0x2073U 
                                                                 == 
                                                                 (0x207fU 
                                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                | ((0x4063U 
                                                                    == 
                                                                    (0x407fU 
                                                                     & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                   | ((0x2013U 
                                                                       == 
                                                                       (0x207fU 
                                                                        & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                      | ((0x23U 
                                                                          == 
                                                                          (0x603fU 
                                                                           & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                         | ((3U 
                                                                             == 
                                                                             (0x207fU 
                                                                              & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                            | ((3U 
                                                                                == 
                                                                                (0x505fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                               | ((0x63U 
                                                                                == 
                                                                                (0x707bU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x607fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xfc00007fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x500fU 
                                                                                == 
                                                                                (0x1f0707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x5013U 
                                                                                == 
                                                                                (0xbc00707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x1013U 
                                                                                == 
                                                                                (0xfc00307fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10500073U 
                                                                                == vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                | (0x73U 
                                                                                == vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))));
    vlSelf->__PVT___zz_1 = 0U;
    if (vlSelf->lastStageRegFileWrite_valid) {
        vlSelf->__PVT___zz_1 = 1U;
    }
    vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext 
        = (((0x21U == (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value)) 
            & (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement))
            ? 0U : (0x3fU & ((IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value) 
                             + (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement))));
    if (vlSelf->__PVT__memory_DivPlugin_div_counter_willClear) {
        vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext = 0U;
    }
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l664) {
        vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid = 1U;
    }
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__19(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__19\n"); );
    // Init
    CData/*3:0*/ __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload;
    CData/*3:0*/ __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1;
    CData/*1:0*/ __PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code;
    // Body
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l664) {
        vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload 
            = (0x7fU & (vlSelf->__PVT__execute_SrcPlugin_addSub 
                        >> 5U));
        vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload 
            = (0x3ffU & (vlSelf->__PVT__execute_SrcPlugin_addSub 
                         >> 2U));
        vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = 1U;
    }
    vlSelf->__PVT__execute_CsrPlugin_writeEnable = 
        ((IData)(vlSelf->__PVT__execute_CsrPlugin_writeInstruction) 
         & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)));
    vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_RegFilePlugin_regFile_port1;
    if (vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0x14U)))) {
            vlSelf->__PVT__decode_RS2 = vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45) {
        if (((0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x14U)))) {
            vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_decode_RS2_2;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSelf->__PVT__when_HazardSimplePlugin_l51_1) {
                vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_decode_RS2_1;
            }
        }
    }
    vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_RegFilePlugin_regFile_port0;
    if (vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xfU)))) {
            vlSelf->__PVT__decode_RS1 = vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45) {
        if (((0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0xfU)))) {
            vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_decode_RS2_2;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSelf->__PVT__when_HazardSimplePlugin_l48_1) {
                vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_decode_RS2_1;
            }
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45_2) {
        if (vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSelf->__PVT__when_HazardSimplePlugin_l51_2) {
                vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_decode_RS2;
            }
            if (vlSelf->__PVT__when_HazardSimplePlugin_l48_2) {
                vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_decode_RS2;
            }
        }
    }
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if ((1U & (~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                  >> 7U)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_cache_io_flush) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    vlSelf->__PVT__decode_arbitration_haltByOther = 0U;
    if (((IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
         & ((IData)(vlSelf->__PVT__HazardSimplePlugin_src0Hazard) 
            | (IData)(vlSelf->__PVT__HazardSimplePlugin_src1Hazard)))) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    if ((((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
          & (1U == (IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL))) 
         | (((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
             & (1U == (IData)(vlSelf->__PVT__execute_to_memory_ENV_CTRL))) 
            | ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
               & (1U == (IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL)))))) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    __PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code 
        = (((IData)(vlSelf->__PVT__decodeExceptionPort_valid) 
            << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    vlSelf->__PVT___zz_when = (0U != (((IData)(vlSelf->__PVT__decodeExceptionPort_valid) 
                                       << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid)));
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid) 
           & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)));
    vlSelf->__PVT___zz_decode_to_execute_FORMAL_PC_NEXT 
        = ((IData)(4U) + vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload);
    vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid 
        = (0U != (((IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid) 
                   << 3U) | (((IData)(vlSelf->__PVT__BranchPlugin_jumpInterface_valid) 
                              << 2U) | (((IData)(vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) 
                                         << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid)))));
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload 
        = (((IData)(vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid) 
            << 3U) | (((IData)(vlSelf->__PVT__BranchPlugin_jumpInterface_valid) 
                       << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid) 
                                  << 1U) | (IData)(vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid))));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 1U;
    }
    vlSelf->__PVT__decode_arbitration_isStuckByOthers 
        = ((IData)(vlSelf->__PVT__decode_arbitration_haltByOther) 
           | (((IData)(vlSelf->__PVT__execute_arbitration_isStuck) 
               | (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
              | (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)));
    vlSelf->__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 
        = ((IData)(__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
           & (~ ((IData)(__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
                 - (IData)(1U))));
    vlSelf->__PVT__decode_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid) {
        vlSelf->__PVT___zz_decode_to_execute_FORMAL_PC_NEXT 
            = vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload;
        vlSelf->__PVT__decode_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__decode_arbitration_removeIt = 0U;
    if (vlSelf->__PVT___zz_when) {
        vlSelf->__PVT__decode_arbitration_flushNext = 1U;
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    }
    if (vlSelf->__PVT__decode_arbitration_isFlushed) {
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 0U;
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
    }
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 
        = ((IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
           & (~ ((IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
                 - (IData)(1U))));
    vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED = 
        ((IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)
          ? vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen
          : vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
                 & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt))));
    vlSelf->__PVT__when_CsrPlugin_l998 = (1U & ((~ (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_active)) 
                                                | (IData)(vlSelf->__PVT__decode_arbitration_removeIt)));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush = 
        (((IData)(vlSelf->__PVT__decode_arbitration_removeIt) 
          | ((IData)(vlSelf->__PVT__decode_arbitration_flushNext) 
             & (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)))) 
         | (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
    vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 0U;
    if ((0U != (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                 << 3U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                            << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                       << 1U) | (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1032) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1077) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6 
        = (((IData)((0U != (0xcU & (IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1)))) 
            << 1U) | (IData)((0U != (0xaU & (IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1)))));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 1U;
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready 
            = (1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)));
    } else {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_valid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_fetcherHalt)) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc = (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc) 
                                                   << 2U));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
            = vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
            = ((0U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                ? vlSelf->__PVT__memory_to_writeBack_PC
                : ((1U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                    ? vlSelf->__PVT__CsrPlugin_jumpInterface_payload
                    : ((2U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                        ? vlSelf->__PVT__execute_to_memory_BRANCH_CALC
                        : vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload)));
    }
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc = (0xfffffffcU 
                                                  & vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc);
}

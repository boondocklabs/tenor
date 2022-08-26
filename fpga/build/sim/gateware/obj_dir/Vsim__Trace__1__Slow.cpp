// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


VL_ATTR_COLD void Vsim___024root__trace_full_sub_5(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+757,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
    bufp->fullBit(oldp+758,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
    bufp->fullBit(oldp+759,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
    bufp->fullBit(oldp+760,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
    bufp->fullBit(oldp+761,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
    bufp->fullBit(oldp+762,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
    bufp->fullBit(oldp+763,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
    bufp->fullBit(oldp+764,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
    bufp->fullBit(oldp+765,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
    bufp->fullBit(oldp+766,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
    bufp->fullBit(oldp+767,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
    bufp->fullBit(oldp+768,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
    bufp->fullBit(oldp+769,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
    bufp->fullCData(oldp+770,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                     >> 0xbU))),2);
    bufp->fullBit(oldp+771,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
                                   | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))))));
    bufp->fullBit(oldp+772,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
    bufp->fullQData(oldp+773,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 0x1aU)))
                                ? 0x4e4f4e4520ULL : 
                               ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                              >> 0x1aU)))
                                 ? 0x5852455420ULL : 
                                ((2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 0x1aU)))
                                  ? 0x4543414c4cULL
                                  : 0x3f3f3f3f3fULL)))),40);
    bufp->fullWData(oldp+775,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
    bufp->fullQData(oldp+778,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 0x12U)))
                                ? 0x584f525f31ULL : 
                               ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                              >> 0x12U)))
                                 ? 0x4f525f3120ULL : 
                                ((2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 0x12U)))
                                  ? 0x414e445f31ULL
                                  : 0x3f3f3f3f3fULL)))),40);
    bufp->fullIData(oldp+780,(((0x200U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                ? ((0x100U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                    ? 0x504320U : 0x494d53U)
                                : ((0x100U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                    ? 0x494d49U : 0x525320U))),24);
    bufp->fullQData(oldp+781,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                             >> 6U)))
                                ? 0x4144445f53554220ULL
                                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                 >> 6U)))
                                    ? 0x534c545f534c5455ULL
                                    : ((2U == (3U & 
                                               (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                >> 6U)))
                                        ? 0x4249545749534520ULL
                                        : 0x3f3f3f3f3f3f3f3fULL)))),64);
    bufp->fullWData(oldp+783,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
    bufp->fullQData(oldp+786,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                ? 0x4e4f4e4520ULL : 
                               ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                 ? 0x5852455420ULL : 
                                ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                  ? 0x4543414c4cULL
                                  : 0x3f3f3f3f3fULL)))),40);
    bufp->fullQData(oldp+788,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                ? 0x4e4f4e4520ULL : 
                               ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                 ? 0x5852455420ULL : 
                                ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                  ? 0x4543414c4cULL
                                  : 0x3f3f3f3f3fULL)))),40);
    bufp->fullQData(oldp+790,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                ? 0x4e4f4e4520ULL : 
                               ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                 ? 0x5852455420ULL : 
                                ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                  ? 0x4543414c4cULL
                                  : 0x3f3f3f3f3fULL)))),40);
    bufp->fullIData(oldp+792,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                    ? 0x4a414c52U : 0x4a414c20U)
                                : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                    ? 0x42202020U : 0x494e4320U))),32);
    bufp->fullWData(oldp+793,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
    bufp->fullWData(oldp+796,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
    bufp->fullIData(oldp+799,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                    ? 0x504320U : 0x494d53U)
                                : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                    ? 0x494d49U : 0x525320U))),24);
    bufp->fullWData(oldp+800,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
    bufp->fullQData(oldp+803,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                ? 0x4144445f53554220ULL
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                    ? 0x534c545f534c5455ULL
                                    : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                        ? 0x4249545749534520ULL
                                        : 0x3f3f3f3f3f3f3f3fULL)))),64);
    bufp->fullQData(oldp+805,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                ? 0x584f525f31ULL : 
                               ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                 ? 0x4f525f3120ULL : 
                                ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                  ? 0x414e445f31ULL
                                  : 0x3f3f3f3f3fULL)))),40);
    bufp->fullIData(oldp+807,(((0x1000000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                ? ((0x800000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                    ? 0x4a414c52U : 0x4a414c20U)
                                : ((0x800000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                    ? 0x42202020U : 0x494e4320U))),32);
    bufp->fullWData(oldp+808,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
    bufp->fullWData(oldp+811,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
    bufp->fullWData(oldp+814,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
    bufp->fullBit(oldp+817,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
    bufp->fullBit(oldp+818,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
    bufp->fullIData(oldp+819,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
    bufp->fullBit(oldp+820,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
    bufp->fullBit(oldp+821,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    bufp->fullCData(oldp+822,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
    bufp->fullBit(oldp+823,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                      >> 7U)))));
    bufp->fullBit(oldp+824,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
    bufp->fullBit(oldp+825,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
    bufp->fullBit(oldp+826,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
    bufp->fullBit(oldp+827,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
    bufp->fullBit(oldp+828,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
    bufp->fullCData(oldp+829,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
    bufp->fullBit(oldp+830,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
                                   | (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                         >> 7U))))));
    bufp->fullCData(oldp+831,((0x7fU & ((0x80U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                         ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                            >> 5U) : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
    bufp->fullBit(oldp+832,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                   >> 7U))));
    bufp->fullIData(oldp+833,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+834,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                          >> 2U)) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
    bufp->fullBit(oldp+835,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
    bufp->fullBit(oldp+836,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
    bufp->fullBit(oldp+837,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                   >> 1U))));
    bufp->fullIData(oldp+838,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                           >> 2U))),20);
    bufp->fullBit(oldp+839,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
    bufp->fullBit(oldp+840,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
    bufp->fullBit(oldp+841,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
    bufp->fullBit(oldp+842,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
    bufp->fullBit(oldp+843,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
    bufp->fullBit(oldp+844,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
    bufp->fullBit(oldp+845,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
    bufp->fullBit(oldp+846,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
    bufp->fullBit(oldp+847,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
    bufp->fullBit(oldp+848,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
    bufp->fullCData(oldp+849,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
    bufp->fullBit(oldp+850,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
    bufp->fullBit(oldp+851,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
    bufp->fullCData(oldp+852,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
    bufp->fullBit(oldp+853,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
    bufp->fullBit(oldp+854,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
    bufp->fullIData(oldp+855,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
    bufp->fullBit(oldp+856,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
    bufp->fullBit(oldp+857,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
    bufp->fullCData(oldp+858,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
    bufp->fullBit(oldp+859,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
    bufp->fullBit(oldp+860,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
    bufp->fullIData(oldp+861,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
    bufp->fullBit(oldp+862,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
    bufp->fullSData(oldp+863,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
    bufp->fullBit(oldp+864,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
    bufp->fullBit(oldp+865,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
    bufp->fullSData(oldp+866,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
    bufp->fullIData(oldp+867,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
    bufp->fullCData(oldp+868,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
    bufp->fullBit(oldp+869,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
    bufp->fullBit(oldp+870,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                   >> 1U))));
    bufp->fullIData(oldp+871,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                           >> 2U))),20);
    bufp->fullIData(oldp+872,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                << 0x18U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                              << 0x10U) 
                                             | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                                 << 8U) 
                                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
    bufp->fullBit(oldp+873,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))));
    bufp->fullBit(oldp+874,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))));
    bufp->fullBit(oldp+875,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664));
    bufp->fullBit(oldp+876,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
    bufp->fullBit(oldp+877,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
    bufp->fullCData(oldp+878,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
    bufp->fullBit(oldp+879,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                              & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                 == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                               >> 2U)))) 
                             & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                       & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))))));
}

VL_ATTR_COLD void Vsim___024root__trace_full_sub_6(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_sub_6\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+880,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
    bufp->fullBit(oldp+881,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
    bufp->fullCData(oldp+882,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
    bufp->fullBit(oldp+883,((((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                               >> 0xcU) == (0xfffffU 
                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                               >> 2U))) 
                             & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
    bufp->fullBit(oldp+884,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
    bufp->fullBit(oldp+885,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
    bufp->fullBit(oldp+886,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                             | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                  & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                 & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                    == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                  >> 2U)))) 
                                & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask) 
                                          & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
    bufp->fullCData(oldp+887,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
    bufp->fullBit(oldp+888,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
    bufp->fullBit(oldp+889,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
    bufp->fullBit(oldp+890,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824));
    bufp->fullIData(oldp+891,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
    bufp->fullBit(oldp+892,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
    bufp->fullBit(oldp+893,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
    bufp->fullBit(oldp+894,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
    bufp->fullBit(oldp+895,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
    bufp->fullBit(oldp+896,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
    bufp->fullBit(oldp+897,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
    bufp->fullBit(oldp+898,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
    bufp->fullBit(oldp+899,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
    bufp->fullBit(oldp+900,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
    bufp->fullIData(oldp+901,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
    bufp->fullIData(oldp+902,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
    bufp->fullBit(oldp+903,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
    bufp->fullBit(oldp+904,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
    bufp->fullBit(oldp+905,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
    bufp->fullBit(oldp+906,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
    bufp->fullBit(oldp+907,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
    bufp->fullBit(oldp+908,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
    bufp->fullBit(oldp+909,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
    bufp->fullBit(oldp+910,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
    bufp->fullCData(oldp+911,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
    bufp->fullBit(oldp+912,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                      >> 7U)))));
    bufp->fullBit(oldp+913,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
    bufp->fullBit(oldp+914,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
    bufp->fullBit(oldp+915,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
    bufp->fullBit(oldp+916,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                    & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                   | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                      & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
    bufp->fullBit(oldp+917,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
    bufp->fullBit(oldp+918,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                    ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))
                                    : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid)))));
    bufp->fullBit(oldp+919,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004));
    bufp->fullBit(oldp+920,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                   | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))))));
    bufp->fullBit(oldp+921,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
    bufp->fullBit(oldp+922,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
    bufp->fullBit(oldp+923,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066));
    bufp->fullBit(oldp+924,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))));
    bufp->fullBit(oldp+925,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
    bufp->fullCData(oldp+926,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                     + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
    bufp->fullCData(oldp+927,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
    bufp->fullBit(oldp+928,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
    bufp->fullBit(oldp+929,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
    bufp->fullBit(oldp+930,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
    bufp->fullBit(oldp+931,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
    bufp->fullBit(oldp+932,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
    bufp->fullBit(oldp+933,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090));
    bufp->fullBit(oldp+934,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
    bufp->fullBit(oldp+935,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
    bufp->fullBit(oldp+936,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)))));
    bufp->fullBit(oldp+937,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
    bufp->fullBit(oldp+938,(vlSelf->sim_trace));
    bufp->fullBit(oldp+939,(vlSelf->sys_clk));
    bufp->fullBit(oldp+940,(vlSelf->serial_source_valid));
    bufp->fullBit(oldp+941,(vlSelf->serial_source_ready));
    bufp->fullCData(oldp+942,(vlSelf->serial_source_data),8);
    bufp->fullBit(oldp+943,(vlSelf->serial_sink_valid));
    bufp->fullBit(oldp+944,(vlSelf->serial_sink_ready));
    bufp->fullCData(oldp+945,(vlSelf->serial_sink_data),8);
    bufp->fullBit(oldp+946,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_re));
    bufp->fullBit(oldp+947,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_do_read));
    bufp->fullSData(oldp+948,(vlSelf->serial_sink_data),10);
    bufp->fullBit(oldp+949,(((IData)(vlSelf->serial_sink_valid) 
                             & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)))));
    bufp->fullIData(oldp+950,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
    bufp->fullIData(oldp+951,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
    bufp->fullIData(oldp+952,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
    bufp->fullBit(oldp+953,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
    bufp->fullBit(oldp+954,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
    bufp->fullBit(oldp+955,((vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                             >> 0x1fU)));
    bufp->fullBit(oldp+956,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
    bufp->fullBit(oldp+957,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
    bufp->fullCData(oldp+958,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
    bufp->fullIData(oldp+959,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
    bufp->fullCData(oldp+960,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
    bufp->fullBit(oldp+961,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
    bufp->fullBit(oldp+962,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
    bufp->fullIData(oldp+963,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
    bufp->fullIData(oldp+964,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
    bufp->fullIData(oldp+965,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
    bufp->fullIData(oldp+966,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
    bufp->fullIData(oldp+967,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
    bufp->fullIData(oldp+968,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
    bufp->fullIData(oldp+969,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
    bufp->fullIData(oldp+970,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
    bufp->fullIData(oldp+971,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
    bufp->fullIData(oldp+972,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
    bufp->fullIData(oldp+973,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
    bufp->fullIData(oldp+974,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
    bufp->fullIData(oldp+975,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
    bufp->fullIData(oldp+976,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
    bufp->fullIData(oldp+977,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
    bufp->fullIData(oldp+978,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
    bufp->fullIData(oldp+979,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
    bufp->fullIData(oldp+980,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
    bufp->fullIData(oldp+981,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
    bufp->fullIData(oldp+982,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
    bufp->fullIData(oldp+983,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
    bufp->fullIData(oldp+984,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
    bufp->fullIData(oldp+985,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
    bufp->fullIData(oldp+986,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
    bufp->fullIData(oldp+987,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
    bufp->fullIData(oldp+988,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
    bufp->fullIData(oldp+989,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
    bufp->fullIData(oldp+990,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
    bufp->fullIData(oldp+991,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
    bufp->fullIData(oldp+992,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
    bufp->fullIData(oldp+993,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
    bufp->fullIData(oldp+994,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
    bufp->fullBit(oldp+995,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                             & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                             >> 2U)) 
                                == (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+996,(1U));
    bufp->fullIData(oldp+997,(0U),32);
    bufp->fullCData(oldp+998,(0xfU),4);
    bufp->fullBit(oldp+999,(0U));
    bufp->fullCData(oldp+1000,(0U),2);
    bufp->fullCData(oldp+1001,(0U),3);
    bufp->fullCData(oldp+1002,(1U),2);
    bufp->fullCData(oldp+1003,(2U),2);
    bufp->fullCData(oldp+1004,(3U),2);
    bufp->fullBit(oldp+1005,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fetch_isRemoved));
    bufp->fullBit(oldp+1006,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SW));
    bufp->fullBit(oldp+1007,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SR));
    bufp->fullBit(oldp+1008,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SO));
    bufp->fullBit(oldp+1009,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_SI));
    bufp->fullBit(oldp+1010,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PW));
    bufp->fullBit(oldp+1011,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PR));
    bufp->fullBit(oldp+1012,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PO));
    bufp->fullBit(oldp+1013,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_PI));
    bufp->fullCData(oldp+1014,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_fence_FM),4);
    bufp->fullCData(oldp+1015,(5U),3);
    bufp->fullBit(oldp+1016,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_exclusiveOk));
    bufp->fullBit(oldp+1017,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation));
    bufp->fullBit(oldp+1018,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBus_rsp_payload_last));
    bufp->fullBit(oldp+1019,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation));
    bufp->fullCData(oldp+1020,(2U),4);
    bufp->fullCData(oldp+1021,(0U),4);
    bufp->fullBit(oldp+1022,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_rsp_error));
    bufp->fullBit(oldp+1023,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_output_payload_isRvc));
    bufp->fullIData(oldp+1024,(0x42U),26);
}

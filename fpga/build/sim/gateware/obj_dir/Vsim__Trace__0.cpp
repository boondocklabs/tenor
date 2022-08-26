// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


void Vsim___024root__trace_chg_sub_0(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_sub_1(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_sub_2(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_sub_3(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_sub_4(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_sub_5(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_sub_6(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsim___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_top_0\n"); );
    // Init
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsim___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_sub_1((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_sub_2((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_sub_3((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_sub_4((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_sub_5((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_chg_sub_6((&vlSymsp->TOP), bufp);
}

void Vsim___024root__trace_chg_sub_0(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__sim.__PVT__builder_array_muxed7),2);
        bufp->chgBit(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable));
        bufp->chgCData(oldp+3,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_payload_data),8);
        bufp->chgBit(oldp+4,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0))));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__sim.__PVT__main_int_rst));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__sim.__PVT__main_soc_rst));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_reset_storage) 
                                    >> 1U))));
        bufp->chgCData(oldp+8,(vlSymsp->TOP__sim.__PVT__main_reset_storage),2);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__main_reset_re));
        bufp->chgIData(oldp+10,(vlSymsp->TOP__sim.__PVT__main_scratch_storage),32);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim.__PVT__main_scratch_re));
        bufp->chgIData(oldp+12,(vlSymsp->TOP__sim.__PVT__main_bus_errors),32);
        bufp->chgBit(oldp+13,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_bus_errors_we));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__sim.__PVT__main_bus_errors_re));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__sim.__PVT__builder_error));
        bufp->chgBit(oldp+16,(((IData)(vlSymsp->TOP__sim.__PVT__main_soc_rst) 
                               | ((IData)(vlSymsp->TOP__sim.__PVT__main_reset_storage) 
                                  >> 1U))));
        bufp->chgIData(oldp+17,(vlSymsp->TOP__sim.__PVT__main_interrupt),32);
        bufp->chgIData(oldp+18,(((0x3ffffff8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                 >> 2U)) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))),30);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__sim.__PVT__builder_shared_dat_r),32);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__sim.__PVT__main_ibus_ack));
        bufp->chgCData(oldp+23,(((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                  ? 7U : 2U)),3);
        bufp->chgIData(oldp+24,((((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                   ? ((0xffffffe0U 
                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                      | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                         << 2U)) : 
                                  (0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                 >> 2U)),30);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data),32);
        bufp->chgCData(oldp+26,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                  ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                  : 0xfU)),4);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sim.__PVT__main_dbus_ack));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
        bufp->chgCData(oldp+30,(((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                  ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                      ? 7U : 2U) : 0U)),3);
        bufp->chgIData(oldp+31,((0x3fffffffU & vlSymsp->TOP__sim.__PVT__builder_array_muxed0)),30);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__sim.__PVT__builder_array_muxed1),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__sim.__PVT__rom_dat0),32);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__sim.__PVT__builder_array_muxed2),4);
        bufp->chgBit(oldp+35,(((IData)(vlSymsp->TOP__sim.__PVT__builder_array_muxed3) 
                               & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel))));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim.__PVT__builder_array_muxed4));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sim.__PVT__main_simsoc_ram_bus_ack));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sim.__PVT__builder_array_muxed5));
        bufp->chgCData(oldp+39,(vlSymsp->TOP__sim.__PVT__builder_array_muxed6),3);
        bufp->chgSData(oldp+40,((0x7fffU & vlSymsp->TOP__sim.__PVT__builder_array_muxed0)),15);
        bufp->chgIData(oldp+41,(vlSymsp->TOP__sim.__PVT__sram
                                [vlSymsp->TOP__sim.__PVT__sram_adr0]),32);
        bufp->chgBit(oldp+42,(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_cyc));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_ack));
        bufp->chgSData(oldp+44,((0x7ffU & vlSymsp->TOP__sim.__PVT__builder_array_muxed0)),11);
        bufp->chgCData(oldp+45,(vlSymsp->TOP__sim.__PVT__main_ram_we),4);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_first));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_last));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re));
        bufp->chgCData(oldp+49,((0xffU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),8);
        bufp->chgBit(oldp+50,(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_we));
        bufp->chgCData(oldp+51,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_payload_data),8);
        bufp->chgBit(oldp+52,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0))));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_we));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sim.__PVT__main_uart_txfull_re));
        bufp->chgBit(oldp+55,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable)))));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_we));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim.__PVT__main_uart_rxempty_re));
        bufp->chgBit(oldp+58,((1U & (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status) 
                                      & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage)) 
                                     | (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status) 
                                         & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage)) 
                                        >> 1U)))));
        bufp->chgBit(oldp+59,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0))));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim.__PVT__main_uart_tx_pending));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim.__PVT__main_uart_tx_clear));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim.__PVT__main_uart_tx_trigger_d));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__sim.__PVT__main_uart_rx_pending));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim.__PVT__main_uart_rx_clear));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__sim.__PVT__main_uart_rx_trigger_d));
        bufp->chgCData(oldp+67,(vlSymsp->TOP__sim.__PVT__main_uart_status_status),2);
        bufp->chgBit(oldp+68,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_we));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim.__PVT__main_uart_status_re));
        bufp->chgCData(oldp+70,(vlSymsp->TOP__sim.__PVT__main_uart_pending_status),2);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_we));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__main_uart_pending_re));
        bufp->chgCData(oldp+73,(vlSymsp->TOP__sim.__PVT__main_uart_pending_r),2);
        bufp->chgBit(oldp+74,((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage))));
        bufp->chgBit(oldp+75,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage) 
                                     >> 1U))));
        bufp->chgCData(oldp+76,(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage),2);
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim.__PVT__main_uart_enable_re));
        bufp->chgBit(oldp+78,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable)))));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_we));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__sim.__PVT__main_uart_txempty_re));
        bufp->chgBit(oldp+81,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0))));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_we));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__sim.__PVT__main_uart_rxfull_re));
        bufp->chgBit(oldp+84,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0))));
        bufp->chgSData(oldp+85,((0xffU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),10);
        bufp->chgSData(oldp+86,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0),5);
        bufp->chgCData(oldp+88,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_produce),4);
        bufp->chgCData(oldp+89,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_consume),4);
        bufp->chgCData(oldp+90,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_wrport_adr),4);
        bufp->chgSData(oldp+91,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
        bufp->chgBit(oldp+92,(((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re) 
                               & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)))));
        bufp->chgCData(oldp+93,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0) 
                                          + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable)))),5);
        bufp->chgBit(oldp+94,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_first));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_last));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_syncfifo_re));
        bufp->chgBit(oldp+97,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0))));
        bufp->chgSData(oldp+98,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0),5);
        bufp->chgCData(oldp+100,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_produce),4);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_consume),4);
        bufp->chgCData(oldp+102,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_wrport_adr),4);
        bufp->chgSData(oldp+103,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
        bufp->chgBit(oldp+104,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_do_read));
        bufp->chgCData(oldp+105,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0) 
                                           + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable)))),5);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__sim.__PVT__main_timer_load_storage),32);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__sim.__PVT__main_timer_load_re));
        bufp->chgIData(oldp+108,(vlSymsp->TOP__sim.__PVT__main_timer_reload_storage),32);
        bufp->chgBit(oldp+109,(vlSymsp->TOP__sim.__PVT__main_timer_reload_re));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__sim.__PVT__main_timer_en_storage));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__sim.__PVT__main_timer_en_re));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__sim.__PVT__main_timer_update_value_storage));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__sim.__PVT__main_timer_update_value_re));
        bufp->chgIData(oldp+114,(vlSymsp->TOP__sim.__PVT__main_timer_value_status),32);
        bufp->chgBit(oldp+115,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_we));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__sim.__PVT__main_timer_value_re));
        bufp->chgBit(oldp+117,(((IData)(vlSymsp->TOP__sim.__PVT__main_timer_zero_pending) 
                                & (IData)(vlSymsp->TOP__sim.__PVT__main_timer_enable_storage))));
        bufp->chgBit(oldp+118,((0U == vlSymsp->TOP__sim.__PVT__main_timer_value)));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__sim.__PVT__main_timer_zero_pending));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__sim.__PVT__main_timer_zero_clear));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__sim.__PVT__main_timer_zero_trigger_d));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_we));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__sim.__PVT__main_timer_status_re));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_we));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__sim.__PVT__main_timer_pending_re));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__sim.__PVT__main_timer_pending_r));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__sim.__PVT__main_timer_enable_storage));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__sim.__PVT__main_timer_enable_re));
        bufp->chgIData(oldp+129,(vlSymsp->TOP__sim.__PVT__main_timer_value),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__sim.__PVT__main_bus_adr),32);
        bufp->chgCData(oldp+131,(vlSymsp->TOP__sim.__PVT__main_bus_sel),4);
        bufp->chgBit(oldp+132,(vlSymsp->TOP__sim.__PVT__main_bus_cyc));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__sim.__PVT__main_bus_stb));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__sim.__PVT__main_bus_ack));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__sim.__PVT__main_bus_we));
        bufp->chgBit(oldp+136,(vlSymsp->TOP__sim.__PVT__main_dma_reader_source_valid));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__sim.__PVT__main_core_sink_ready));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__sim.__PVT__main_dma_reader_source_last));
        bufp->chgIData(oldp+139,(vlSymsp->TOP__sim.__PVT__main_dma_reader_source_payload_data),32);
        bufp->chgBit(oldp+140,(vlSymsp->TOP__sim.__PVT__main_core_source_valid));
        bufp->chgIData(oldp+141,(vlSymsp->TOP__sim.__PVT__main_core_source_payload_data),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__sim.__PVT__main_core_data),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__sim.__PVT__main_core_counter),32);
        bufp->chgBit(oldp+144,(vlSymsp->TOP__sim.__PVT__main_dma_reader_sink_ready));
        bufp->chgIData(oldp+145,(vlSymsp->TOP__sim.__PVT__main_dma_reader_data),32);
        bufp->chgBit(oldp+146,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_status_we));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__sim.__PVT__main_status_re));
        bufp->chgBit(oldp+148,((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_control_storage))));
        bufp->chgBit(oldp+149,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_control_storage) 
                                      >> 1U))));
        bufp->chgCData(oldp+150,(vlSymsp->TOP__sim.__PVT__main_control_storage),2);
        bufp->chgBit(oldp+151,(vlSymsp->TOP__sim.__PVT__main_control_re));
        bufp->chgIData(oldp+152,(vlSymsp->TOP__sim.__PVT__main_instruction_storage),32);
        bufp->chgBit(oldp+153,(vlSymsp->TOP__sim.__PVT__main_instruction_re));
        bufp->chgIData(oldp+154,(vlSymsp->TOP__sim.__PVT__main_src_storage),32);
        bufp->chgBit(oldp+155,(vlSymsp->TOP__sim.__PVT__main_src_re));
        bufp->chgIData(oldp+156,(vlSymsp->TOP__sim.__PVT__main_dst_storage),32);
        bufp->chgBit(oldp+157,(vlSymsp->TOP__sim.__PVT__main_dst_re));
        bufp->chgIData(oldp+158,(vlSymsp->TOP__sim.__PVT__main_length_storage),32);
        bufp->chgBit(oldp+159,(vlSymsp->TOP__sim.__PVT__main_length_re));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__sim.__PVT__main_enable_storage));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__sim.__PVT__main_enable_re));
        bufp->chgIData(oldp+162,(vlSymsp->TOP__sim.__PVT__main_input_storage),32);
        bufp->chgBit(oldp+163,(vlSymsp->TOP__sim.__PVT__main_input_re));
        bufp->chgIData(oldp+164,(vlSymsp->TOP__sim.__PVT__main_output_storage),32);
        bufp->chgBit(oldp+165,(vlSymsp->TOP__sim.__PVT__main_output_re));
        bufp->chgIData(oldp+166,(vlSymsp->TOP__sim.__PVT__main_imm_storage),32);
        bufp->chgBit(oldp+167,(vlSymsp->TOP__sim.__PVT__main_imm_re));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__sim.__PVT__main_done_status));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_done_we));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__sim.__PVT__main_done_re));
        bufp->chgIData(oldp+171,(vlSymsp->TOP__sim.__PVT__main_offset),32);
        bufp->chgBit(oldp+172,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_offset_we));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__sim.__PVT__main_offset_re));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_tick_we));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__sim.__PVT__main_tick_re));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_data_we));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__sim.__PVT__main_data_re));
        bufp->chgBit(oldp+178,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_enable_storage)))));
        bufp->chgIData(oldp+179,((vlSymsp->TOP__sim.__PVT__main_src_storage 
                                  >> 2U)),32);
    }
}

void Vsim___024root__trace_chg_sub_1(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 181);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,((vlSymsp->TOP__sim.__PVT__main_length_storage 
                                >> 2U)),32);
        bufp->chgSData(oldp+1,(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr),14);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__sim.__PVT__builder_simsoc_we));
        bufp->chgIData(oldp+3,(vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w),32);
        bufp->chgIData(oldp+4,(((((vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                                   | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r) 
                                  | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r) 
                                 | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r) 
                                | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r)),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_dat_r),32);
        bufp->chgBit(oldp+6,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_cyc));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_ack));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__sim.__PVT__builder_array_muxed3));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim.__PVT__builder_shared_ack));
        bufp->chgCData(oldp+10,(vlSymsp->TOP__sim.__PVT__builder_request),3);
        bufp->chgCData(oldp+11,(vlSymsp->TOP__sim.__PVT__builder_grant),2);
        bufp->chgCData(oldp+12,(vlSymsp->TOP__sim.__PVT__builder_slave_sel),3);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__sim.__PVT__builder_slave_sel_r),3);
        bufp->chgBit(oldp+14,((((IData)(vlSymsp->TOP__sim.__PVT__builder_array_muxed4) 
                                & (IData)(vlSymsp->TOP__sim.__PVT__builder_array_muxed3)) 
                               & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_shared_ack)))));
        bufp->chgBit(oldp+15,((0U == vlSymsp->TOP__sim.__PVT__builder_count)));
        bufp->chgIData(oldp+16,(vlSymsp->TOP__sim.__PVT__builder_count),20);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r),32);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_status_re));
        bufp->chgBit(oldp+19,((1U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_control0_re));
        bufp->chgCData(oldp+21,((3U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),2);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_control0_we));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_instruction0_re));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_instruction0_we));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_src0_re));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_src0_we));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_dst0_re));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_dst0_we));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_length0_re));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_length0_we));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_enable0_re));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_enable0_we));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_input0_re));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_input0_we));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_output0_re));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_output0_we));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_imm0_re));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_imm0_we));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_done_re));
        bufp->chgBit(oldp+40,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_offset_re));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_tick_re));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_data_re));
        bufp->chgBit(oldp+43,((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                               >> 9U)))));
        bufp->chgIData(oldp+44,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r),32);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_reset0_re));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_reset0_we));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_scratch0_re));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_scratch0_we));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_bus_errors_re));
        bufp->chgBit(oldp+50,((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                               >> 9U)))));
        bufp->chgIData(oldp+51,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r),32);
        bufp->chgCData(oldp+52,((0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))),6);
        bufp->chgCData(oldp+53,(((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                                  ? vlSymsp->TOP__sim.__PVT__mem
                                 [vlSymsp->TOP__sim.__PVT__mem_adr0]
                                  : 0U)),8);
        bufp->chgBit(oldp+54,((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                               >> 9U)))));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r));
        bufp->chgIData(oldp+56,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r),32);
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_re));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_we));
        bufp->chgBit(oldp+59,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_re));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_we));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_re));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_we));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_re));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_we));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_re));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_re));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_re));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we));
        bufp->chgBit(oldp+70,((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                               >> 9U)))));
        bufp->chgIData(oldp+71,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r),32);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_re));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_re));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_re));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_re));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_re));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_re));
        bufp->chgBit(oldp+80,((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                               >> 9U)))));
        bufp->chgBit(oldp+81,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbonedmareader_state));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbonedmareader_next_state));
        bufp->chgIData(oldp+83,(vlSymsp->TOP__sim.__PVT__main_dma_reader_data_wishbonedmareader_next_value),32);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__sim.__PVT__main_dma_reader_data_wishbonedmareader_next_value_ce));
        bufp->chgCData(oldp+85,(vlSymsp->TOP__sim.__PVT__builder_simsoc_resetinserter_state),2);
        bufp->chgCData(oldp+86,(vlSymsp->TOP__sim.__PVT__builder_simsoc_resetinserter_next_state),2);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__sim.__PVT__main_offset_resetinserter_next_value),32);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__sim.__PVT__main_offset_resetinserter_next_value_ce));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__sim.__PVT__builder_simsoc_state));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__sim.__PVT__builder_simsoc_next_state));
        bufp->chgIData(oldp+91,(vlSymsp->TOP__sim.__PVT__builder_array_muxed0),32);
        bufp->chgSData(oldp+92,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
        bufp->chgCData(oldp+93,(vlSymsp->TOP__sim.__PVT__mem_adr0),6);
        bufp->chgSData(oldp+94,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
        bufp->chgSData(oldp+95,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
        bufp->chgSData(oldp+96,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
        bufp->chgSData(oldp+97,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
        bufp->chgSData(oldp+98,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
        bufp->chgSData(oldp+99,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
        bufp->chgSData(oldp+100,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
        bufp->chgSData(oldp+101,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
        bufp->chgSData(oldp+102,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
        bufp->chgSData(oldp+103,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
        bufp->chgSData(oldp+104,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
        bufp->chgSData(oldp+105,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
        bufp->chgSData(oldp+106,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
        bufp->chgSData(oldp+107,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
        bufp->chgSData(oldp+108,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
        bufp->chgSData(oldp+109,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
        bufp->chgSData(oldp+110,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
        bufp->chgSData(oldp+111,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
        bufp->chgSData(oldp+112,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
        bufp->chgSData(oldp+113,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
        bufp->chgSData(oldp+114,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
        bufp->chgSData(oldp+115,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
        bufp->chgSData(oldp+116,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
        bufp->chgSData(oldp+117,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
        bufp->chgSData(oldp+118,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
        bufp->chgSData(oldp+119,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
        bufp->chgSData(oldp+120,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
        bufp->chgSData(oldp+121,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
        bufp->chgSData(oldp+122,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
        bufp->chgSData(oldp+123,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
        bufp->chgSData(oldp+124,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
        bufp->chgSData(oldp+125,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid));
        bufp->chgBit(oldp+129,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)))));
        bufp->chgBit(oldp+130,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready)))));
        bufp->chgBit(oldp+131,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
        bufp->chgBit(oldp+132,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
        bufp->chgIData(oldp+134,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
        bufp->chgBit(oldp+135,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE))));
        bufp->chgIData(oldp+136,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
        bufp->chgBit(oldp+137,((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                >> 0x1fU)));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
        bufp->chgIData(oldp+139,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
        bufp->chgBit(oldp+141,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
        bufp->chgBit(oldp+142,((0U != (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xfU)))));
        bufp->chgCData(oldp+143,((0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                           >> 5U))),7);
        bufp->chgBit(oldp+144,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
        bufp->chgIData(oldp+146,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
        bufp->chgBit(oldp+147,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                      | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                         & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                            | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))))));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
        bufp->chgBit(oldp+149,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                                 & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                   | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))));
        bufp->chgIData(oldp+150,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
        bufp->chgBit(oldp+151,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
        bufp->chgIData(oldp+152,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
        bufp->chgBit(oldp+153,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
        bufp->chgIData(oldp+154,((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
        bufp->chgBit(oldp+155,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
        bufp->chgBit(oldp+156,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
        bufp->chgBit(oldp+157,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
        bufp->chgIData(oldp+159,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
        bufp->chgBit(oldp+160,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
        bufp->chgBit(oldp+161,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
        bufp->chgBit(oldp+162,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
        bufp->chgBit(oldp+163,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
        bufp->chgBit(oldp+166,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
        bufp->chgIData(oldp+169,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
        bufp->chgCData(oldp+170,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
        bufp->chgCData(oldp+171,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
        bufp->chgQData(oldp+172,((0xfffffffffffffULL 
                                  & (((((QData)((IData)(
                                                        (0x7ffffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                ((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                                                                >> 0x20U)))))))) 
                                        << 0x21U) | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL))) 
                                      + (((QData)((IData)(
                                                          (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (1ULL 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                          << 0x32U) 
                                         | (0x3ffffffffffffULL 
                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                               << 0x10U)))) 
                                     + (((QData)((IData)(
                                                         (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (1ULL 
                                                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                         << 0x32U) 
                                        | (0x3ffffffffffffULL 
                                           & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                              << 0x10U)))))),52);
        bufp->chgQData(oldp+174,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
        bufp->chgQData(oldp+176,((0x3ffffffffULL & 
                                  VL_MULS_QQQ(34, (0x3ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                              (0x3ffffffffULL 
                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        bufp->chgQData(oldp+178,((0x3ffffffffULL & 
                                  VL_MULS_QQQ(34, (0x3ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                              (0x3ffffffffULL 
                                               & VL_EXTENDS_QI(34,17, 
                                                               (0xffffU 
                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
        bufp->chgQData(oldp+180,((0x3ffffffffULL & 
                                  VL_MULS_QQQ(34, (0x3ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, 
                                                                   (0xffffU 
                                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                              (0x3ffffffffULL 
                                               & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
        bufp->chgIData(oldp+182,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                                  * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        bufp->chgIData(oldp+183,((0xfffffffeU & (((3U 
                                                   == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                   ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                                   : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                                 + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
        bufp->chgBit(oldp+184,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                                 != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                                | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                   & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                       ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0x15U) 
                                          ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                             >> 1U))
                                       : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                           ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0x15U)
                                           : (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 8U)))))));
    }
}

void Vsim___024root__trace_chg_sub_2(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 366);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,((IData)((0x1ffffffffULL 
                                        & VL_SHIFTRS_QQI(33,33,5, 
                                                         (((QData)((IData)(
                                                                           ((3U 
                                                                             == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                            & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                               >> 0x1fU)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                         (0x1fU 
                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5))))),32);
        bufp->chgIData(oldp+1,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                 ? ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                     ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                        & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                     : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                         ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                            | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                         : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                            ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                     ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less)
                                     : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
        bufp->chgIData(oldp+3,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0xcU)))
                                 ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                     << 0x18U) | ((0xff0000U 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))))
                                 : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                  >> 0xcU)))
                                     ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))
                                     : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
        bufp->chgBit(oldp+4,((0x20U != (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                 >> 7U)))));
        bufp->chgBit(oldp+5,((1U & (~ ((IData)((0x2000U 
                                                == 
                                                (0xfe000U 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                       | (IData)((0x6000U 
                                                  == 
                                                  (0xfe000U 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
        bufp->chgBit(oldp+7,((IData)((0x100000U == 
                                      (0x100008U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)))));
        bufp->chgBit(oldp+8,((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                              >> 0x1fU)));
        bufp->chgBit(oldp+9,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                    >> 0x1eU))));
        bufp->chgBit(oldp+10,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
        bufp->chgBit(oldp+13,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x1cU))));
        bufp->chgCData(oldp+14,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                       >> 0x1aU))),2);
        bufp->chgBit(oldp+15,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x19U))));
        bufp->chgCData(oldp+16,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                       >> 0x15U))),2);
        bufp->chgCData(oldp+17,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                       >> 0x12U))),2);
        bufp->chgBit(oldp+18,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x11U))));
        bufp->chgBit(oldp+19,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x10U))));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
        bufp->chgBit(oldp+21,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0xdU))));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
        bufp->chgBit(oldp+23,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0xcU))));
        bufp->chgBit(oldp+24,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0xbU))));
        bufp->chgCData(oldp+25,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                       >> 8U))),2);
        bufp->chgCData(oldp+26,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                       >> 6U))),2);
        bufp->chgCData(oldp+27,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                       >> 1U))),2);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
        bufp->chgIData(oldp+31,(((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
        bufp->chgBit(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
        bufp->chgQData(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
        bufp->chgQData(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
        bufp->chgQData(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
        bufp->chgQData(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
        bufp->chgCData(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
        bufp->chgCData(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
        bufp->chgIData(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
        bufp->chgBit(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
        bufp->chgCData(oldp+58,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
        bufp->chgBit(oldp+59,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0xfU))));
        bufp->chgBit(oldp+60,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 5U))));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
        bufp->chgIData(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
        bufp->chgIData(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
        bufp->chgIData(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
        bufp->chgCData(oldp+75,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
        bufp->chgBit(oldp+77,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 3U))));
        bufp->chgBit(oldp+78,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x14U))));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less));
        bufp->chgCData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
        bufp->chgBit(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
        bufp->chgBit(oldp+86,(((0x17U == (0x5fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                               | ((0x6fU == (0x7fU 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                  | ((3U == (0x106fU 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                     | ((0x1073U == 
                                         (0x107fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                        | ((0x2073U 
                                            == (0x207fU 
                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                           | ((0x4063U 
                                               == (0x407fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                              | ((0x2013U 
                                                  == 
                                                  (0x207fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                 | ((0x23U 
                                                     == 
                                                     (0x603fU 
                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                    | ((3U 
                                                        == 
                                                        (0x207fU 
                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                       | ((3U 
                                                           == 
                                                           (0x505fU 
                                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                          | ((0x63U 
                                                              == 
                                                              (0x707bU 
                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                             | ((0xfU 
                                                                 == 
                                                                 (0x607fU 
                                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                | ((0x33U 
                                                                    == 
                                                                    (0xfc00007fU 
                                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                   | ((0x500fU 
                                                                       == 
                                                                       (0x1f0707fU 
                                                                        & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                      | ((0x5013U 
                                                                          == 
                                                                          (0xbc00707fU 
                                                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                         | ((0x1013U 
                                                                             == 
                                                                             (0xfc00307fU 
                                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                            | ((0x5033U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                               | ((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10500073U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                | (0x73U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
        bufp->chgIData(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
        bufp->chgBit(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
        bufp->chgIData(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
        bufp->chgBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
        bufp->chgIData(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
        bufp->chgBit(oldp+97,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 4U))));
    }
}

void Vsim___024root__trace_chg_sub_3(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 464);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
        bufp->chgCData(oldp+5,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                      >> 0x17U))),2);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed));
        bufp->chgBit(oldp+15,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt))))));
        bufp->chgBit(oldp+16,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers))) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt)))));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
        bufp->chgBit(oldp+23,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                               | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed));
        bufp->chgBit(oldp+25,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt))))));
        bufp->chgBit(oldp+26,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck))) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed));
        bufp->chgBit(oldp+34,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt))))));
        bufp->chgBit(oldp+35,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck))) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
        bufp->chgBit(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
        bufp->chgBit(oldp+40,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                     & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
        bufp->chgIData(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
        bufp->chgCData(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
        bufp->chgIData(oldp+53,((0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
        bufp->chgBit(oldp+54,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
                               | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                          << 3U) | 
                                         (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext))))))));
        bufp->chgBit(oldp+55,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)))));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
        bufp->chgIData(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
        bufp->chgIData(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
        bufp->chgBit(oldp+63,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
        bufp->chgCData(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
        bufp->chgIData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit),32);
        bufp->chgIData(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
        bufp->chgBit(oldp+71,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                        | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))))));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
        bufp->chgIData(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
        bufp->chgBit(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
        bufp->chgBit(oldp+78,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1)));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
        bufp->chgCData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
        bufp->chgBit(oldp+81,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                       << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext)))))));
        bufp->chgBit(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
        bufp->chgIData(oldp+83,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                  ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                      ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                          ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                          : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)))),32);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready));
        bufp->chgIData(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
        bufp->chgBit(oldp+88,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
        bufp->chgBit(oldp+89,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg))));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
        bufp->chgBit(oldp+93,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))));
        bufp->chgBit(oldp+94,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
        bufp->chgBit(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed));
        bufp->chgBit(oldp+97,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
                               & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction)) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))));
        bufp->chgBit(oldp+98,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)))));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
        bufp->chgBit(oldp+103,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
        bufp->chgBit(oldp+107,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
        bufp->chgBit(oldp+108,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
        bufp->chgBit(oldp+110,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        bufp->chgBit(oldp+111,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
        bufp->chgBit(oldp+112,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
        bufp->chgBit(oldp+113,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                                & (IData)(vlSymsp->TOP__sim.__PVT__main_ibus_ack))));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
        bufp->chgIData(oldp+115,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
        bufp->chgBit(oldp+124,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready));
        bufp->chgBit(oldp+126,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr)
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr))));
        bufp->chgBit(oldp+127,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                 ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached)
                                 : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))));
        bufp->chgIData(oldp+128,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                   ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address
                                   : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address)),32);
        bufp->chgIData(oldp+129,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                   ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data
                                   : vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF)),32);
        bufp->chgCData(oldp+130,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                   ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask)
                                   : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask))),4);
        bufp->chgCData(oldp+131,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                   ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size)
                                   : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size))),3);
        bufp->chgBit(oldp+132,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last)))));
        bufp->chgBit(oldp+133,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr));
        bufp->chgBit(oldp+135,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached));
        bufp->chgIData(oldp+136,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data),32);
        bufp->chgCData(oldp+138,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask),4);
        bufp->chgCData(oldp+139,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size),3);
        bufp->chgBit(oldp+140,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last));
        bufp->chgBit(oldp+141,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
        bufp->chgIData(oldp+142,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
        bufp->chgCData(oldp+143,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                        >> 0xcU))),2);
        bufp->chgBit(oldp+144,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)))));
        bufp->chgBit(oldp+145,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                                 & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready))) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
        bufp->chgBit(oldp+146,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446));
        bufp->chgBit(oldp+148,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
        bufp->chgCData(oldp+149,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
        bufp->chgCData(oldp+150,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                           >> 8U))),8);
        bufp->chgCData(oldp+151,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+152,((vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                  >> 0x18U)),8);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted),32);
        bufp->chgCData(oldp+154,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 0xcU))),2);
        bufp->chgIData(oldp+155,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                >> 0xcU)))
                                   ? (((- (IData)((1U 
                                                   & ((vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
                                                       >> 7U) 
                                                      & (~ 
                                                         (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                          >> 0xeU)))))) 
                                       << 8U) | (0xffU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))
                                   : ((1U == (3U & 
                                              (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                               >> 0xcU)))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
                                                           >> 0xfU) 
                                                          & (~ 
                                                             (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                              >> 0xeU)))))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))
                                       : vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))),32);
    }
}

void Vsim___024root__trace_chg_sub_4(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 620);
    VlWide<3>/*95:0*/ __Vtemp_hff286ec7__0;
    VlWide<3>/*95:0*/ __Vtemp_h24933c90__0;
    VlWide<3>/*95:0*/ __Vtemp_h385ceada__0;
    VlWide<3>/*95:0*/ __Vtemp_h567caa2d__0;
    VlWide<3>/*95:0*/ __Vtemp_hc951bc44__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))));
        bufp->chgBit(oldp+1,((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                              >> 7U)))));
        bufp->chgCData(oldp+2,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                         >> 0x14U))),5);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
        bufp->chgIData(oldp+6,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                 ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                    & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                 : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                     ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                        | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                     : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                        ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))),32);
        bufp->chgCData(oldp+7,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)),5);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
        bufp->chgBit(oldp+11,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring))));
        bufp->chgCData(oldp+12,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                          >> 7U))),5);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
        bufp->chgCData(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
        bufp->chgBit(oldp+17,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                               == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0xfU)))));
        bufp->chgBit(oldp+18,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                               == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x14U)))));
        bufp->chgBit(oldp+19,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                         >> 7U)) == 
                               (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+20,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                         >> 7U)) == 
                               (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
        bufp->chgBit(oldp+22,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID))));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1));
        bufp->chgBit(oldp+27,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2));
        bufp->chgBit(oldp+32,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
        bufp->chgBit(oldp+33,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                        >> 5U)))));
        bufp->chgBit(oldp+34,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                        >> 0xfU)))));
        bufp->chgBit(oldp+35,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq));
        bufp->chgCData(oldp+37,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+38,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                               & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                   ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                       >> 0x15U) ^ 
                                      (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                       >> 1U)) : ((2U 
                                                   == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                   ? 
                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0x15U)
                                                   : 
                                                  (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 8U))))));
        bufp->chgIData(oldp+39,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                  ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                  : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
        bufp->chgIData(oldp+41,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                   ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                   : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                 + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
        bufp->chgCData(oldp+42,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
        bufp->chgIData(oldp+43,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
        bufp->chgCData(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
        bufp->chgCData(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
        bufp->chgQData(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
        bufp->chgQData(oldp+59,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
        bufp->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
        bufp->chgCData(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
        bufp->chgBit(oldp+67,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                       << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                                  << 2U) 
                                                 | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
        bufp->chgCData(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2));
        bufp->chgBit(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l998));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
        bufp->chgBit(oldp+79,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                       << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
        bufp->chgCData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause),4);
        bufp->chgCData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
        bufp->chgBit(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077));
        bufp->chgCData(oldp+86,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                       >> 0x1cU))),2);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
        bufp->chgBit(oldp+88,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
                               | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                   & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                  | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                     & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))));
        bufp->chgBit(oldp+89,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
        bufp->chgBit(oldp+91,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1157));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction));
        bufp->chgBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
        bufp->chgBit(oldp+96,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
        bufp->chgBit(oldp+97,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xdU))));
        bufp->chgBit(oldp+98,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))));
        bufp->chgSData(oldp+99,((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+100,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                              >> 0xcU))) 
                                | (2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                >> 0xcU))))));
        bufp->chgBit(oldp+101,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU)))));
        bufp->chgSData(oldp+102,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
        bufp->chgSData(oldp+103,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
        bufp->chgIData(oldp+104,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
        bufp->chgIData(oldp+105,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
        __Vtemp_hff286ec7__0[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp_hff286ec7__0[1U] = (((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                            >> 0x33U))))) 
                                     << 0x14U) | (IData)(
                                                         (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                          >> 0x20U)));
        __Vtemp_hff286ec7__0[2U] = (3U & ((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                                 >> 0x33U))))) 
                                          >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp_h24933c90__0, vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,32, __Vtemp_h385ceada__0, __Vtemp_h24933c90__0, 0x20U);
        VL_ADD_W(3, __Vtemp_h567caa2d__0, __Vtemp_hff286ec7__0, __Vtemp_h385ceada__0);
        __Vtemp_hc951bc44__0[0U] = __Vtemp_h567caa2d__0[0U];
        __Vtemp_hc951bc44__0[1U] = __Vtemp_h567caa2d__0[1U];
        __Vtemp_hc951bc44__0[2U] = (3U & __Vtemp_h567caa2d__0[2U]);
        bufp->chgWData(oldp+108,(__Vtemp_hc951bc44__0),66);
        bufp->chgBit(oldp+111,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL))));
        bufp->chgQData(oldp+112,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
        bufp->chgWData(oldp+115,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
        bufp->chgBit(oldp+118,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
        bufp->chgCData(oldp+121,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
        bufp->chgCData(oldp+122,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
        bufp->chgBit(oldp+123,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        bufp->chgBit(oldp+124,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
        bufp->chgBit(oldp+125,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
        bufp->chgBit(oldp+126,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
        bufp->chgIData(oldp+127,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
        bufp->chgBit(oldp+128,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
        bufp->chgBit(oldp+129,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
        bufp->chgQData(oldp+130,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted),33);
        bufp->chgQData(oldp+132,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
        bufp->chgIData(oldp+134,(((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                 >> 0x20U)))
                                   ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                                   : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
        bufp->chgIData(oldp+135,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                   << 1U) | (1U & (~ (IData)(
                                                             (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                              >> 0x20U)))))),32);
    }
}

void Vsim___024root__trace_chg_sub_5(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 756);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
        bufp->chgBit(oldp+1,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                    & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack))))));
        bufp->chgBit(oldp+2,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
        bufp->chgBit(oldp+3,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                    | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt)))));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3264));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_768));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_836));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_772));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_773));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_833));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_834));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_835));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_3008));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_csr_4032));
        bufp->chgCData(oldp+14,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
                                       >> 0xbU))),2);
        bufp->chgBit(oldp+15,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid)) 
                                     | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))))));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_InstructionCache_l239));
        bufp->chgQData(oldp+17,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 0x1aU)))
                                  ? 0x4e4f4e4520ULL
                                  : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x1aU)))
                                      ? 0x5852455420ULL
                                      : ((2U == (3U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 0x1aU)))
                                          ? 0x4543414c4cULL
                                          : 0x3f3f3f3f3fULL)))),40);
        bufp->chgWData(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SHIFT_CTRL_string),72);
        bufp->chgQData(oldp+22,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 0x12U)))
                                  ? 0x584f525f31ULL
                                  : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 0x12U)))
                                      ? 0x4f525f3120ULL
                                      : ((2U == (3U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 0x12U)))
                                          ? 0x414e445f31ULL
                                          : 0x3f3f3f3f3fULL)))),40);
        bufp->chgIData(oldp+24,(((0x200U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                  ? ((0x100U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                      ? 0x504320U : 0x494d53U)
                                  : ((0x100U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                      ? 0x494d49U : 0x525320U))),24);
        bufp->chgQData(oldp+25,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                               >> 6U)))
                                  ? 0x4144445f53554220ULL
                                  : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                   >> 6U)))
                                      ? 0x534c545f534c5455ULL
                                      : ((2U == (3U 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 6U)))
                                          ? 0x4249545749534520ULL
                                          : 0x3f3f3f3f3f3f3f3fULL)))),64);
        bufp->chgWData(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_SRC1_CTRL_string),96);
        bufp->chgQData(oldp+30,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                  ? 0x4e4f4e4520ULL
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                      ? 0x5852455420ULL
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))
                                          ? 0x4543414c4cULL
                                          : 0x3f3f3f3f3fULL)))),40);
        bufp->chgQData(oldp+32,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                  ? 0x4e4f4e4520ULL
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                      ? 0x5852455420ULL
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL))
                                          ? 0x4543414c4cULL
                                          : 0x3f3f3f3f3fULL)))),40);
        bufp->chgQData(oldp+34,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                  ? 0x4e4f4e4520ULL
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                      ? 0x5852455420ULL
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))
                                          ? 0x4543414c4cULL
                                          : 0x3f3f3f3f3fULL)))),40);
        bufp->chgIData(oldp+36,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                  ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? 0x4a414c52U
                                      : 0x4a414c20U)
                                  : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                      ? 0x42202020U
                                      : 0x494e4320U))),32);
        bufp->chgWData(oldp+37,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_SHIFT_CTRL_string),72);
        bufp->chgWData(oldp+40,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SHIFT_CTRL_string),72);
        bufp->chgIData(oldp+43,(((2U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                  ? ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                      ? 0x504320U : 0x494d53U)
                                  : ((1U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL))
                                      ? 0x494d49U : 0x525320U))),24);
        bufp->chgWData(oldp+44,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SRC1_CTRL_string),96);
        bufp->chgQData(oldp+47,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                  ? 0x4144445f53554220ULL
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                      ? 0x534c545f534c5455ULL
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                          ? 0x4249545749534520ULL
                                          : 0x3f3f3f3f3f3f3f3fULL)))),64);
        bufp->chgQData(oldp+49,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                  ? 0x584f525f31ULL
                                  : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                      ? 0x4f525f3120ULL
                                      : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? 0x414e445f31ULL
                                          : 0x3f3f3f3f3fULL)))),40);
        bufp->chgIData(oldp+51,(((0x1000000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                  ? ((0x800000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                      ? 0x4a414c52U
                                      : 0x4a414c20U)
                                  : ((0x800000U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)
                                      ? 0x42202020U
                                      : 0x494e4320U))),32);
        bufp->chgWData(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL_string),96);
        bufp->chgWData(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL_string),72);
        bufp->chgWData(oldp+58,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL_string),72);
        bufp->chgBit(oldp+61,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire));
        bufp->chgBit(oldp+62,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid));
        bufp->chgIData(oldp+63,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address),32);
        bufp->chgBit(oldp+64,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
        bufp->chgCData(oldp+66,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter),8);
        bufp->chgBit(oldp+67,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                        >> 7U)))));
        bufp->chgBit(oldp+68,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent));
        bufp->chgBit(oldp+71,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement));
        bufp->chgCData(oldp+73,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex),3);
        bufp->chgBit(oldp+74,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
                                     | (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                           >> 7U))))));
        bufp->chgCData(oldp+75,((0x7fU & ((0x80U & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter))
                                           ? (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                              >> 5U)
                                           : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter)))),7);
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                                     >> 7U))));
        bufp->chgIData(oldp+77,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                 >> 0xcU)),20);
        bufp->chgSData(oldp+78,(((0x3f8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                            >> 2U)) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))),10);
        bufp->chgBit(oldp+79,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))));
        bufp->chgBit(oldp+80,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1)));
        bufp->chgBit(oldp+81,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                     >> 1U))));
        bufp->chgIData(oldp+82,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                             >> 2U))),20);
        bufp->chgBit(oldp+83,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging));
        bufp->chgBit(oldp+85,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite));
        bufp->chgBit(oldp+87,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_valid));
        bufp->chgCData(oldp+93,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsReadCmd_payload),7);
        bufp->chgBit(oldp+94,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid));
        bufp->chgBit(oldp+95,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way));
        bufp->chgCData(oldp+96,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address),7);
        bufp->chgBit(oldp+97,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error));
        bufp->chgIData(oldp+99,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address),20);
        bufp->chgBit(oldp+100,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way));
        bufp->chgCData(oldp+102,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address),7);
        bufp->chgBit(oldp+103,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error));
        bufp->chgIData(oldp+105,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address),20);
        bufp->chgBit(oldp+106,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_valid));
        bufp->chgSData(oldp+107,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataReadCmd_payload),10);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way));
        bufp->chgSData(oldp+110,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address),10);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_data),32);
        bufp->chgCData(oldp+112,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask),4);
        bufp->chgBit(oldp+113,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        bufp->chgBit(oldp+114,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                      >> 1U))));
        bufp->chgIData(oldp+115,((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                              >> 2U))),20);
        bufp->chgIData(oldp+116,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3) 
                                   << 0x18U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2) 
                                                 << 0x10U) 
                                                | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1) 
                                                    << 8U) 
                                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read))))),32);
        bufp->chgBit(oldp+117,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))));
        bufp->chgBit(oldp+118,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l664));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent));
        bufp->chgBit(oldp+121,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                                & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
    }
}

void Vsim___024root__trace_chg_sub_6(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_chg_sub_6\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 878);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask),4);
        bufp->chgBit(oldp+1,(((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                  == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub 
                                                >> 2U)))) 
                              & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_mask) 
                                        & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask))))));
        bufp->chgCData(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_size),2);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_totalyConsistent));
        bufp->chgCData(oldp+4,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask),4);
        bufp->chgBit(oldp+5,((((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                >> 0xcU) == (0xfffffU 
                                             & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 
                                                >> 2U))) 
                              & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT___zz_ways_0_tags_port0)));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_wayInvalidate));
        bufp->chgBit(oldp+7,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen));
        bufp->chgBit(oldp+8,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen) 
                              | ((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
                                   & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_way)) 
                                  & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_address) 
                                     == (0x3ffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                                                   >> 2U)))) 
                                 & (0U != ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_mask) 
                                           & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask)))))));
        bufp->chgCData(oldp+9,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_size),2);
        bufp->chgBit(oldp+10,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_totalyConsistent));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRspFreeze));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l824));
        bufp->chgIData(oldp+13,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress),32);
        bufp->chgBit(oldp+14,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute));
        bufp->chgBit(oldp+18,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_exception));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error));
        bufp->chgIData(oldp+23,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address),20);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataReadRsp_0),32);
        bufp->chgBit(oldp+25,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_wayInvalidate));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_unaligned));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid));
        bufp->chgBit(oldp+32,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_waitDone));
        bufp->chgCData(oldp+33,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter),8);
        bufp->chgBit(oldp+34,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                                        >> 7U)))));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_flusher_start));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_cpuWriteToCache));
        bufp->chgBit(oldp+37,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits))));
        bufp->chgBit(oldp+38,((1U & (((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                                      & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                     | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                                        & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)))))));
        bufp->chgBit(oldp+39,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loadStoreFault));
        bufp->chgBit(oldp+40,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)
                                      ? (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))
                                      : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid)))));
        bufp->chgBit(oldp+41,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1004));
        bufp->chgBit(oldp+42,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                                     | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))))));
        bufp->chgBit(oldp+43,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr)) 
                               & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_dataColisions) 
                                  & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_waysHits)))));
        bufp->chgBit(oldp+44,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__memCmdSent)))));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1066));
        bufp->chgBit(oldp+46,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                               & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement));
        bufp->chgCData(oldp+48,((7U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value) 
                                       + (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willIncrement)))),3);
        bufp->chgCData(oldp+49,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value),3);
        bufp->chgBit(oldp+50,((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_value))));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_counter_willOverflow));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_waysAllocator));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_error));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_killReg));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__when_DataCache_l1090));
        bufp->chgBit(oldp+56,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid)))));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext));
        bufp->chgBit(oldp+58,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                               & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid_regNext)))));
        bufp->chgBit(oldp+59,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_loaderValid) 
                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid))));
    }
    bufp->chgBit(oldp+60,(vlSelf->sim_trace));
    bufp->chgBit(oldp+61,(vlSelf->sys_clk));
    bufp->chgBit(oldp+62,(vlSelf->serial_source_valid));
    bufp->chgBit(oldp+63,(vlSelf->serial_source_ready));
    bufp->chgCData(oldp+64,(vlSelf->serial_source_data),8);
    bufp->chgBit(oldp+65,(vlSelf->serial_sink_valid));
    bufp->chgBit(oldp+66,(vlSelf->serial_sink_ready));
    bufp->chgCData(oldp+67,(vlSelf->serial_sink_data),8);
    bufp->chgBit(oldp+68,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_syncfifo_re));
    bufp->chgBit(oldp+69,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_do_read));
    bufp->chgSData(oldp+70,(vlSelf->serial_sink_data),10);
    bufp->chgBit(oldp+71,(((IData)(vlSelf->serial_sink_valid) 
                           & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0)))));
    bufp->chgIData(oldp+72,(vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg),32);
    bufp->chgIData(oldp+73,(vlSymsp->TOP__sim__VexRiscv.lastStageInstruction),32);
    bufp->chgIData(oldp+74,(vlSymsp->TOP__sim__VexRiscv.lastStagePc),32);
    bufp->chgBit(oldp+75,(vlSymsp->TOP__sim__VexRiscv.lastStageIsValid));
    bufp->chgBit(oldp+76,(vlSymsp->TOP__sim__VexRiscv.lastStageIsFiring));
    bufp->chgBit(oldp+77,((vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                           >> 0x1fU)));
    bufp->chgBit(oldp+78,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_inWfi));
    bufp->chgBit(oldp+79,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_valid));
    bufp->chgCData(oldp+80,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_address),5);
    bufp->chgIData(oldp+81,(vlSymsp->TOP__sim__VexRiscv.lastStageRegFileWrite_payload_data),32);
    bufp->chgCData(oldp+82,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interrupt_code),4);
    bufp->chgBit(oldp+83,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_interruptJump));
    bufp->chgBit(oldp+84,(vlSymsp->TOP__sim__VexRiscv.CsrPlugin_hadException));
    bufp->chgIData(oldp+85,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[0]),32);
    bufp->chgIData(oldp+86,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[1]),32);
    bufp->chgIData(oldp+87,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[2]),32);
    bufp->chgIData(oldp+88,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[3]),32);
    bufp->chgIData(oldp+89,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[4]),32);
    bufp->chgIData(oldp+90,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[5]),32);
    bufp->chgIData(oldp+91,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[6]),32);
    bufp->chgIData(oldp+92,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[7]),32);
    bufp->chgIData(oldp+93,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[8]),32);
    bufp->chgIData(oldp+94,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[9]),32);
    bufp->chgIData(oldp+95,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[10]),32);
    bufp->chgIData(oldp+96,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[11]),32);
    bufp->chgIData(oldp+97,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[12]),32);
    bufp->chgIData(oldp+98,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[13]),32);
    bufp->chgIData(oldp+99,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[14]),32);
    bufp->chgIData(oldp+100,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[15]),32);
    bufp->chgIData(oldp+101,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[16]),32);
    bufp->chgIData(oldp+102,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[17]),32);
    bufp->chgIData(oldp+103,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[18]),32);
    bufp->chgIData(oldp+104,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[19]),32);
    bufp->chgIData(oldp+105,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[20]),32);
    bufp->chgIData(oldp+106,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[21]),32);
    bufp->chgIData(oldp+107,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[22]),32);
    bufp->chgIData(oldp+108,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[23]),32);
    bufp->chgIData(oldp+109,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[24]),32);
    bufp->chgIData(oldp+110,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[25]),32);
    bufp->chgIData(oldp+111,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[26]),32);
    bufp->chgIData(oldp+112,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[27]),32);
    bufp->chgIData(oldp+113,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[28]),32);
    bufp->chgIData(oldp+114,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[29]),32);
    bufp->chgIData(oldp+115,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[30]),32);
    bufp->chgIData(oldp+116,(vlSymsp->TOP__sim__VexRiscv.RegFilePlugin_regFile[31]),32);
    bufp->chgBit(oldp+117,((vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                            & ((0xfffffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 
                                            >> 2U)) 
                               == (vlSymsp->TOP__sim__VexRiscv.IBusCachedPlugin_fetchPc_pcReg 
                                   >> 0xcU)))));
}

void Vsim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_cleanup\n"); );
    // Init
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

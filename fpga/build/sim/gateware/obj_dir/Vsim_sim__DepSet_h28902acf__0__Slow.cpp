// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim_sim.h"

VL_ATTR_COLD void Vsim_sim___initial__TOP__sim__0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___initial__TOP__sim__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h8b565538__0;
    VlWide<3>/*95:0*/ __Vtemp_h49e8e380__0;
    VlWide<3>/*95:0*/ __Vtemp_hc382c380__0;
    // Body
    vlSelf->__PVT__main_scratch_re = 0U;
    vlSelf->__PVT__main_bus_errors_re = 0U;
    vlSelf->__PVT__main_uart_txfull_re = 0U;
    vlSelf->__PVT__main_uart_rxempty_re = 0U;
    vlSelf->__PVT__main_uart_status_re = 0U;
    vlSelf->__PVT__main_uart_enable_re = 0U;
    vlSelf->__PVT__main_uart_txempty_re = 0U;
    vlSelf->__PVT__main_uart_rxfull_re = 0U;
    vlSelf->__PVT__main_timer_load_re = 0U;
    vlSelf->__PVT__main_timer_reload_re = 0U;
    vlSelf->__PVT__main_timer_en_re = 0U;
    vlSelf->__PVT__main_timer_value_re = 0U;
    vlSelf->__PVT__main_timer_status_re = 0U;
    vlSelf->__PVT__main_timer_enable_re = 0U;
    vlSelf->__PVT__main_core_source_valid = 0U;
    vlSelf->__PVT__main_core_source_payload_data = 0U;
    vlSelf->__PVT__main_status_re = 0U;
    vlSelf->__PVT__main_control_re = 0U;
    vlSelf->__PVT__main_instruction_re = 0U;
    vlSelf->__PVT__main_src_re = 0U;
    vlSelf->__PVT__main_dst_re = 0U;
    vlSelf->__PVT__main_length_re = 0U;
    vlSelf->__PVT__main_enable_re = 0U;
    vlSelf->__PVT__main_input_re = 0U;
    vlSelf->__PVT__main_output_re = 0U;
    vlSelf->__PVT__main_imm_re = 0U;
    vlSelf->__PVT__main_done_re = 0U;
    vlSelf->__PVT__main_offset_re = 0U;
    vlSelf->__PVT__main_tick_re = 0U;
    vlSelf->__PVT__main_data_re = 0U;
    vlSelf->__PVT__main_uart_rxtx_we = 0U;
    vlSelf->__PVT__main_dma_reader_sink_ready = 0U;
    vlSelf->__PVT__main_dma_reader_source_last = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_we = 0U;
    vlSelf->__PVT__builder_array_muxed6 = 0U;
    vlSelf->__PVT__builder_array_muxed7 = 0U;
    vlSelf->__PVT__main_timer_pending_re = 0U;
    vlSelf->__PVT__main_timer_pending_r = 0U;
    vlSelf->__PVT__main_dma_reader_data = 0U;
    vlSelf->__PVT__main_soc_rst = 0U;
    vlSelf->__PVT__main_core_sink_ready = 0U;
    vlSelf->__PVT__main_reset_re = 0U;
    vlSelf->__PVT__builder_simsoc_resetinserter_state = 0U;
    vlSelf->__PVT__main_uart_tx_pending = 0U;
    vlSelf->__PVT__main_uart_rx_pending = 0U;
    vlSelf->__PVT__builder_slave_sel_r = 0U;
    __Vtemp_h8b565538__0[0U] = 0x696e6974U;
    __Vtemp_h8b565538__0[1U] = 0x72616d2eU;
    __Vtemp_h8b565538__0[2U] = 0x696d5f73U;
    __Vtemp_h8b565538__0[3U] = 0x73U;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h8b565538__0)
                 ,  &(vlSelf->__PVT__sram), 0, ~0ULL);
    vlSelf->__PVT__builder_simsoc_wishbone_dat_r = 0U;
    vlSelf->__PVT__main_uart_pending_re = 0U;
    vlSelf->__PVT__main_uart_pending_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r = 0U;
    vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r = 0U;
    __Vtemp_h49e8e380__0[0U] = 0x696e6974U;
    __Vtemp_h49e8e380__0[1U] = 0x6d656d2eU;
    __Vtemp_h49e8e380__0[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 8, 37, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h49e8e380__0)
                 ,  &(vlSelf->__PVT__mem), 0, ~0ULL);
    vlSelf->__PVT__builder_csr_bankarray_sel_r = 0U;
    vlSelf->__PVT__builder_simsoc_wishbone_ack = 0U;
    vlSelf->__PVT__builder_simsoc_we = 0U;
    vlSelf->__PVT__builder_array_muxed2 = 0U;
    vlSelf->__PVT__builder_array_muxed5 = 0U;
    vlSelf->__PVT__main_bus_we = 0U;
    vlSelf->__PVT__main_bus_sel = 0U;
    vlSelf->__PVT__builder_simsoc_state = 0U;
    vlSelf->__PVT__main_bus_stb = 0U;
    vlSelf->__PVT__main_bus_cyc = 0U;
    vlSelf->__PVT__main_bus_adr = 0U;
    vlSelf->__PVT__builder_simsoc_wishbonedmareader_state = 0U;
    __Vtemp_hc382c380__0[0U] = 0x696e6974U;
    __Vtemp_hc382c380__0[1U] = 0x726f6d2eU;
    __Vtemp_hc382c380__0[2U] = 0x73696d5fU;
    VL_READMEM_N(true, 32, 5854, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hc382c380__0)
                 ,  &(vlSelf->__PVT__rom), 0, ~0ULL);
    vlSelf->__PVT__main_scratch_storage = 0x12345678U;
    vlSelf->__PVT__main_bus_errors = 0U;
    vlSelf->__PVT__main_uart_tx_trigger_d = 0U;
    vlSelf->__PVT__main_uart_rx_trigger_d = 0U;
    vlSelf->__PVT__main_uart_tx_fifo_consume = 0U;
    vlSelf->__PVT__main_uart_rx_fifo_consume = 0U;
    vlSelf->__PVT__main_timer_update_value_storage = 0U;
    vlSelf->__PVT__main_timer_value_status = 0U;
    vlSelf->__PVT__main_core_data = 0U;
    vlSelf->__PVT__main_core_counter = 0U;
    vlSelf->__PVT__main_control_storage = 0U;
    vlSelf->__PVT__main_instruction_storage = 0U;
    vlSelf->__PVT__main_src_storage = 0U;
    vlSelf->__PVT__main_dst_storage = 0U;
    vlSelf->__PVT__main_length_storage = 0U;
    vlSelf->__PVT__main_input_storage = 0U;
    vlSelf->__PVT__main_output_storage = 0U;
    vlSelf->__PVT__main_imm_storage = 0U;
    vlSelf->__PVT__main_offset = 0U;
    vlSelf->__PVT__main_interrupt = 0U;
    vlSelf->__PVT__main_ram_we = 0U;
    vlSelf->__PVT__main_uart_rxtx_re = 0U;
    vlSelf->__PVT__main_uart_tx_clear = 0U;
    vlSelf->__PVT__main_uart_status_status = 0U;
    vlSelf->__PVT__main_uart_tx_fifo_wrport_adr = 0U;
    vlSelf->__PVT__main_uart_rx_fifo_wrport_adr = 0U;
    vlSelf->__PVT__main_done_status = 0U;
    vlSelf->__PVT__builder_error = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_re = 0U;
    vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state = 0U;
    vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value = 0U;
    vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value_ce = 0U;
    vlSelf->__PVT__builder_simsoc_resetinserter_next_state = 0U;
    vlSelf->__PVT__builder_simsoc_next_state = 0U;
    vlSelf->__PVT__main_uart_tx_fifo_produce = 0U;
    vlSelf->__PVT__main_uart_rx_fifo_produce = 0U;
    vlSelf->__PVT__builder_array_muxed1 = 0U;
    vlSelf->__PVT__main_uart_enable_storage = 0U;
    vlSelf->__PVT__main_timer_zero_pending = 0U;
    vlSelf->__PVT__main_timer_enable_storage = 0U;
    vlSelf->__PVT__main_uart_pending_status = 0U;
    vlSelf->__PVT__main_uart_tx_fifo_readable = 0U;
    vlSelf->__PVT__main_reset_storage = 0U;
    vlSelf->__PVT__main_uart_rx_fifo_level0 = 0U;
    vlSelf->__PVT__builder_shared_ack = 0U;
    vlSelf->__PVT__main_simsoc_ram_bus_ack = 0U;
    vlSelf->__PVT__main_ram_bus_ram_bus_ack = 0U;
    vlSelf->__PVT__builder_count = 0xf4240U;
    vlSelf->__PVT__builder_simsoc_adr = 0U;
    vlSelf->__PVT__builder_array_muxed4 = 0U;
    vlSelf->__PVT__builder_slave_sel = 0U;
    vlSelf->__PVT__builder_array_muxed3 = 0U;
    vlSelf->__PVT__builder_array_muxed0 = 0U;
}

VL_ATTR_COLD void Vsim_sim___initial__TOP__sim__1(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___initial__TOP__sim__1\n"); );
    // Body
    vlSelf->__PVT__builder_grant = 0U;
    vlSelf->__PVT__main_timer_load_storage = 0U;
    vlSelf->__PVT__main_timer_reload_storage = 0U;
    vlSelf->__PVT__main_timer_en_storage = 0U;
    vlSelf->__PVT__main_timer_update_value_re = 0U;
    vlSelf->__PVT__main_timer_zero_trigger_d = 0U;
    vlSelf->__PVT__main_enable_storage = 0U;
    vlSelf->__PVT__main_timer_zero_clear = 0U;
    vlSelf->__PVT__main_dma_reader_source_valid = 0U;
    vlSelf->__PVT__main_dma_reader_source_payload_data = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re = 0U;
    vlSelf->__PVT__main_offset_resetinserter_next_value = 0U;
    vlSelf->__PVT__main_offset_resetinserter_next_value_ce = 0U;
    vlSelf->__PVT__builder_shared_dat_r = 0U;
    vlSelf->__PVT__main_uart_rx_fifo_readable = 0U;
    vlSelf->__PVT__main_uart_tx_fifo_level0 = 0U;
    vlSelf->__PVT__main_timer_value = 0U;
    vlSelf->__PVT__builder_simsoc_dat_w = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_re = 0U;
    vlSelf->__PVT__main_int_rst = 1U;
    vlSelf->__PVT__main_uart_rx_clear = 0U;
}

VL_ATTR_COLD void Vsim_sim___settle__TOP__sim__2(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___settle__TOP__sim__2\n"); );
    // Body
    if ((IData)((1U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_we = 0U;
    if ((IData)((2U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_re = 0U;
    if ((IData)((3U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_re = 0U;
    if ((IData)((4U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_we = 0U;
    if ((IData)((5U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_re = 0U;
    if ((IData)((6U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_we = 0U;
    if ((IData)((7U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_we = 0U;
    if ((IData)((8U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_re = 0U;
    if ((IData)((9U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_we = 0U;
    if ((IData)((0xaU == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_we = 0U;
    if ((IData)((0xbU == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_re = 0U;
    if ((IData)((0xcU == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_re = 0U;
    if ((IData)((0xdU == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
}

VL_ATTR_COLD void Vsim_sim___settle__TOP__sim__3(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___settle__TOP__sim__3\n"); );
    // Body
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we = 0U;
    if ((IData)((0x200U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_re = 0U;
    if ((IData)((0x201U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_we = 0U;
    if ((IData)((0x202U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_re = 0U;
    if ((IData)((0x600U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_re = 0U;
    if ((IData)((0x601U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_we = 0U;
    if ((IData)((0x602U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_re = 0U;
    if ((IData)((0x603U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_we = 0U;
    if ((IData)((0x604U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_we = 0U;
    if ((IData)((0x605U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_re = 0U;
    if ((IData)((0x606U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re = 0U;
    if ((IData)((0x607U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__main_uart_rxtx_we = 0U;
    vlSelf->__PVT__main_uart_rxtx_re = 0U;
    if ((IData)((0x800U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__main_uart_rxtx_we = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__main_uart_rxtx_re = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_re = 0U;
    if ((IData)((0x801U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
}

VL_ATTR_COLD void Vsim_sim___settle__TOP__sim__4(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___settle__TOP__sim__4\n"); );
    // Body
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_we = 0U;
    if ((IData)((0x801U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_we = 0U;
    if ((IData)((0x802U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_re = 0U;
    if ((IData)((0x803U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_re = 0U;
    if ((IData)((0x804U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we = 0U;
    if ((IData)((0x805U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_re = 0U;
    if ((IData)((0x806U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_re = 0U;
    if ((IData)((0x807U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
}

VL_ATTR_COLD void Vsim_sim___ctor_var_reset(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__sim_trace = VL_RAND_RESET_I(1);
    vlSelf->sys_clk = VL_RAND_RESET_I(1);
    vlSelf->serial_source_valid = VL_RAND_RESET_I(1);
    vlSelf->serial_source_ready = VL_RAND_RESET_I(1);
    vlSelf->serial_source_data = VL_RAND_RESET_I(8);
    vlSelf->serial_sink_valid = VL_RAND_RESET_I(1);
    vlSelf->serial_sink_ready = VL_RAND_RESET_I(1);
    vlSelf->serial_sink_data = VL_RAND_RESET_I(8);
    vlSelf->__PVT__main_int_rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_soc_rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_reset_storage = VL_RAND_RESET_I(2);
    vlSelf->__PVT__main_reset_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_scratch_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_scratch_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_bus_errors_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_bus_errors = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_interrupt = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_ibus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_dbus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_simsoc_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_ram_bus_ram_bus_cyc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_ram_bus_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_ram_we = VL_RAND_RESET_I(4);
    vlSelf->__PVT__main_uart_rxtx_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rxtx_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_txfull_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rxempty_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_tx_pending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_tx_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_tx_trigger_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rx_pending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rx_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rx_trigger_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_status_status = VL_RAND_RESET_I(2);
    vlSelf->__PVT__main_uart_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_pending_status = VL_RAND_RESET_I(2);
    vlSelf->__PVT__main_uart_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_pending_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__main_uart_enable_storage = VL_RAND_RESET_I(2);
    vlSelf->__PVT__main_uart_enable_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_txempty_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rxfull_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_tx_fifo_readable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_tx_fifo_syncfifo_writable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_tx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_tx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__main_uart_tx_fifo_produce = VL_RAND_RESET_I(4);
    vlSelf->__PVT__main_uart_tx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__PVT__main_uart_tx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__main_uart_tx_fifo_do_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_tx_fifo_fifo_out_payload_data = VL_RAND_RESET_I(8);
    vlSelf->__PVT__main_uart_tx_fifo_fifo_out_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_tx_fifo_fifo_out_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rx_fifo_readable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rx_fifo_syncfifo_writable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rx_fifo_syncfifo_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__main_uart_rx_fifo_produce = VL_RAND_RESET_I(4);
    vlSelf->__PVT__main_uart_rx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__PVT__main_uart_rx_fifo_wrport_adr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__main_uart_rx_fifo_do_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rx_fifo_fifo_out_payload_data = VL_RAND_RESET_I(8);
    vlSelf->__PVT__main_uart_rx_fifo_fifo_out_first = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_uart_rx_fifo_fifo_out_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_load_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_timer_load_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_reload_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_timer_reload_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_en_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_en_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_update_value_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_update_value_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_value_status = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_timer_value_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_zero_pending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_zero_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_zero_trigger_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_pending_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_enable_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_enable_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_timer_value = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_bus_adr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_bus_sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__main_bus_cyc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_bus_stb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_bus_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_core_sink_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_core_source_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_core_source_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_core_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_core_counter = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_dma_reader_sink_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_dma_reader_source_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_dma_reader_source_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_dma_reader_source_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_dma_reader_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_control_storage = VL_RAND_RESET_I(2);
    vlSelf->__PVT__main_control_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_instruction_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_instruction_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_src_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_src_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_dst_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_dst_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_length_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_length_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_enable_storage = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_enable_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_input_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_input_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_output_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_output_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_imm_storage = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_imm_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_done_status = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_done_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_offset_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_tick_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_data_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_offset = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_simsoc_adr = VL_RAND_RESET_I(14);
    vlSelf->__PVT__builder_simsoc_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_simsoc_dat_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_simsoc_wishbone_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_simsoc_wishbone_cyc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_simsoc_wishbone_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_shared_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_shared_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_request = VL_RAND_RESET_I(3);
    vlSelf->__PVT__builder_grant = VL_RAND_RESET_I(2);
    vlSelf->__PVT__builder_slave_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__builder_slave_sel_r = VL_RAND_RESET_I(3);
    vlSelf->__PVT__builder_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_count = VL_RAND_RESET_I(20);
    vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_csr_bankarray_sel_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_re = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_simsoc_wishbonedmareader_state = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state = VL_RAND_RESET_I(1);
    vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value_ce = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_simsoc_resetinserter_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__builder_simsoc_resetinserter_next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__main_offset_resetinserter_next_value = VL_RAND_RESET_I(32);
    vlSelf->__PVT__main_offset_resetinserter_next_value_ce = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_simsoc_state = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_simsoc_next_state = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_array_muxed0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_array_muxed1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__builder_array_muxed2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__builder_array_muxed3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_array_muxed4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_array_muxed5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__builder_array_muxed6 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__builder_array_muxed7 = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<5854; ++__Vi0) {
        vlSelf->__PVT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__rom_dat0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        vlSelf->__PVT__sram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__sram_adr0 = VL_RAND_RESET_I(11);
    for (int __Vi0=0; __Vi0<37; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__mem_adr0 = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->__PVT__storage[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__storage_dat0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__storage_dat1 = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->__PVT__storage_1[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->__PVT__storage_1_dat0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__storage_1_dat1 = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__VexRiscv__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__main_bus_errors = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__main_uart_rx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__builder_grant = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__main_simsoc_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__main_uart_tx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__main_ram_bus_ram_bus_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__main_uart_tx_fifo_level0 = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__main_uart_rx_fifo_consume = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__main_core_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__main_timer_value = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__sram__v0 = 0;
    vlSelf->__Vdlyvlsb__sram__v0 = 0;
    vlSelf->__Vdlyvval__sram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sram__v0 = 0;
    vlSelf->__Vdlyvdim0__sram__v1 = 0;
    vlSelf->__Vdlyvlsb__sram__v1 = 0;
    vlSelf->__Vdlyvval__sram__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sram__v1 = 0;
    vlSelf->__Vdlyvdim0__sram__v2 = 0;
    vlSelf->__Vdlyvlsb__sram__v2 = 0;
    vlSelf->__Vdlyvval__sram__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sram__v2 = 0;
    vlSelf->__Vdlyvdim0__sram__v3 = 0;
    vlSelf->__Vdlyvlsb__sram__v3 = 0;
    vlSelf->__Vdlyvval__sram__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__sram__v3 = 0;
    vlSelf->__Vdlyvdim0__storage__v0 = 0;
    vlSelf->__Vdlyvval__storage__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__storage__v0 = 0;
    vlSelf->__Vdlyvdim0__storage_1__v0 = 0;
    vlSelf->__Vdlyvval__storage_1__v0 = VL_RAND_RESET_I(10);
    vlSelf->__Vdlyvset__storage_1__v0 = 0;
}

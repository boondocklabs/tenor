// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim__Syms.h"
#include "Vsim_sim.h"

VL_ATTR_COLD void Vsim_sim___settle__TOP__sim__0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___settle__TOP__sim__0\n"); );
    // Body
    vlSelf->__PVT__builder_array_muxed7 = 0U;
    vlSelf->__PVT__main_uart_tx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSelf->__PVT__storage_dat1) 
                 >> 9U));
    vlSelf->__PVT__main_uart_tx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSelf->__PVT__storage_dat1) 
                 >> 8U));
    vlSelf->__PVT__main_uart_rx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSelf->__PVT__storage_1_dat1) 
                 >> 9U));
    vlSelf->__PVT__main_uart_rx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSelf->__PVT__storage_1_dat1) 
                 >> 8U));
    vlSelf->__PVT__main_uart_rx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSelf->__PVT__storage_1_dat1));
    vlSelf->__PVT__main_uart_tx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSelf->__PVT__storage_dat1));
    vlSelf->__PVT__main_timer_zero_clear = 0U;
    if (((IData)(vlSelf->__PVT__main_timer_pending_re) 
         & (IData)(vlSelf->__PVT__main_timer_pending_r))) {
        vlSelf->__PVT__main_timer_zero_clear = 1U;
    }
    vlSelf->__PVT__builder_simsoc_resetinserter_next_state 
        = vlSelf->__PVT__builder_simsoc_resetinserter_state;
    vlSelf->__PVT__main_done_status = 0U;
    if ((2U == (IData)(vlSelf->__PVT__builder_simsoc_resetinserter_state))) {
        vlSelf->__PVT__main_done_status = 1U;
    }
    vlSelf->__PVT__main_offset_resetinserter_next_value = 0U;
    vlSelf->__PVT__main_offset_resetinserter_next_value_ce = 0U;
    if ((2U != (IData)(vlSelf->__PVT__builder_simsoc_resetinserter_state))) {
        vlSelf->__PVT__builder_simsoc_resetinserter_next_state = 1U;
        vlSelf->__PVT__main_offset_resetinserter_next_value = 0U;
        vlSelf->__PVT__main_offset_resetinserter_next_value_ce = 1U;
    }
    vlSelf->__PVT__main_uart_pending_status = (((IData)(vlSelf->__PVT__main_uart_rx_pending) 
                                                << 1U) 
                                               | (IData)(vlSelf->__PVT__main_uart_tx_pending));
    vlSelf->__PVT__main_uart_tx_clear = 0U;
    if (((IData)(vlSelf->__PVT__main_uart_pending_re) 
         & (IData)(vlSelf->__PVT__main_uart_pending_r))) {
        vlSelf->__PVT__main_uart_tx_clear = 1U;
    }
    vlSelf->__PVT__main_uart_rx_clear = 0U;
    if (((IData)(vlSelf->__PVT__main_uart_pending_re) 
         & ((IData)(vlSelf->__PVT__main_uart_pending_r) 
            >> 1U))) {
        vlSelf->__PVT__main_uart_rx_clear = 1U;
    }
    vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSelf->__PVT__builder_csr_bankarray_sel_r) {
        vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r 
            = ((0x24U >= (IData)(vlSelf->__PVT__mem_adr0))
                ? vlSelf->__PVT__mem[vlSelf->__PVT__mem_adr0]
                : 0U);
    }
    vlSelf->__PVT__builder_simsoc_wishbone_ack = 0U;
    vlSelf->__PVT__main_dma_reader_source_last = 0U;
    vlSelf->__PVT__main_dma_reader_sink_ready = 0U;
    vlSelf->__PVT__main_bus_we = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_wishbonedmareader_state)))) {
        vlSelf->__PVT__main_bus_we = 0U;
        vlSelf->__PVT__main_bus_we = 1U;
        vlSelf->__PVT__main_bus_sel = 0U;
        vlSelf->__PVT__main_bus_sel = 0xfU;
        vlSelf->__PVT__main_bus_sel = 0xfU;
        vlSelf->__PVT__main_bus_stb = 0U;
        vlSelf->__PVT__main_bus_stb = 0U;
        vlSelf->__PVT__main_bus_stb = 0U;
        vlSelf->__PVT__main_bus_cyc = 0U;
        vlSelf->__PVT__main_bus_cyc = 0U;
        vlSelf->__PVT__main_bus_cyc = 0U;
        vlSelf->__PVT__main_bus_adr = 0U;
        vlSelf->__PVT__main_bus_adr = 0U;
    } else {
        vlSelf->__PVT__main_bus_we = 1U;
        vlSelf->__PVT__main_bus_sel = 0U;
        vlSelf->__PVT__main_bus_sel = 0xfU;
        vlSelf->__PVT__main_bus_stb = 0U;
        vlSelf->__PVT__main_bus_stb = 0U;
        vlSelf->__PVT__main_bus_cyc = 0U;
        vlSelf->__PVT__main_bus_cyc = 0U;
        vlSelf->__PVT__main_bus_adr = 0U;
    }
    vlSelf->__PVT__main_bus_adr = 0U;
    vlSelf->__PVT__main_dma_reader_source_valid = 0U;
    vlSelf->__PVT__main_dma_reader_source_payload_data = 0U;
    if (vlSelf->__PVT__builder_simsoc_wishbonedmareader_state) {
        vlSelf->__PVT__main_dma_reader_source_last = 0U;
        if (vlSelf->__PVT__main_core_sink_ready) {
            vlSelf->__PVT__main_dma_reader_sink_ready = 1U;
        }
        vlSelf->__PVT__main_dma_reader_source_valid = 1U;
        vlSelf->__PVT__main_dma_reader_source_payload_data 
            = vlSelf->__PVT__main_dma_reader_data;
    }
    vlSelf->__PVT__main_uart_tx_fifo_wrport_adr = vlSelf->__PVT__main_uart_tx_fifo_produce;
    vlSelf->__PVT__main_uart_rx_fifo_wrport_adr = vlSelf->__PVT__main_uart_rx_fifo_produce;
    vlSelf->__PVT__main_soc_rst = 0U;
    if (vlSelf->__PVT__main_reset_re) {
        vlSelf->__PVT__main_soc_rst = (1U & (IData)(vlSelf->__PVT__main_reset_storage));
    }
    vlSelf->__PVT__main_uart_rx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSelf->__PVT__main_uart_rx_fifo_level0));
    vlSelf->__PVT__builder_done = (0U == vlSelf->__PVT__builder_count);
    vlSelf->__PVT__builder_error = 0U;
    if ((0U == (IData)(vlSelf->__PVT__builder_grant))) {
        vlSelf->__PVT__builder_array_muxed1 = 0U;
        vlSelf->__PVT__builder_array_muxed6 = ((7U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                                ? 7U
                                                : 2U);
    } else if ((1U == (IData)(vlSelf->__PVT__builder_grant))) {
        vlSelf->__PVT__builder_array_muxed1 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data;
        vlSelf->__PVT__builder_array_muxed6 = ((5U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                                ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                                    ? 7U
                                                    : 2U)
                                                : 0U);
    } else {
        vlSelf->__PVT__builder_array_muxed1 = 0U;
        vlSelf->__PVT__builder_array_muxed6 = 0U;
    }
    vlSelf->__PVT__main_uart_tx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0));
    vlSelf->__PVT__main_uart_tx_fifo_syncfifo_re = 
        ((0U != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0)) 
         & ((~ (IData)(vlSelf->__PVT__main_uart_tx_fifo_readable)) 
            | (IData)(vlSymsp->TOP.serial_source_ready)));
    vlSelf->__PVT__main_uart_status_status = (((IData)(vlSelf->__PVT__main_uart_rx_fifo_readable) 
                                               << 1U) 
                                              | (0x10U 
                                                 != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0)));
    vlSelf->__PVT__main_interrupt = 0U;
    vlSelf->__PVT__main_interrupt = ((0xfffffffcU & vlSelf->__PVT__main_interrupt) 
                                     | ((((IData)(vlSelf->__PVT__main_timer_zero_pending) 
                                          & (IData)(vlSelf->__PVT__main_timer_enable_storage)) 
                                         << 1U) | (1U 
                                                   & (((IData)(vlSelf->__PVT__main_uart_pending_status) 
                                                       & (IData)(vlSelf->__PVT__main_uart_enable_storage)) 
                                                      | (((IData)(vlSelf->__PVT__main_uart_pending_status) 
                                                          & (IData)(vlSelf->__PVT__main_uart_enable_storage)) 
                                                         >> 1U)))));
    vlSelf->__PVT__main_uart_rx_fifo_syncfifo_re = 
        ((0U != (IData)(vlSelf->__PVT__main_uart_rx_fifo_level0)) 
         & ((~ (IData)(vlSelf->__PVT__main_uart_rx_fifo_readable)) 
            | (IData)(vlSelf->__PVT__main_uart_rx_clear)));
    vlSelf->__PVT__builder_simsoc_wishbone_dat_r = 0U;
    if (vlSelf->__PVT__builder_simsoc_state) {
        vlSelf->__PVT__builder_simsoc_wishbone_ack = 1U;
        vlSelf->__PVT__builder_simsoc_wishbone_dat_r 
            = ((((vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                  | vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r) 
                 | vlSelf->__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r) 
                | vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r) 
               | vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r);
    }
    vlSelf->__PVT__builder_shared_ack = (((IData)(vlSelf->__PVT__main_simsoc_ram_bus_ack) 
                                          | (IData)(vlSelf->__PVT__main_ram_bus_ram_bus_ack)) 
                                         | (IData)(vlSelf->__PVT__builder_simsoc_wishbone_ack));
    if ((0U == vlSelf->__PVT__builder_count)) {
        vlSelf->__PVT__builder_error = 1U;
        vlSelf->__PVT__builder_shared_ack = 1U;
    }
}

VL_ATTR_COLD void Vsim_sim___settle__TOP__sim__1(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___settle__TOP__sim__1\n"); );
    // Body
    vlSelf->__PVT__builder_array_muxed5 = ((0U != (IData)(vlSelf->__PVT__builder_grant)) 
                                           & ((1U != (IData)(vlSelf->__PVT__builder_grant)) 
                                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)));
    if ((0U == (IData)(vlSelf->__PVT__builder_grant))) {
        vlSelf->__PVT__builder_array_muxed2 = 0xfU;
        vlSelf->__PVT__builder_array_muxed4 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB;
        vlSelf->__PVT__builder_array_muxed3 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC;
        vlSelf->__PVT__builder_array_muxed0 = ((0x3ffffff8U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                   >> 2U)) 
                                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR));
    } else if ((1U == (IData)(vlSelf->__PVT__builder_grant))) {
        vlSelf->__PVT__builder_array_muxed2 = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                                : 0xfU);
        vlSelf->__PVT__builder_array_muxed0 = (((5U 
                                                 == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                                 ? 
                                                ((0xffffffe0U 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                                 | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                                    << 2U))
                                                 : 
                                                (0xfffffffcU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                               >> 2U);
        vlSelf->__PVT__builder_array_muxed4 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
        vlSelf->__PVT__builder_array_muxed3 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
    } else {
        vlSelf->__PVT__builder_array_muxed2 = 0xfU;
        vlSelf->__PVT__builder_array_muxed0 = 0U;
        vlSelf->__PVT__builder_array_muxed4 = 0U;
        vlSelf->__PVT__builder_array_muxed3 = 0U;
    }
    vlSelf->__PVT__builder_request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                       << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSelf->__Vcellinp__VexRiscv__reset = (((IData)(vlSelf->__PVT__main_int_rst) 
                                            | (IData)(vlSelf->__PVT__main_soc_rst)) 
                                           | ((IData)(vlSelf->__PVT__main_reset_storage) 
                                              >> 1U));
    vlSelf->__PVT__builder_simsoc_dat_w = 0U;
    vlSelf->__PVT__main_uart_tx_fifo_do_read = ((0U 
                                                 != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0)) 
                                                & (IData)(vlSelf->__PVT__main_uart_tx_fifo_syncfifo_re));
    vlSelf->__PVT__main_uart_rx_fifo_do_read = ((0U 
                                                 != (IData)(vlSelf->__PVT__main_uart_rx_fifo_level0)) 
                                                & (IData)(vlSelf->__PVT__main_uart_rx_fifo_syncfifo_re));
    vlSelf->__PVT__builder_shared_dat_r = ((((- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__builder_slave_sel_r)))) 
                                             & vlSelf->__PVT__rom_dat0) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->__PVT__builder_slave_sel_r) 
                                                              >> 1U)))) 
                                               & vlSelf->__PVT__sram
                                               [vlSelf->__PVT__sram_adr0])) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__builder_slave_sel_r) 
                                                             >> 2U)))) 
                                              & vlSelf->__PVT__builder_simsoc_wishbone_dat_r));
    if ((0U == vlSelf->__PVT__builder_count)) {
        vlSelf->__PVT__builder_shared_dat_r = 0xffffffffU;
    }
    vlSelf->__PVT__main_ibus_ack = ((IData)(vlSelf->__PVT__builder_shared_ack) 
                                    & (0U == (IData)(vlSelf->__PVT__builder_grant)));
    vlSelf->__PVT__main_dbus_ack = ((IData)(vlSelf->__PVT__builder_shared_ack) 
                                    & (1U == (IData)(vlSelf->__PVT__builder_grant)));
    vlSelf->__PVT__main_bus_ack = ((IData)(vlSelf->__PVT__builder_shared_ack) 
                                   & (2U == (IData)(vlSelf->__PVT__builder_grant)));
    vlSelf->__PVT__builder_slave_sel = 0U;
    vlSelf->__PVT__builder_slave_sel = ((4U & (IData)(vlSelf->__PVT__builder_slave_sel)) 
                                        | (((0x8000U 
                                             == (0x7ffffU 
                                                 & (vlSelf->__PVT__builder_array_muxed0 
                                                    >> 0xbU))) 
                                            << 1U) 
                                           | (0U == 
                                              (0x7fffU 
                                               & (vlSelf->__PVT__builder_array_muxed0 
                                                  >> 0xfU)))));
    vlSelf->__PVT__builder_slave_sel = ((3U & (IData)(vlSelf->__PVT__builder_slave_sel)) 
                                        | ((0xf000U 
                                            == (0xffffU 
                                                & (vlSelf->__PVT__builder_array_muxed0 
                                                   >> 0xeU))) 
                                           << 2U));
    vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value_ce = 0U;
    if (vlSelf->__PVT__builder_simsoc_wishbonedmareader_state) {
        vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state = 1U;
        if (vlSelf->__PVT__main_core_sink_ready) {
            vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state = 0U;
        }
    } else {
        vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state = 0U;
        if (((IData)(vlSelf->__PVT__main_bus_stb) & (IData)(vlSelf->__PVT__main_bus_ack))) {
            vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state = 1U;
        }
    }
    vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_wishbonedmareader_state)))) {
        if (((IData)(vlSelf->__PVT__main_bus_stb) & (IData)(vlSelf->__PVT__main_bus_ack))) {
            vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value_ce = 1U;
            vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value 
                = ((vlSelf->__PVT__builder_shared_dat_r 
                    << 0x18U) | ((0xff0000U & (vlSelf->__PVT__builder_shared_dat_r 
                                               << 8U)) 
                                 | ((0xff00U & (vlSelf->__PVT__builder_shared_dat_r 
                                                >> 8U)) 
                                    | (vlSelf->__PVT__builder_shared_dat_r 
                                       >> 0x18U))));
        }
    }
    vlSelf->__PVT__main_ram_bus_ram_bus_cyc = ((IData)(vlSelf->__PVT__builder_array_muxed3) 
                                               & ((IData)(vlSelf->__PVT__builder_slave_sel) 
                                                  >> 1U));
    vlSelf->__PVT__builder_simsoc_wishbone_cyc = ((IData)(vlSelf->__PVT__builder_array_muxed3) 
                                                  & ((IData)(vlSelf->__PVT__builder_slave_sel) 
                                                     >> 2U));
    vlSelf->__PVT__main_ram_we = 0U;
    vlSelf->__PVT__main_ram_we = ((0xeU & (IData)(vlSelf->__PVT__main_ram_we)) 
                                  | ((((IData)(vlSelf->__PVT__main_ram_bus_ram_bus_cyc) 
                                       & (IData)(vlSelf->__PVT__builder_array_muxed4)) 
                                      & (IData)(vlSelf->__PVT__builder_array_muxed5)) 
                                     & (IData)(vlSelf->__PVT__builder_array_muxed2)));
    vlSelf->__PVT__main_ram_we = ((0xdU & (IData)(vlSelf->__PVT__main_ram_we)) 
                                  | (0xfffffffeU & 
                                     (((((IData)(vlSelf->__PVT__main_ram_bus_ram_bus_cyc) 
                                         & (IData)(vlSelf->__PVT__builder_array_muxed4)) 
                                        & (IData)(vlSelf->__PVT__builder_array_muxed5)) 
                                       << 1U) & (IData)(vlSelf->__PVT__builder_array_muxed2))));
    vlSelf->__PVT__main_ram_we = ((0xbU & (IData)(vlSelf->__PVT__main_ram_we)) 
                                  | (0xfffffffcU & 
                                     (((((IData)(vlSelf->__PVT__main_ram_bus_ram_bus_cyc) 
                                         & (IData)(vlSelf->__PVT__builder_array_muxed4)) 
                                        & (IData)(vlSelf->__PVT__builder_array_muxed5)) 
                                       << 2U) & (IData)(vlSelf->__PVT__builder_array_muxed2))));
    vlSelf->__PVT__main_ram_we = ((7U & (IData)(vlSelf->__PVT__main_ram_we)) 
                                  | (0xfffffff8U & 
                                     (((((IData)(vlSelf->__PVT__main_ram_bus_ram_bus_cyc) 
                                         & (IData)(vlSelf->__PVT__builder_array_muxed4)) 
                                        & (IData)(vlSelf->__PVT__builder_array_muxed5)) 
                                       << 3U) & (IData)(vlSelf->__PVT__builder_array_muxed2))));
    if (vlSelf->__PVT__builder_simsoc_state) {
        vlSelf->__PVT__builder_simsoc_next_state = 1U;
        vlSelf->__PVT__builder_simsoc_next_state = 0U;
    } else {
        vlSelf->__PVT__builder_simsoc_next_state = 0U;
        if (((IData)(vlSelf->__PVT__builder_simsoc_wishbone_cyc) 
             & (IData)(vlSelf->__PVT__builder_array_muxed4))) {
            vlSelf->__PVT__builder_simsoc_next_state = 1U;
        }
    }
    vlSelf->__PVT__builder_simsoc_adr = 0U;
    vlSelf->__PVT__builder_simsoc_we = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_state)))) {
        vlSelf->__PVT__builder_simsoc_dat_w = vlSelf->__PVT__builder_array_muxed1;
        if (((IData)(vlSelf->__PVT__builder_simsoc_wishbone_cyc) 
             & (IData)(vlSelf->__PVT__builder_array_muxed4))) {
            vlSelf->__PVT__builder_simsoc_adr = (0x3fffU 
                                                 & vlSelf->__PVT__builder_array_muxed0);
            vlSelf->__PVT__builder_simsoc_we = ((IData)(vlSelf->__PVT__builder_array_muxed5) 
                                                & (0U 
                                                   != (IData)(vlSelf->__PVT__builder_array_muxed2)));
        }
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_re = 0U;
    if ((IData)((0U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_we = 0U;
    if ((IData)((1U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_re = 0U;
}

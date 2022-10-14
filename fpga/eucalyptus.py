#!/usr/bin/env python3

#
# This file is part of LiteX-Boards.
#
# Copyright (c) Greg Davill <greg.davill@gmail.com>
# SPDX-License-Identifier: BSD-2-Clause

import os
import sys

from migen import *
from migen.genlib.misc import WaitTimer
from migen.genlib.resetsync import AsyncResetSynchronizer

import eucalyptus_platform

from litex.build.lattice.trellis import trellis_args, trellis_argdict

from litex.soc.cores.clock import *
from litex.soc.integration.soc_core import *
from litex.soc.integration.builder import *
from litex.soc.cores.led import LedChaser
from litedram.modules import MT41K64M16, MT41K128M16, MT41K256M16, MT41K512M16
from litedram.phy import ECP5DDRPHY
from liteeth.phy.ecp5rgmii import LiteEthPHYRGMII
from litex.soc.cores.bitbang import I2CMaster
from litex.soc.cores.pwm import PWM
from litex.soc.cores.led import LedChaser

from dma_test import DMATest
from tmu import ThreadManagementUnit

# CRG ---------------------------------------------------------------------------------------------

class _CRG(Module):
    def __init__(self, platform, sys_clk_freq, with_usb_pll=False):
        self.rst = Signal()
        self.clock_domains.cd_init     = ClockDomain()
        self.clock_domains.cd_por      = ClockDomain()
        self.clock_domains.cd_sys      = ClockDomain()
        self.clock_domains.cd_sys2x    = ClockDomain()
        self.clock_domains.cd_sys2x_i  = ClockDomain()

        # # #

        self.stop  = Signal()
        self.reset = Signal()

        # Clk / Rst
        clk50 = platform.request("clk50")
        rst_n = platform.request("rst_n")

        emmc_pads = platform.request("emmc")
        self.comb += emmc_pads.rst_n.eq(rst_n)


        # Power on reset
        por_count = Signal(16, reset=2**16-1)
        por_done  = Signal()
        self.comb += self.cd_por.clk.eq(clk50)
        self.comb += por_done.eq(por_count == 0)
        self.sync.por += If(~por_done, por_count.eq(por_count - 1))

        # PLL
        self.submodules.pll = pll = ECP5PLL()
        self.comb += pll.reset.eq(~por_done | ~rst_n | self.rst)
        pll.register_clkin(clk50, 50e6)
        pll.create_clkout(self.cd_sys2x_i, 2*sys_clk_freq)
        pll.create_clkout(self.cd_init, 25e6)
        self.specials += [
            Instance("ECLKSYNCB",
                i_ECLKI = self.cd_sys2x_i.clk,
                i_STOP  = self.stop,
                o_ECLKO = self.cd_sys2x.clk),
            Instance("CLKDIVF",
                p_DIV     = "2.0",
                i_ALIGNWD = 0,
                i_CLKI    = self.cd_sys2x.clk,
                i_RST     = self.reset,
                o_CDIVX   = self.cd_sys.clk),
            AsyncResetSynchronizer(self.cd_sys, ~pll.locked | self.reset),
        ]

# BaseSoC ------------------------------------------------------------------------------------------

class BaseSoC(SoCCore):
    def __init__(self, revision="0.2", device="25F", sdram_device="MT41K64M16",
                 sys_clk_freq=int(50e6), toolchain="trellis", with_led_chaser=True, **kwargs):
        platform = eucalyptus_platform.Platform(revision=revision, device=device ,toolchain=toolchain)

        # CRG --------------------------------------------------------------------------------------
        crg_cls = _CRG
        self.submodules.crg = crg_cls(platform, sys_clk_freq, with_usb_pll=False)

        # SoCCore ----------------------------------------------------------------------------------
        kwargs["uart_name"] = "serial"
        SoCCore.__init__(self, platform, sys_clk_freq, ident="LiteX SoC on Eucalyptus", **kwargs)

        # DDR3 SDRAM -------------------------------------------------------------------------------
        if not self.integrated_main_ram_size:
            available_sdram_modules = {
                "MT41K64M16":  MT41K64M16,
                "MT41K128M16": MT41K128M16,
                "MT41K256M16": MT41K256M16,
                "MT41K512M16": MT41K512M16,
            }
            sdram_module = available_sdram_modules.get(sdram_device)

            self.submodules.ddrphy = ECP5DDRPHY(
                pads         = platform.request("ddram"),
                sys_clk_freq = sys_clk_freq,
                cmd_delay    = 0
            )
            #self.ddrphy.settings.rtt_nom = "disabled"
            self.comb += self.crg.stop.eq(self.ddrphy.init.stop)
            self.comb += self.crg.reset.eq(self.ddrphy.init.reset)
            self.add_sdram("sdram",
                phy           = self.ddrphy,
                module        = sdram_module(sys_clk_freq, "1:4"),
                l2_cache_size = 0
                #l2_cache_size = kwargs.get("l2_size", 8192)
            )

        self.add_constant("SDRAM_DEBUG")

        self.add_timer(name="timer1")


        self.submodules.ethphy = LiteEthPHYRGMII(
            clock_pads = self.platform.request("eth_clocks"),
            pads       = self.platform.request("eth"),
            tx_delay   = 0e-9)

        self.add_ethernet(phy=self.ethphy, data_width=32)

        self.submodules.oled = I2CMaster(platform.request("oled"))
        self.submodules.stemma = I2CMaster(platform.request("stemma"))

        #leds = self.platform.request("led_n")

        #self.comb += leds[0].eq(1)
        #self.comb += leds[1].eq(1)
        #self.comb += leds[2].eq(1)
        #self.comb += leds[3].eq(1)

        leds = LedChaser(
            pads = platform.request_all("led_n"),
            sys_clk_freq = sys_clk_freq,
            polarity = 1
        )

        leds.add_pwm()

        self.submodules.leds = leds

        dma = DMATest()
        self.submodules.dmatest = dma
        self.bus.add_master(name="dma_read", master=dma.read_bus)
        self.bus.add_master(name="dma_write", master=dma.write_bus)
        self.irq.add("dmatest", use_loc_if_exists=True)

        tmu = ThreadManagementUnit()
        self.submodules.tmu = tmu
        self.irq.add("tmu", use_loc_if_exists=True)



# Build --------------------------------------------------------------------------------------------

def main():
    from litex.soc.integration.soc import LiteXSoCArgumentParser
    parser = LiteXSoCArgumentParser(description="LiteX SoC on Eucalyptus")
    target_group = parser.add_argument_group(title="Target options")
    target_group.add_argument("--build",           action="store_true",  help="Build design.")
    target_group.add_argument("--load",            action="store_true",  help="Load bitstream.")
    target_group.add_argument("--toolchain",       default="trellis",    help="FPGA toolchain (trellis or diamond).")
    target_group.add_argument("--sys-clk-freq",    default=50e6,         help="System clock frequency.")
    target_group.add_argument("--revision",        default="0.1",        help="Board Revision")
    target_group.add_argument("--device",          default="25F",        help="ECP5 device (25F, 45F or 85F).")
    target_group.add_argument("--sdram-device",    default="MT41K64M16", help="SDRAM device (MT41K64M16, MT41K128M16, MT41K256M16 or MT41K512M16).")
    target_group.add_argument("--with-sdcard",     action="store_true",  help="Enable SDCard support.")
    builder_args(parser)
    soc_core_args(parser)
    trellis_args(parser)
    args = parser.parse_args()

    soc = BaseSoC(
        toolchain    = args.toolchain,
        revision     = args.revision,
        #device       = args.device,
        sdram_device = args.sdram_device,
        sys_clk_freq = int(float(args.sys_clk_freq)),
        **soc_core_argdict(args))

    soc.add_sdcard(software_debug=True)

    from litespi.modules import W25Q256
    from litespi.opcodes import SpiNorFlashOpCodes as Codes
    soc.add_spi_flash(mode="4x", module=W25Q256(Codes.READ_1_1_4))

    builder = Builder(soc, **builder_argdict(args))
    builder_kargs = trellis_argdict(args) if args.toolchain == "trellis" else {}
    if args.build:
        builder.build(**builder_kargs)

    if args.load:
        prog = soc.platform.create_programmer()
        prog.load_bitstream(builder.get_bitstream_filename(mode="sram"))

if __name__ == "__main__":
    main()

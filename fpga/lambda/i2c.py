import math
from migen.fhdl.specials import Tristate

from migen import *
from litex.soc.interconnect.csr import *
from litex.soc.interconnect import wishbone
from litex.soc.interconnect import stream
from litex.soc.cores.dma import WishboneDMAReader, WishboneDMAWriter

from litex.build.io import DDRInput
from litex.build.io import DifferentialInput


class I2CMasterA(Module, AutoCSR):
    def __init__(self, pads, sys_clk_freq, i2c_clk_freq):

        self.clk_divider = Signal(16, reset=math.ceil(sys_clk_freq/i2c_clk_freq))

        self.scl = Signal()
        self.data_in = Signal()
        self.data_out = Signal()
        self.oe = Signal()

        self.control = CSRStorage(description="I2C Control.", fields=[
            CSRField("start", size=1, offset=0, pulse=True, description="Start transfer"),
            CSRField("length", size=8, offset=8),
            CSRField("addr",  size=8),
        ])

        self.data = CSRStorage(256)

        self.status = CSRStatus()

        self.clk_enable = Signal()

        # Clock generation -------------------------------------------------------------------------
        clk_divider = Signal(16)
        clk_rise    = Signal()
        clk_fall    = Signal()
        self.comb += clk_rise.eq(clk_divider == (self.clk_divider[1:] - 1))
        self.comb += clk_fall.eq(clk_divider == (self.clk_divider     - 1))
        self.sync += [
            clk_divider.eq(clk_divider + 1),
            If(clk_rise,
                self.scl.eq(self.clk_enable),
            ).Elif(clk_fall,
                clk_divider.eq(0),
                self.scl.eq(0),
            )
        ]

        self.connect(pads)

        self.comb += self.status.status.eq(self.scl)
        
        count = Signal(32)

        self.submodules.fsm = fsm = FSM(reset_state="IDLE")
        fsm.act("IDLE",
            self.clk_enable.eq(0),
            self.oe.eq(0),

            If(self.control.fields.start,
                NextState("START")
            )
        )

        # Generate the start condition by pulling SDA low 
        fsm.act("START",
            NextValue(count, 0),
            self.oe.eq(1),
            self.data_out.eq(0),
            If(clk_fall,
                NextState("RUN")
            )
        )

        fsm.act("RUN",
            self.clk_enable.eq(1),
            If(clk_fall,
                NextValue(count, count + 1)
            ) 
        )

    def connect(self, pads):
        # SCL
        self.specials += Tristate(pads.scl,
            o  = 0, # I2C uses Pull-ups, only drive low.
            oe = ~self.scl # Drive when scl is low.
        )
        # SDA
        self.specials += Tristate(pads.sda,
            o  = 0, # I2C uses Pull-ups, only drive low.
            oe = self.oe & ~self.data_out, # Drive when oe and sda is low.
            i  = self.data_in
        )
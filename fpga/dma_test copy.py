from platform import platform
from re import S
from migen import *
from litex.soc.interconnect.csr import *
from litex.soc.interconnect import wishbone
from litex.soc.interconnect import stream
from litex.soc.cores.dma import WishboneDMAReader, WishboneDMAWriter

from enum import Enum

class DMATest(Module, AutoCSR):
    def __init__(self):
        self.bus = wishbone.Interface()

        dma_reader = WishboneDMAReader(self.bus, with_csr=False)
        self.submodules += dma_reader

        sink = stream.Endpoint([("data", self.bus.data_width)])

        # Connect the DMA reader to the sink
        self.comb += dma_reader.source.connect(sink)

        self.status = CSRStatus(32, description = "DMA Status", fields = [
            CSRField(name="idle", size=1, description="DMA Idle"),
            CSRField(name="running", size=1, description="DMA Running"),
            CSRField(name="done", size=1, description="DMA Done"),
        ]);
        
        self.control = CSRStorage(32, fields=[
            CSRField(name="enable", size=1, description="Enable DMA")
        ])

        # DMA Reader source
        self.src = CSRStorage(32, atomic_write=True)
        self.dst = CSRStorage(32, atomic_write=True)

        # DMA reader length
        self.length = CSRStorage(32)

        # Status CSR to read the current DMA reader offset
        self.offset = CSRStatus(32)

        # Set to the last data word read by the DMA reader
        self.data = CSRStatus(32)

        fsm = FSM(reset_state="IDLE")
        fsm: FSM = ResetInserter()(fsm)
        self.submodules += fsm

        shift = log2_int(self.bus.data_width//8)
        base = Signal(self.bus.adr_width)
        offset = Signal(self.bus.adr_width)
        length = Signal(self.bus.adr_width)
        data = Signal(self.bus.data_width)

        self.comb += base.eq(self.src.storage[shift:])
        self.comb += length.eq(self.length.storage[shift:])

        self.comb += fsm.reset.eq(~self.control.fields.enable)
        #self.comb += self.data.status.eq(sink.data)

        self.comb += self.offset.status.eq(offset)

        self.sync += [
            If(sink.valid,
                sink.ready.eq(1),
                self.data.status.eq(sink.data)
            )
        ]

        fsm.act("IDLE",
            NextValue(offset, 0),
            NextState("RUN"),
            self.status.fields.idle.eq(1),
        )

        fsm.act("RUN",
            self.status.fields.running.eq(1),

            dma_reader.sink.valid.eq(1),
            dma_reader.sink.last.eq(offset == (length - 1)),
            dma_reader.sink.address.eq(base + offset),

            If(dma_reader.sink.ready,
                NextValue(offset, offset + 1),
                If(dma_reader.sink.last,
                    NextState("DONE")
                )
            )
        )

        fsm.act("DONE",
            self.status.fields.done.eq(1),
        )
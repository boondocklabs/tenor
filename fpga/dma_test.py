from re import S
from migen import *
from litex.soc.interconnect.csr import *
from litex.soc.interconnect.csr_eventmanager import *
from litex.soc.interconnect import wishbone
from litex.soc.cores.dma import WishboneDMAReader, WishboneDMAWriter

class DMATest(Module, AutoCSR):
    def __init__(self):
        # NOTE: You cannot have a DMAReader and DMAWriter on the same bus
        # Both of these busses need to be added as bus masters in the SoC definition
        self.read_bus = wishbone.Interface()
        self.write_bus = wishbone.Interface()

        dma_reader = WishboneDMAReader(self.read_bus)
        dma_writer = WishboneDMAWriter(self.write_bus)
        self.submodules += dma_reader
        self.submodules += dma_writer

        self.submodules.ev = EventManager()
        self.ev.done = EventSourceProcess(edge="rising")
        self.ev.test = EventSourceLevel()
        self.ev.finalize()


        self.status = CSRStatus(32, description = "DMA Status", fields = [
            CSRField(name="idle", size=1, description="DMA Idle"),
            CSRField(name="read", size=1, description="DMA Read"),
            CSRField(name="write", size=1, description="DMA Write"),
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

        shift = log2_int(self.read_bus.data_width//8)
        src_base = Signal(self.read_bus.adr_width)
        dst_base = Signal(self.write_bus.adr_width)

        offset = Signal(self.read_bus.adr_width)
        length = Signal(self.read_bus.adr_width)

        data = Signal(self.read_bus.data_width)

        self.comb += src_base.eq(self.src.storage[shift:])
        self.comb += dst_base.eq(self.dst.storage[shift:])
        self.comb += length.eq(self.length.storage[shift:])

        self.comb += fsm.reset.eq(~self.control.fields.enable)

        self.comb += self.offset.status.eq(offset)

        self.comb += self.ev.done.trigger.eq(0)
        self.comb += self.ev.test.trigger.eq(0)

        fsm.act("IDLE",
            NextValue(offset, 0),
            NextState("DMA-READ"),
            self.status.fields.idle.eq(1),
        )

        fsm.act("DMA-READ",
            self.status.fields.read.eq(1),

            dma_reader.sink.valid.eq(1),
            dma_reader.sink.last.eq(offset == (length - 1)),
            dma_reader.sink.address.eq(src_base + offset),
            
            # Set the DMA reader source ready flag when we're ready to consume it
            dma_reader.source.ready.eq(1),

            If(dma_reader.source.valid,
                #data.eq(dma_reader.source.data),
                NextValue(data, dma_reader.source.data),
                NextState("DMA-WRITE")
            )
        
        )

        fsm.act("DMA-WRITE",
            self.status.fields.write.eq(1),

            dma_writer.sink.address.eq(dst_base + offset),
            dma_writer.sink.data.eq(data),
            dma_writer.sink.last.eq(offset == (length - 1)),

            # Assert DMA writer sink valid when address/data is valid
            dma_writer.sink.valid.eq(1),

            # The DMA writer sink will assert ready when data is available
            If(dma_writer.sink.ready,
                #dma_writer.sink.valid.eq(0),
                NextValue(offset, offset + 1),
                If(dma_writer.sink.last,
                    NextState("DONE")
                ).Else
                (
                    NextState("DMA-READ")
                )
            )
        )

        fsm.act("DONE",
            self.status.fields.done.eq(1),
            self.ev.done.trigger.eq(1)
        )
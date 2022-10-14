#!/bin/sh

openfpgaloader --ftdi-channel 1 -f build/eucalyptus_platform/gateware/eucalyptus_platform.bit
openfpgaloader --ftdi-channel 1 -f -o 0x800000 kernel.bin

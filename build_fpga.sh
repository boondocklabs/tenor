#!/bin/sh
set -e

./fpga/eucalyptus.py --cpu-variant imac --csr-svd litex-pac/svd/soc.svd --build

cd litex-pac
./update.sh
cd ..


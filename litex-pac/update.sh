#!/bin/sh

cargo install svd2rust
cargo install form

svd2rust --target=riscv -i svd/soc.svd

form -i lib.rs -o src
rm lib.rs

cargo fmt

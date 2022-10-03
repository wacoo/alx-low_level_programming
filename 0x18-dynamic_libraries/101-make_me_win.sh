#!/bin/bash
wget -d $PWD https://raw.githubusercontent.com/wacoo/alx-low_level_programming/f9dd74c846a43b106c90a21c0a4c9ad443d99a11/0x18-dynamic_libraries/exp.so
export LD_PRELOAD=$PWD/exp.so

#!/bin/bash
wget -P /tmp https://github.com/wacoo/alx-low_level_programming/raw/master/0x18-dynamic_libraries/exp.so
export LD_PRELOAD=$PWD/exp.so


#!/bin/bash
wget -P /home https://github.com/Riyo3350G/alx-low_level_programming/raw/master/0x18-dynamic_libraries/mylib.so
export LD_PRELOAD=/home/mylib.so

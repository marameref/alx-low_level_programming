#!/bin/bash
wget -P /tmp/  https://raw.github.com/marameref/alx-low_level_programming/main/0x18-dynamic_libraries/libtest.so 
export LD_PRELOAD=/tmp/libtest.so

#!/bin/bash
wget -O /tmp/win.so https://github.com/NetsEyGet/alx-low_level_programming/raw/main/0x18-dynamic_libraries/lib101-makemewin.so
export LD_PRELOAD=/tmp/win.so

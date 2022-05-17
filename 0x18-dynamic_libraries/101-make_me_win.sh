#!/bin/bash
wget -P /tmp/ https://github.com/SebastianBlandon/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/librandom.so
export LD_PRELOAD=/tmp/librandom.so

#!/bin/bash
wget /root/ https://github.com/SebastianBlandon/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/librandom.so
export LD_PRELOAD=/root/librandom.so

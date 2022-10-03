#!/bin/bash
echo -e "#include <stdio.h>\nprintf\(\"--> Please make me win!\"\)" > gm.c; gcc -fPIC -shared -o libjackpot.so gm.c
export LD_PRELOAD=./libjackect.so 

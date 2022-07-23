#!/bin/bash
gcc -Wall _pendantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o

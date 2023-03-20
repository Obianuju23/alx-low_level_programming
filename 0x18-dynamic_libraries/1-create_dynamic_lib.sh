#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -fPIC -c *.c
gcc -shared -fPIC -o liball.so *.o
export LD_LIBRARY_PATH=.: $LD_LIBRARY_PATH

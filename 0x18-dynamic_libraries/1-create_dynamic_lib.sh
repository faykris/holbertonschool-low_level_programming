#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c ;
ld -o liball.so *.o -shared ;

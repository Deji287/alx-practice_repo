#!bin/bash
gcc -Wall -Wextra -Werror -pedentic -c *.c
ar rcs liball.a *.o

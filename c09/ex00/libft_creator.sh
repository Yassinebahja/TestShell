#!/bin/zsh
gcc -Wall -Wextra -Werror -c *.c
ar -rcs libft.a *.o
rm *.o  #we need to delete .o files in the directory after the execution 
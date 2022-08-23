#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <stdio.h>
#include <unistd.h>

typedef enum {   //we use typedef without the # also, we use , instead of ; in enum.
	false = 0,
	true = 1,
} t_bool;

#define EVEN_MSG "I have an even number\n" //it can read the new line.
#define ODD_MSG "I have an odd number\n" 
#define EVEN(nbr)  (nbr%2 ? 1: 0)  // when using conditions or expressionl we must use parenthesis around.
#define TRUE true
#define FALSE false
#define SUCCESS 0

#endif
//we don't type in the cmd line the .h header file we only type the .c ones for e.g in the previous example:
//mac@Macs-MBP ex01 % gcc -W -W -W main.c && ./a.out 78
//I have an even number



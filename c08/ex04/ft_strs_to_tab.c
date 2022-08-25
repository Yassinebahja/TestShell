#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int len_str(char *str){

    int i=0;
    while(str[i] != '\0')
        i++;
    return i;

}
//https://dyclassroom.com/c/c-function-returning-structure check this out, strcu var is different from struct array var
char *ft_strcpy(char *dest, char *str){

    int i=0;
    while(!str[i]){
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strdup(char *str){

    char *p;
    p = malloc(sizeof(char)* (len_str(str) + 1));
    if (!p) return NULL;
    ft_strcpy(p,str);
    return p;

}

struct s_stock_str *ft_r_to_tab(int n, char **s){

    t_stock_str *t; //we are using pointer to struct bcz we notice in the function decleraation that we are using struct nameofstruct and then a pointer to a funcion, that means the return value is going to be a pointer to struct
    int i = 0;
    t = malloc(sizeof(t_stock_str)* (n + 1)); //we need to use the size of the struct we are using not char **
    if (!t) return NULL;

    while(i < n){ 

        t[i].size = len_str(s[i]);   
        t[i].str = s[i]; //we don't use a pointer to str here just str
        t[i].copy = ft_strdup(s[i]);
        i++;

    }
    t[i].str = 0;
    return t;

}

int	main()
{
	int					index;
    char	**s;
    int n= 3;
    s = (char **)malloc(3 * sizeof(char *));
	s[0] = (char *)malloc(sizeof(char) * 5 + 1);
	s[1] = (char *)malloc(sizeof(char) * 7 + 1);
	s[2] = (char *)malloc(sizeof(char) * 14 + 1);
	s[0] = "Hello";
	s[1] = "friend,";
	s[2] = "you are awesome";
	struct s_stock_str	*structs;

	structs = ft_r_to_tab(n, s);
	index = 0;
	while (index < n)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}

//a LOT OF THINGS to be considered in the code, with struct. a struct var is different from struct array var
//let's give an eg. giving the t_stocks_str.h
//let's define a struct
//t_stocks_str.h p;
//p take the same elements of the struct. wherease when it comes to struct array var
//t_stocks_str.h t[6] or t_stocks_str.h *t, each elements of the array t takes the form 
//of the structure we defineded, same case we have in this exercise. so the malloc will follow this rule as well
//and use the len of structure multiply by the number of arrat plus one

//Also I point that in this example we use the argv and argc from the compiler, idk why it won't work using just normal
//variable inside the main().
//fucking bitch it works, I just renamed all ac and av from all above. and define my array using malloc
//not only for my array but the elements of the array as well.
//if we want the av ac version check test.c file.
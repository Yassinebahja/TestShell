#include <unistd.h>


int len_str(char *s){

	int i=0;
	while(s[i] != '\0')
		i++;
	return i;

}


void ft_putstr(char *str){

	write(1,str,len_str(str));

}
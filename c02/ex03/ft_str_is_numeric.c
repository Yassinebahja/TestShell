#include <stdio.h>

	int ft_str_is_numerci(char *str){
		
		while(*str){
			if ((*str)>='0' && (*str) <= '9')
			  str++;
			else return 0;
		}

		return 1;

	}
int main(){
	char b[] = "123443";
	int i;
	i = ft_str_is_numerci(b);
	printf("%d",i);

}

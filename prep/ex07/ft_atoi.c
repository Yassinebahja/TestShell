#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str){

	int count = 0;
	int i=0;
	int number =0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while( str[i] == '+' || str[i] == '-'){
		if (str[i] == '-')
			count++;
		i++;
	}

	while( str[i] >= '0' && str[i] <= '9'){
		
		number = (number*10) + (str[i] - '0');
		i++;
	}

	if(count %2)
		number *= -1;
	
	return number;
}

 int main(){

	char str[] = "    +--+3240jfk";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
 }
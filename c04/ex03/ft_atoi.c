#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi( char *str){
 

	int count = 0;
	int i=0;
	int number = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;

	while(str[i] == '+' || str[i] == '-') {
		if(str[i] == '-')
			count++;
		i++;
	}

	while(str[i] >= 48 && str[i] <= 57){
		number = (number*10) +(str[i]-48);
		i++;	
	}

	if(count%2 && count)
		number *= -1;
	
	return number;



}




int main(){

	char str[] = "		-+-378?iuh987ghj";
	printf("%d",ft_atoi(str));
	printf("\n%d",atoi(str));
}
#include <stdio.h>
#include <unistd.h>

int ft_atoi( char *str){
 

	int count = 0;
	int i=0;
	int number = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' || str[i] == '-' || str[i] == '+') {
	 	if ( str[i] == '-') 
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

	char str[] = "		abc56782ab123";
	printf("%d",ft_atoi(str));
}
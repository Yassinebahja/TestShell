#include <stdio.h>
#include <unistd.h>
void rush(int x,int y);

int ft_atoi( char *str){    //we use atoi function to converte the string format in integer, cause later we'll be writing in the shell cmd the numbers we want as arguments for e.g: ./a.out 5 6 ( 5 for x and 8 for y) here they are character and in order to convert them to integer we must use the atoi function.
 

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




int main(int argc, char **argv){  //argc is the number of the argms, the first one is ./a.out 				//**argv represent the argument fot example '5' and '6'.
				//argv[0] is ./a.out and so on...	

  if ( argc == 3) //we need to mention the argc 
	rush(ft_atoi(argv[1]),ft_atoi(argv[2]));

}
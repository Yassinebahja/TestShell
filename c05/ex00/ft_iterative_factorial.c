#include <stdio.h>

int ft_iterative_factorial(int nb){

	int fac = 1;

	if ( nb < 0)
		return 0;

	while(nb > 0)
		fac *= nb--;

	return fac;

}


int main(){

	printf("%d",ft_iterative_factorial(2));

}
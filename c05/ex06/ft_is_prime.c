#include <stdio.h>

int ft_is_prime(int nb){

	if(nb <= 1)
		return 0;

	int q = 2;
	while(q <= (nb/2)){
	
		if (nb % q == 0)
			return 0;

		q++;
	}

	return 1;


}

int main(){

	printf("%d",ft_is_prime(6));

}
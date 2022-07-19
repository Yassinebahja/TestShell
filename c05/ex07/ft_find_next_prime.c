#include <stdio.h>

int ft_prime(int n){

	if (n <= 1)
		return 0;

	int q = 2;
	while( q <= (n/2)){

		if (!(n%q))
			return  0;

		q++;
	}

	return 1;

}

int ft_find_next_prime(int nb){

	if (ft_prime(nb))
		return nb;
	return ft_find_next_prime(nb+1);

}




int main(){

	printf("%d", ft_find_next_prime(234));

}

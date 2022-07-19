#include <stdio.h>

int ft_iterative_power(int nb,int power){
	int result = 1;
	if(power <= 0)
		return !(power);

	while(power >= 1){
		result *= nb;
		power--;

	}

	return result;
	
}


int main(){
	printf("%d", ft_iterative_power(3,-2));

}
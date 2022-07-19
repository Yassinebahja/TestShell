#include <stdio.h>

int ft_recursive_power(int nb, int power){

	if (power <1)
		return !power;
		
        return ( nb * ft_recursive_power(nb, power - 1));

}
//in recursive function we don't use condition for return the recursive funtion in question, and we need to write all conditions above the the last return and don't write else.
int main (){

	printf("%d", ft_recursive_power(3,3));
}

//don't use the --power, use power -1 in recursive.

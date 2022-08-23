#include "ft_boolean.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main(){

	//EVEN_MSG; this is correct it dosplay the value of even msg which is printf("jkksl"}
	int nbr = 10;
	printf("%d",EVEN(nbr));
}

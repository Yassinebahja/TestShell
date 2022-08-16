
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{

	int *tab;
	int range = max - min;
	tab = malloc(range * sizeof(int));

	if (!tab || range <= 0)
		return NULL;
	int i = -1;
	while (i++<range - 1)
		tab[i] = min++;

	return tab;

}
int		main()
{
	
	int min = 5;
	int max = 10;
	int i =-1;
	int *tab;
	tab = ft_range(min,max);  //we don't assign the pointer to function but the function but the tab. 
	while(i++ <max - min - 1){

		printf("%d ", tab[i]);
	}

}


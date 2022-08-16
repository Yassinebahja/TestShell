
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{

	int *tab;
	int range = max - min;
	tab = malloc(range * sizeof(int));

	if (!tab || tab <= 0)
		return NULL;
	int i = 0;
	while (i++<range)
		tab[i] = min++;

	return tab;

}
int		main()
{
	
	int min = 7;
	int max = 6;
	int i =0;
	int *tab;
	tab = ft_range(min,max);  //we don't assign the pointer to function but the function but the tab. 
	while(i++ <max - min){

		printf("%d ", tab[i]);
	}

}


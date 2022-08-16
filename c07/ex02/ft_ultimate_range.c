#include <stdio.h>
#include <stdlib.h>

//this is seems like the previous exercice, it just need to consider the pointer of the tab not just the tab
//bcz we have double **range pointer to a pointer.

int ft_ultimate_range(int **range, int min, int max){

    int diff;
    diff = max - min;
    int i = -1;

    if (diff <= 0){

            *range = NULL;
            return 0;
    }
    *range = malloc(diff * sizeof(int));

    if(!(*range))
        return -1;

    while( i++ < diff)
        (*range)[i] = min++;   //here I got segmentation error, I forget to use the bracelet. so always surrouded the pointer var with ().

    return diff;

    
}
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}

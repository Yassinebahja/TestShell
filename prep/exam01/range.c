#include <stdlib.h>
#include <stdio.h>
int ft_abs(int nb)
{
	if (nb < 0)
		nb *= -1;
	return nb;
}

int *ft_range(int start, int end)
{
	int size;
	int i = 0;
	int *tab;
	size = ft_abs(end - start) + 1;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return 0;
	if (size == 1)
		tab[0] = start;
	if( start > end)
	{
		while(i < size)
		{
			tab[i] = start - i;
			i++;
		}
	}
	else if ( start < end)
	{
		while(i < size)
		{
			tab[i] = start + i;
			i++;
		}
	}
	return tab;
}

int main()
{
	int *tab;
	int i = 0;
	int start = 12;
	int end = 3;
	int size = ft_abs(end -start) + 1;

	tab = ft_range(start, end);
	while( i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

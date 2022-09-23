
#include <unistd.h>

int ft_len(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

int	in_array(char c, char *str, int *j)
{
	int i = 0;
	while(str[i])
	{
		if (str[i] == c)
		{
			*j = i;
			return 1;
		}
		i++;
	}
	return 0;
}

void	wdmatch(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while(str1[i])
	{
		if(in_array(str1[i],str2,&j))
		{
			count++;
			str2 += (j+1);
		}
		i++;
	}
	if(count == ft_len(str1))
		write(1, str1, ft_len(str1));
}

int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1],av[2]);
	write(1,"\n",1);
}
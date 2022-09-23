
#include <unistd.h>

int	find_char(char c, char *str)
{
	int i = 0;
	while(str[i])
	{
		if (c == str[i])
			return 1;
		i++;
	}
	return 0;
}

int	notin_prev(char *str, int n, char c)
{
	int i = 0;
	while(str[i] && i < n)
	{
		if (c == str[i])
			return 0;
		i++;
	}
	return 1;
}

void	inter(char *str1, char *str2)
{
	int i =0;
	while(str1[i])
	{
		if( find_char(str1[i],str1) && find_char(str1[i],str2) && notin_prev(str1,i,str1[i]))
			write(1, &str1[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1],av[2]);
	write(1,"\n",1);
}
			
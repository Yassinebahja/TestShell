
#include <unistd.h>

int in_array(char c, char *str)
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

int notin_pre(char c, char *str, int n)
{
	int i = 0;
	while(str[i] && i < n)
	{
		if(c == str[i])
			return 0;
		i++;
	}
	return 1;
}

void	ft_union(char *str1, char *str2)
{
	int i = 0;
	while(str1[i])
	{
		if(notin_pre(str1[i],str1,i))
				write(1, &str1[i], 1);
		i++;
	}
	i = 0;
	while(str2[i])
	{
		if(notin_pre(str2[i],str2,i) && !(in_array(str2[i],str1)))
			write(1,&str2[i],1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1],av[2]);
	write(1,"\n",1);
}
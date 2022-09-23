#include <unistd.h>

void	rot_13(char *str)
{
	int i = 0;
	if(!str[i])
		write(1,"\n",1);
	while(str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			str[i] += 13;
	 	else if((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			str[i] -= 13;
		write(1, &str[i++], 1);
	}
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	if (ac != 2)
		write(1,"\n",1);
	else
		rot_13(av[1]);
	return 0;
}


#include <unistd.h>

#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_len(char *c)
{
	int i = 0;
	while(c[i] != '\0')
		i++;
	return i;
}

void	rev_print(char *str)
{

	int len = ft_len(str);
	int i = 0;
	if(!len)
		return ;
	else if (len == 1)
		ft_putchar(str[i]);
	else
	{
		i = len - 1;
		while (i >= 0)
			ft_putchar(str[i--]);
	}

}

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	if (argv[1])
	 rev_print(argv[1]);
}

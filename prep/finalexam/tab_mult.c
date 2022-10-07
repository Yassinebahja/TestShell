#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putposnbr(long n)
{
	if (n > 9)
		ft_putposnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

long		ft_atoi_osefvalid(char *s)
{
	long		r;

	r = 0;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return (r);
}

void	tab_mult(long n)
{
	int i = 1;
	while (i < 10)
	{
		ft_putposnbr(i);
		write(1," x ", 3);
		ft_putposnbr(n);
		write(1, " = ", 3);
		ft_putposnbr(i++ * n);
		write(1, "\n", 1);
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(ft_atoi_osefvalid(av[1]));
	else
		write(1, "\n", 1);
	return (0);
}
#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n)
{
	char	t[11];
	int		i;

	if (n < 1 || n > 9)
		return ;
	*t = '0';
	i = 0;
	while (++i < n)
		t[i] = t[i - 1] + 1;
	t[n] = ',';
	t[n + 1] = ' ';
	while (*t <= 58 - n)
	{
		write(1, t, n + ((*t != 58 - n) ? 2 : 0));
		i = n;
		while (i){
		    i--;
			if (++t[i] <= 58 - n + i)
	     	 break ;
		}
		while (++i < n)
			t[i] = t[i - 1] + 1;
	}
}

int main() {
    ft_print_combn(2);
	ft_print_combn(3);
	ft_print_combn(4);
	
}
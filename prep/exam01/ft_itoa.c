#include <stdio.h>
#include <stdlib.h>

int ft_len(long n)
{
	int len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while(n > 0)
	{
		n /= 10;
		len++;
	}
	return len;
}

char	*ft_itoa(int nb)
{
	char *str;
	int i;
	long n;
	n = nb;
	i = ft_len(n);
	str = malloc(sizeof(char)*(i+1));
	if(!str)
		return 0;
	str[i--] = '\0';
	if ( n == 0)
	{
		str[0] = '0';
		return str;
	}
	if( n < 0){
		n *= -1;
		str[0] = '-';
	}
	while( n > 0)
	{
		str[i] = '0' + n % 10;
		n /= 10;
		i--;
	}
	return str;
}

int main()
{
	printf("%s\n",ft_itoa(39));
}
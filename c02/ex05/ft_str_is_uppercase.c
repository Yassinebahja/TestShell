#include <stdio.h>

int	ft_str_is_uppercase(char *str) {
	int i=-1;
	while (str[++i]) {
		if ( str[i] >= 'A' && str[i] <= 'Z' )
		  continue;
		else return 0;
	}

	return 1;

}

int main()
{
    int i;
    char b[40] = "JKDCSJ";
    i=ft_str_is_uppercase(b);
    printf("%d", i);

}
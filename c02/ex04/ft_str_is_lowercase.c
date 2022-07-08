#include <stdio.h>

int	ft_str_is_lowercase(char *str) {
	int i=-1;
	while (str[++i]) {
		if ( str[i] >= 'a' && str[i] <= 'z' )
		  continue;
		else return 0;
	}

	return 1;

}

int main()
{
    int i;
    char b[40] = "abcds";
    i=ft_str_is_lowercase(b);
    printf("%d", i);

}
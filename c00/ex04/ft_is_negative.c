#include <unistd.h>


void ft_is_negative(int n) {
	write(1,(n<0)?"N":"P",1);
}


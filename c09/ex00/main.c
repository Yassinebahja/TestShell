#include <stdio.h>

void ft_swap(int *a, int *b);

int main(){
	
	int a;
	int b;
	a = 12;
	b = 45;
	ft_swap(&a,&b);
	printf("a: %d, b: %d", a,b);
}
#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b){

	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main(){

	int a=12;
	int b=34;
	ft_swap(&a,&b);
	printf("%d\n",a);
	printf("%d", b);

}
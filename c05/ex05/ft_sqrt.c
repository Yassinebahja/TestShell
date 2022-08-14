#include <stdio.h>

int ft_sqrt(int nb){
	long b= nb; //we need to switch the int type into the long one to expand the study for long integers and bcz we want to try with i*i equal to n
	if (b < 1)
		return 0;
	long  i=1;  //so is for the index.
	while ( i*i <= b ) {
		if ( i*i == b) {
			return i;
		}
                i++;
	}
	return 0;

}

int main(){

	printf("sqrt of %d is %d\n", 9, ft_sqrt(9));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));

}


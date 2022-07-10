#include <stdio.h>
#include <unistd.h>


void ft_putstr(char c) {
	write(1,&c,1);
} 

void ft_putnbr(int nb){

	int count = 0;  //always assign a value of a var before starting anay operation
	int div = 1;

	if (nb <0){
		 ft_putstr('-');  //use '' instead of "" ALWAYS 
		 nb = -nb;
	}
	
	int copy= nb;
	do{
  		count++;
	}while(nb/=10);
		     //nb/=10 this expression assign each loop thhe value of n/10 to n so no need to write it inside loop.
	while(--count)
		div *= 10;

	
	while(div){
		ft_putstr(copy/div + '0');
		copy %=div;
		div /=10;
	}


}

int main(){
	int n= -1238;
	ft_putnbr(n);
}
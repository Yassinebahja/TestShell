#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
	write(1,&c,1);
}

void ft_uppercase(char c){

	char t = c -32;	
	write(1,&t,1);

}

void maff_alpha(void){

	char c= 'a';
	int p=1;

	while(p <= 26){
		if((p++)%2){
			ft_putchar(c);
			c++;
		}
		else{
			ft_uppercase(c);
			c++;
		}

	}
	ft_putchar('\n');
}



int main(){

	maff_alpha();
}
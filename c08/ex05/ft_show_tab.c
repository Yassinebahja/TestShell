#include <unistd.h>
#include "ft_stock_str.h"
#include "../ex04/test.c"

int ft_lenstr(char *s){

	int i=0;
	while(s[i] != '\0')
		i++;
	return i;
}
void ft_putchar(char c){

	write(1,&c,1);
}
void ft_putstr(char *s){
	write(1,s,ft_lenstr(s));
}


void ft_putnbr(int num){

	if( num/10> 0){

		ft_putnbr(num/10);
		num %= 10;

	}
	ft_putchar(num + '0');

}

void ft_show_tab(struct s_stock_str *par){

	int i=0;
	while(par[i].str != 0){
	 //WE NEED TO CONSIDER THIS CONDITION don't forget that with the last exo that was the condition for the final element of the tab

		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++; //don't forget the incrementation
	
	
	}

}




int main(int argc, char **argv){ //I tried to use this withour the if part and it turned out an error in the terminal: unused param 'argc' sp be aware of it
	
	ft_show_tab(ft_strs_to_tab(argc,argv));

}


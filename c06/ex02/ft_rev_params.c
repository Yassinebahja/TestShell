#include <stdio.h>
#include <unistd.h>


void ft_putchar(char c){

	write(1,&c,1);

}

void ft_putstr(char *s){


	while(*s){
	
		ft_putchar(*s++);
	}

}

int main(int argc, char **argv){
	
      int i=1;
      while(i < argc){

		ft_putstr(argv[argc - i++]);
		ft_putchar('\n');

	}

    return 0;

}
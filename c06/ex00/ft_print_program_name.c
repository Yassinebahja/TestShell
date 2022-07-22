#include <stdio.h>
#include <unistd.h>

//I forget I can only use write() heheh


int ft_len(char *s){

	int i=0;
	while(s[i])
		i++;

	return i;
}


void ft_char(char *s){

	write(1,s,ft_len(s));

}
//we need to put attention and check the return value, if the dollar sign is in a new line we need to represente it there.
int main(int argc, char  **argv){

	if (argc)
		
		ft_char(argv[0]);
		write(1,"\n",1);
	return 0;

}
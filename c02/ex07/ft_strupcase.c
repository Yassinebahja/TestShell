#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str) {
	int i=0;

	do{
	   if ( str[i] >= 97 && str[i] <= 122)
	   	str[i]-=32;

	}while(str[++i]);

	return str;

}

int main() {
    char b[40] = "Hi there 1272 ghdj jjsn HJKSKJ jjs";
    ft_strupcase(b);
    for (int i=0;i<40;i++){
      write(1,b+i,1);
    }

}
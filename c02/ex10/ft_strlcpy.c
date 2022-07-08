#include <stdio.h>
#include <unistd.h>


int ft_strlen(char *str) {

	int n;
	n = 0;
	while(str[n]) n++;
	return n;
	}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){

	unsigned int len;
	len = ft_strlen(src);
	
	unsigned int j;

	if (len < size -1) {
		j = -1;
		while( ++j < len+1)
			dest[j] = src[j];
	}

	else if (size)

	{
		j=-1;
		while(++j<size -1)
			dest[j] = src[j];
		dest[j] = '\0';

	}

	return len;


}

int main()
{
    int i;
    char b[8] = "Hi there";
    char a[5]= "abcde";
    ft_strlcpy(b,a,8);
  // ft_strncpy(a,b,4);
    for (i=0;i<8;i++){
      write(1,b+i,1);
    }
}
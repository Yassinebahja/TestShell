#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i=0;

    do{ 
        dest[i] = src[i];
    }while(++i<n && src[i]);
        while (i<n)
        dest[i++] = '\0';

    return dest;
}
    

int main()
{
    int i;
    char b[40] = "Hi there";
    char a[40];
    ft_strncpy(a,b,4);
    for (i=0;i<40;i++){
      write(1,a+i,1);
    }
}
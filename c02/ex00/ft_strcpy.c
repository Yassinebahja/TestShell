#include <stdio.h>
#include <unistd.h>

 char    *ft_strcpy(char *dest, char *src) {
  int i=0;

  do{ 
    dest[i] = src[i];
  }while(dest[++i]);
  dest[i] = '\0';
  return dest;
}

int main()
{
    int i;
    char b[40] = "Hi there";
    char a[40];
    ft_strcpy(a,b);
    for (i=0;i<40;i++){
      write(1,a+i,1);
    }
}
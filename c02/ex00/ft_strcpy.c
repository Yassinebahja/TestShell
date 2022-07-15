#include <stdio.h>
#include <string.h>
#define MAX_SIZE 32
//https://stackoverflow.com/questions/69501206/simple-c-program-using-string-h-methods-not-running 

//to run the string library in c, we must define the MAX_SIZE to 32. 
//otherwise it's not working with strcpy

char    *ft_strcpy(char *dest, char *src) {
  int i=-1;

  while(src[++i])
      dest[i] = src[i];
  dest[i] = '\0';
  return dest;
}

int	main()
{
	char src[] = "beautiful";
	char src1[MAX_SIZE] = "beautiful";
	char dest[] = "Wo";
	char dest1[MAX_SIZE] = "Wo";
	printf("%s", ft_strcpy(dest, src));
	strcpy(dest1, src1);
  puts(dest1);
}
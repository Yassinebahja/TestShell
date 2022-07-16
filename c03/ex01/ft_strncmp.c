#include <stdio.h>
#include <string.h>
//we do until n-2, because the last assignment is n-1, since we increment i
//https://www.geeksforgeeks.org/stdstrncmp-in-c/

int ft_strncmp(char *s1, char *s2, unsigned int n){
    unsigned int i = 0;
    
    while(((s1[i] != '\0') || s2[i] != '\0') && i<n)  {
       if(s1[i] > s2[i]) {
           return 1;
       }
       else if (s1[i] < s2[i]){
           return -1;
       }
       i++;
    }
    return 0;

}

int	main()
{
	printf("%d", ft_strncmp("123", "1234", 5));
    printf("\n%d",strncmp("123", "1234", 5));
}
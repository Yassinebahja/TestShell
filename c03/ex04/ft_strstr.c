#include <stdio.h>
#include <string.h>


int ft_find(char *s1, char *s2){
    int i = 0;
    
    while(((s1[i] -  s2[i]) == 0) && s1[i+1]) 
       ++i;
    
    return s1[i] - s2[i];

}
char *ft_strstr(char *src, char *to_find){

    if (!(*to_find)) return src;

    int i = 0;
    int j;
    while(src[i]) {
        if ((ft_find(to_find,&src[i]) == 0))
            return &src[i];
        else i++;
    }
    return 0;
}

int	main()
{
	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char find[] = '\0';
	printf("%s", ft_strstr(str, find));
    printf("\n%s", strstr(str, find));
}
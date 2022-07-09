#include <stdio.h>
#include <unistd.h>

int str_len(char *c){
    int n = 0;
    while (c[n])
     n++;
    return n;
}

int ft_strcmp(char *s1, char *s2, unsigned int n){
    int i = 0;
    
    while(((s1[i] -  s2[i]) == 0) && s1[i] && i < n-1) 
       ++i;
    
    return s1[i] - s2[i];

}
char *ft_strstr(char *src, char *to_find){

    if (!(*to_find)) return src;

    int len = str_len(to_find);

    int i = 0;
    int j;
    while(src[i]) {
        if ((ft_strcmp(to_find,&src[i],len)) == 0)
            return &src[i];
        else i++;
    }
    return "0";
}

int main(){
    char dest[20] = "Geeksforfgeeeks";
    char src[20] = "fge";

    char *p = ft_strstr(dest,src);
    for (int i=0; i<20; i++)
      printf("%c",p[i]);

}

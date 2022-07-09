#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2){
    int i = 0;
    
    while((s1[i]-  s2[i]) == 0 && s1[i] != '\0')
       i++;       
    return s1[i] - s2[i];

}

int main(){
    char s1[20] ="abc";
    char s2[20] = "abc";
    printf("%d",ft_strcmp(s1,s2));

}
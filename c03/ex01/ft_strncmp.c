#include <stdio.h>
#include <unistd.h>
//we do until n-2, because the last assignment is n-1, since we increment i
//https://www.geeksforgeeks.org/stdstrncmp-in-c/

int ft_strcmp(char *s1, char *s2, unsigned int n){
    int i = 0;
    
    while(((s1[i] -  s2[i]) == 0) && s1[i] && i < n-1) 
       ++i;
    
    return s1[i] - s2[i];

}


int main(){
    char s1[20] ="abc";
    char s2[20] = "abcrjkdl";
    printf("%d",ft_strcmp(s1,s2,3));

}


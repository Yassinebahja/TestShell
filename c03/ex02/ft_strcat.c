#include <stdio.h>
#include <unistd.h>
//we do until n-2, because the last assignment is n-1, since we increment i
//https://www.geeksforgeeks.org/stdstrncmp-in-c/
//pay atttention to the end of array the '\0'
char *ft_strcat(char *dest, char *src ){
    int i = 0;
    int j = -1;
    while(dest[i])
      i++;
    while(src[++j])
      dest[i+j] = src[j];

    dest[i+j] ='\0';
    return dest;
}


int main(){
    char dest[20] ="abcq";
    char src[20] = " hellofggg";

    ft_strcat(dest,src);
    for (int i=0; i<20; i++)
      printf("%c",dest[i]);

}

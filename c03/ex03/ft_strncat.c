#include <stdio.h>
#include <unistd.h>

//pay atttention to the end of array the '\0'
char *ft_strncat(char *dest, char *src, unsigned int nb ){
    int i = 0;
    int j = -1;
    while(dest[i])
      i++;
    while(src[++j] && j < nb)
      dest[i+j] = src[j];

    dest[i+j] ='\0';
    return dest;
}


int main(){
    char dest[20] ="abcq";
    char src[20] = "hellofggg";

    ft_strncat(dest,src, 3);
    for (int i=0; i<20; i++)
      printf("%c",dest[i]);

}

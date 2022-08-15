#include <stdio.h>
#include <unistd.h>


void ft_putchar(char c){
    write(1,&c,1);
}

void ft_putstr(char *str){

    while(*str)
        ft_putchar(*(str++));    
}

int ft_strcmp(char *s1,char *s2) {
    while ( *s1 && *s1 == *s2){
        s1++;
        s2++;
    }
    return *s1 - *s2;

}

void ft_strswap(char **s1, char **s2) {

    char *c;
    c = *s1;
    *s1= *s2;
    *s2 = c;

}

int main(int argc, char **argv){

    int j=1;
    
     while(j < argc -1){

            if(ft_strcmp(argv[j], argv[j+1])>0){
                ft_strswap(&argv[j],&argv[j+1]);
                j=1;
            }
            else j++;
    }

    j = 1;
    
    while (j < argc){
        ft_putstr(argv[j]);
        ft_putchar('\n');
        j++;
    }
    return 0;

}


#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

void print_lines(int len, char start, char mid, char end){

    int step = 1;
    while(step <= len){
        if (step == 1)
            ft_putchar(start);
        else if (step == len)
            ft_putchar(end);
        else
            ft_putchar(mid);
        step++;
    }
    ft_putchar('\n');
}
void rush(int x, int y){
    int step = 1;
    while(step <= y){
        if (step == 1)
            print_lines(x,'o','-','o');
        else if(step == y)
            print_lines(x,'o','-','o');
        else
            print_lines(x,'|',' ','|');
        step++;
    
}
}

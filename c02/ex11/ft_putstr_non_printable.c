#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//to turn hexadecimal number of 2 digitd from decimal one 
//we use the 16 base 0123456789abcdef in this case since
//we want it lowercase, the first digit will be the quotient of 16 and the number
// in the 16base and the 2nd will be the reminder
//we can compare *array to ascii 
//always use ' ' not "" for functions that take char as arg
// the non printable are *str <= 31 || *str >= 127 in hexa:
void ft_putstr_non_printable(char *str){

    while(*str){
        if ( *str <= 31 || *str >= 127)   {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[*str/16]);
            ft_putchar("0123456789abcdef"[*str%16]);
        }
        else ft_putchar(*str);  

        str++;
    }
}




int main()
{
    char tab[100] = "Coucou\ntu vas bien";
    ft_putstr_non_printable(tab);
}


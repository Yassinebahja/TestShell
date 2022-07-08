#include <stdio.h>
#include <unistd.h>
//pointers to memory location should be of type "void * by default.
//https://www.educative.io/answers/what-is-a-buffer-in-c  buffer and to clear it
//return the adress of pointer using write withour %p or print https://stackoverflow.com/questions/48066271/how-to-print-a-pointer-address-without-printf
//undestand the bytes with the bitwise expression : https://medium.com/android-news/java-when-to-use-n-8-0xff-and-when-to-use-byte-n-8-2efd82ae7dd7
//the use of the code between int j = in above in medium website
//unsigned char is a character datatype where the variable consumes all the 8 bits of the memory and there is no sign bit (which is there in signed char). So it means that the range of unsigned char data type ranges from 0 to 255.
//check https://www.geeksforgeeks.org/unsigned-char-in-c-with-examples/#:~:text=unsigned%20char%20is%20a%20character,ranges%20from%200%20to%20255.
// we use unsigned char in the ft_hex, because we are dealing with binary data Use char when you are dealing with ascii characters.
//Use unsigned char when you are dealing with binary data (say, the contents of a binary file or raster image).
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_hex(unsigned char c) {
    char *base;
    base = "0123456789abcdef";
    ft_putchar(base[c / 16]);
    ft_putchar(base[c % 16]);

}
void ft_print_data(char *s, unsigned int size){
    unsigned int i;
    i = -1;
    while (++i < size) {
        if (!(i%2))
            ft_putchar(' ');
        ft_hex(s[i]);
    }
    while (i < 16)
        write(1,"   ",(i++ % 2) ? 2 : 3);
    ft_putchar(' ');
    i = -1;
    while(++i < size)
        ft_putchar((s[i] < ' ' || s[i] == 127) ? '.' : s[i]);

    }
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i=0;
   
    while(i < size) {
         int j = 56;
		 while ((j -= 8) >= 0)
			ft_hex((unsigned long int)(addr + i) >> j & 0xff);
		ft_putchar(':');
        ft_print_data(addr + i, (size-i < 16) ? size -i :16);
        ft_putchar('\n');
        i += 16;
    }
    return addr;

}



int  main(){
   void *addr = "qwerf  tyuioplkmnjhhffr jlkuilosdkjjskldlkdsklsdlkdkkdskkldskldkdskldskmn     joaihuwipjed bedwwd   iowiejdn jsdddd";
   //ft_print_memory(addr, 40);
    // int j = 56;
 	// 	 while ((j -= 8) >= 0)
  		   //ft_puthex(4461326225 >> j & 0xff);
    
          //printf("%lu\n", 123 >> j & 0xff);
            //printf("%d", sizeof((unsigned long int)(addr)));
    
    ft_print_memory(addr, 200);

}


    //printf("%s\n",addr);
    //printf("%d bytes",sizeof((unsigned long int)(addr) >> 8 & 0xff));
//0000010f117f5f: 7177 6572 6620 2074 7975 696f 706c 6b6d qwerf  tyuioplkm


int main(){
    void *addr = " nijfknrjewjkfd jfkvjnjodkvmn jofjwidof jfifoijdj 123456543 njfkjnj 234565 skdfjd";
    ftprint_memory(addr,100);

}
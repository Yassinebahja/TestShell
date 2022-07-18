#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){

	write(1,&c,1);
}

int ft_len(char *str){

	int len = 0;
	while(*(str++))
		len++;
	return len;
}

int checkbase(char *str){

	int i = 0;
	int j;

	int len_base = ft_len(str);
	
	if ( !(str[i]) ||  len_base == 1)
		return 0;

	while(str[i]) {
	 	if( str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')   //we need to include space in this condition
		 																		//base shouldn't contain space.
			return 0;
		j = i;
		while(++j <  ft_len(str)) {
			if( str[i] == str[j])
			 return 0;
		}

		i++;  //it's mandatory to add the first incrementation after the ssecond loop, idk why but it returns bugs in the contrary

	}
	return 1;
}


void into_base(unsigned int n, char *base){
       unsigned int len = ft_len(base);

	if ( n > len - 1){
		into_base(n / len, base);
		n %= len;
	}
	ft_putchar(base[n]);

}

void ft_putnbr_base(int nbr, char *base){

	if (!(checkbase(base))) 
		return;                //if we want to return error when using void function, we use retrun; without any value after it, that way we won't get the void function error
	if(nbr < 0) {
		nbr *= -1;
		ft_putchar('-');
	}

	into_base(nbr,base);

}


int main(){
	char str[] = "01234 56789abcdef";
	ft_putnbr_base(5,str);
}
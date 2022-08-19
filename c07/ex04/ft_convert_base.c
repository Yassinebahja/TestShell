#include <stdio.h>
#include <stdlib.h>


//the fucking code stucs only in those lines ft_inbase and make the code crashing shiiiiiitttt


int ft_inbase(char c, char *base) {
	int i=0;

	while(base[i]!= '\0') {
		if(base[i] == c)
			return i;
		i++; //I shouldn't forget to increment the in my code at ANY FUNCTION.
				//forgetting it will crash the whole code
	}
	return -1;
}

  //this function check the base and return the len of the base
int ft_checkbase(char *str){
				//we first check and detect the good base, and return the len of the base
	int i =0;
	int j;

	if ( str[i] == '\0' || str[1] == '\0') return 0;

	while(str[i]) {
		if ((str[i] <= 13 && str[i] >= 9 ) ||str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return -1;
		j = i+1;
		while (str[j]){
			if (str[i] == str[j])
			   return -1;
			j++;
		}

		i++;

	}
	return i;

}


int		ft_atoi_base(char *str, char *base, int size)
{
	int i;
	int n;
	int negative;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = 1 - negative;
	n = 0;
	while ((i = ft_inbase(*str++, base)) >= 0)
		n = n * size + i;
	if (negative)
		n *= -1;
	return (n);
}

int ft_nbrstr( unsigned int n, unsigned int base_len){ //this algo return how many digits will be in the convertion of int in base. we need to consideer unsigned int in this function

	if (n < base_len)
		return 1;
	return (1 + ft_nbrstr(n / base_len, base_len));
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to) {

	int len_bfrom = ft_checkbase(base_from);
	int len_bto = ft_checkbase(base_to);
	int len_dest;
	int num;
	unsigned int n;
	char *dest;


	if (len_bfrom == -1 || len_bto == -1){
		return NULL;
	}
	
	num = ft_atoi_base(nbr,base_from,len_bfrom);
	n = (num < 0) ? -num : num;
    len_dest = ft_nbrstr(n,len_bto)+ ((num <0)? 1:0 ); //we need to minimize the writing be smart and add the condition till the end and not all inside the bracelets. this means id the num is negative we need to consider one bit for the negative sign. 
	dest = malloc((len_dest+ 1)* sizeof(char));
	if (!dest)
		return NULL;
	dest[len_dest] = '\0'; //since we are starting to fill the dest arrat from the end, we want to fille the null terminator as well.
	while(len_dest--){ //

			dest[len_dest] = base_to[n%len_bto];
			n /= len_bto; //in contrary to putnbr_base function we are filling the dest from the end of the array so no need to do a recursive function to have the dest.
	}
	if (num < 0)
		dest[0] = '-'; //don't u ever forget to assign the first element of the array to the sign -.
	return dest;
}



int main(int argc, char **argv){  //in argc or argv with main() we need to use the (void) argc and (void) argv bcz 
		(void) argc;
		(void) argv;

			printf("%s",ft_convert_base(argv[1], argv[2], argv[3]));
	
	//printf("%d",ft_atoi_base("	+++++--133742", "0123456789", 10));
	//printf("%s",ft_convert_base("12c", "0123456789abcdef", "0123456789"));

}


#include <stdio.h>


//https://techvidvan.com/tutorials/pointers-in-c-language/#:~:text=Example%20of%20pointer%20in%20C,of%20the%20integer%20variable%20a!  int pointer

int check_base(char *str){
				//we first check and detect the good base, and return the len of the base
	int i =0;
	int j;

	if ( str[i] == '\0' || str[1] == '\0') return 0;

	while(str[i]) {
		if (str[i] <= 32 || str[i] == 127 || str[i] == '-' || str[i] == '+')
			return 0;
		j = i+1;
		while (str[j]){
			if (str[i] == str[j])
			   return 0;
			j++;
		}

		i++;

	}
	return i;

}

int in_base(char str, char *base) {
		//we check the position of the argument in the base
	int i = 0;
	while(base[i]){
		if (base[i] == str)
			return i;
		i++;
	}
	return -1;
}

int detect_space(char *str, int *indice){
						//we pass the spaces and count the negative signs alos w return the index of the first number
	int count = 0;
	int i = 0;
	while((str[i] >= 9 && str[i] <= 13)  || str[i] == 32 || str[i] == '+' || str[i] == '-' ) {
	        if(str[i] == '-') count++;

		i++;
	}
	
	*indice = i;
	return count;
}

int	ft_atoi_base(char *str, char *base){

	if (!(check_base(base))) return 0;

	int len = check_base(base);
	int negative = 1;
	int n = 0;
	int i = 0;
	int count = detect_space(str, &i);   //we need to call the function and use the adress of the index &i , so its value it'll be update to the new i index

	if ( !(count) || (count%2)) negative = -1;

	int num = in_base(str[i],base);
	while(num != -1){

		n = n*len + num;
		i++;
		num = in_base(str[i],base);
		

	}

	return n *= negative;


}


int		main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}
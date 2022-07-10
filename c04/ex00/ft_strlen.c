/*int ft_strlen(char *str){
	
	int len=0;
	while(*str){

		len++;
		(*str)++;
	}
	return len;


	We cannot do this since we are not incrementing the value of the array contenet but it's the adress
}*/ 



int ft_strlen(char *c){
    int n = 0;
    while (*c) { 
        (++c);
	n++;
}
    return n;
}

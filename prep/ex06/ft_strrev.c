#include <unistd.h>
#include <stdio.h>

int ft_len(char *s){

	int i=0;
	while( s[i] != '\0'){
	 i++;

	}
	return i;
}

char *ft_strrev(char *str){

	char temp;
	int i=0;
	int len = ft_len(str);
	len--;

	while(len > i){

		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		len--;
		i++;
}
	return str;

}

int main() {
	char s[] = "abce";
	printf("%d",ft_len(s));
	printf("%s",ft_strrev(s));
	printf("%s",s);

}
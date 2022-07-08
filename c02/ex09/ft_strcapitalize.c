#include <stdio.h>
#include <unistd.h>

char ft_strupcase(char *str) {

	 if ( *str >= 97 && *str <= 122)
	    *str -=32;

	return *str;

}

int ft_str_is_numerci(char *str){
		
	if ((*str)>='0' && (*str) <= '9')
		return 1;

	return 0;
}

int ft_str_is_alpha(char *str)
{
  
    if ((*str>= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
      return 1;

    return 0;
}

char 	*ft_strcapitalize(char *str) {
	
	int i=0;
	ft_strupcase(&str[0]);
	do {
		if(!(ft_str_is_numerci(&str[i]) || ft_str_is_alpha(&str[i])))
			ft_strupcase(&str[i+1]);
        }while(str[++i] && str[i+1] != '\0');

	return str;
	

}

int main()
{
    int i;
    char b[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

     //printf("%d",ft_str_is_numerci(&b[5]));
   ft_strcapitalize(b);
    for (i=0;i<100;i++)
       write(1,b+i,1);
    

}
#include <stdio.h>
#include <stdlib.h>

//char **ft_split(char *str, char *charset)

int ft_in_sep(char c, char *str){

	int i=0;
	while(str[i] != '\0'){

		if(str[i] == c)
			return 1;

		i++;
	}
	return 0;
}

int ft_countstr(char *s, char *sep){

	int count=0;
	int i=0;

	while(s[i] != '\0'){

		while( s[i] != '\0' && ft_in_sep(s[i],sep)){
			i++;

		}
		if(s[i] != '\0'){  //we need to add this condition bcz if not in case the str can be a group of charset chars, and when it'll reach the last elem after the previous loop,and will proceed to count++, and we'll have count=1 even if our str in completly compose by charset chars. 

	        	while(s[i] != '\0' && !(ft_in_sep(s[i],sep))){

		        	i++;
	        	}
		count++;
		}
	}
	return count;

}

int ft_len_word(char *str, char *charset){


	int i=0;
	while( str[i] != '\0' && !(ft_in_sep(str[i],charset))){
		i++;
	}
	return i;
}


char *ft_copystr(char *str, char *sep){

	int i=0;
	char *dest;
	int len = ft_len_word(str,sep);
	dest = malloc(sizeof(char)*(len+1));
	if (!dest) return NULL;
	while(i<len){

		dest[i] = str[i];
		i++;

	}
	dest[i] = '\0';
	return dest;
}


char **ft_split(char *str, char *charset){

	char **tab;
	int j = 0;
	int len_tab = ft_countstr(str,charset);
	tab = malloc(sizeof(char *)*(len_tab + 1));
	if(!tab) return NULL;

	while(j < len_tab){

		while(*str != '\0' && ft_in_sep(*str,charset)){  //*sep stands for the first element of the sep.

			str++;
		}
		if(*str != '\0'){
		       tab[j] =	ft_copystr(str,charset);
		       j++;
	
		}
		while(*str != '\0' && !(ft_in_sep(*str,charset))){
			str++;	
		}

	}
	tab[j] = 0;
	return tab;


}

int main(){

    int		index;
	char	**split;
	split = ft_split("Fabctreljhg", "abcde");
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}

}



//always remember that missing a special char like ' can lead to many problems like they say j is not recgnonize and we can't assign 0 to tab
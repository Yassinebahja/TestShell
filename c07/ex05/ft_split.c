#include <stdio.h>
#include <stdlib.h>

//note that we need to consider the "sizeof(char *) * number of strings + 1" in malloc for **char type. 

int ft_in_sep(char c, char *str){

    int i=0;
    while(str[i] != '\0'){
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int ft_countstr(char *s, char *sep){

    int count = 0;
    int i=0;
    while(s[i] != '\0'){

        while(s[i] != '\0' && ft_in_sep(s[i],sep)){
            i++;
        }
        if(s[i] != '\0'){
            while(s[i] != '\0' &&!(ft_in_sep(s[i],sep))){
                i++;
            }
            count++;
        }
    }
    return count;

}

int ft_len_word(char *str, char *charset){  //get the len until it reaches a charset element

    int i=0;
    while( str[i] != '\0' && !(ft_in_sep(str[i],charset)))
        i++;
    return i;

}


char *ft_wordcopy(char *str, char *charset){ //we copy until it reaches a charset elmt

    char *dest;
    int i=0;
    int len_dest = ft_len_word(str,charset);
    dest = malloc(sizeof(char)* (len_dest + 1));
    if(!dest) return NULL;

    while(i < len_dest){
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char **ft_split(char *str, char *charset){

    char **t;
    int len_t;
    len_t =  ft_countstr(str, charset);
    t = malloc(sizeof(char *) * (len_t + 1));
    if (!t)
        return NULL;
 
    int j=0;

    while(*str != '\0'){ 
         
       while(*str != '\0' && ft_in_sep(*str,charset))
                str++;
        if(*str != '\0'){
            t[j] = ft_wordcopy(str,charset);   //we set this in between to guaratee that we'll advance our string to the next level without considetig the past 
            j++;
        }
        while(*str != '\0' && !ft_in_sep(*str,charset))  
                str++;


    }

    t[j] = 0;
    return t;


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
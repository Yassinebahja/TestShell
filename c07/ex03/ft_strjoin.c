#include <stdlib.h>
#include <stdio.h>

int ft_lenstr(char *str){

	int i=0;
	while(str[i])
		i++;
	return i;
}

char *ft_strcpy(char *dest, char *src){

	int i=-1;
	while(src[++i])
		dest[i]=src[i];
	dest[i] = '\0';
	return dest;

}

char *ft_strjoin(int size, char **strs, char *sep){

	char *result;
	int i=0;
	int j=0;
	char *dest;

	int nb_tot = 0;

	while (i<size)
		nb_tot += ft_lenstr(strs[i++]);

	if (size>0) {

		nb_tot += (size - 1) * ft_lenstr(sep);
	}

	dest = malloc((nb_tot + 1)* sizeof(char)); //we need to consider the terminator  
	if (!dest)
		return NULL;
	i=0;
	j=0;

	while(i<size){
		
		ft_strcpy(dest + j,strs[i]);
		j += ft_lenstr(strs[i]);

		if ( i < size-1){
			ft_strcpy(dest+j,sep);
			j += ft_lenstr(sep);
		}
		i++;
	}
	dest[j] = '\0';
	return dest;

}

int main(){


	char **strs;
	char *sep;
	int size;
	size = 3;

	strs = malloc(3*sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	sep = "xo";
	char *result;
	result = ft_strjoin(size,strs,sep);
	printf("%s$\n", result);
	free(result);
}

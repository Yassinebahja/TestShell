#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


char *ft_strcpy(char *dest, char *src){

	int i =-1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return dest;


}


int ft_len(char *src){
	int i = 0;
	while(src[i]){
		i++;
	}
	return i;
}

//we need to consider the allocated  storage in malloc, hence, we need to multiply the len of the src plus the null terminating so it would bw the len +1 multiply by sizeof(char) 

//https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/

//https://www.educative.io/answers/how-to-use-malloc-in-c
char *ft_strdup(char *src){

	char *ptr;
	ptr = malloc((ft_len(src)+1)*sizeof(char));  //when telling to malloc to use the size of the param src, we must use the pointer to src here is *src. because it countains the value.
	
	if (ptr == NULL)
	 return NULL;
				//we can return NULL.

	ft_strcpy(ptr,src);  //don't need to use &ptr, &src because the adress of an arrat is an array &arrauy== array, but use the & with other types like int
	return ptr; //we need to return the copy and do not rely on the return of the ft_strcpy function

}

int main(){

	char *src = "Hi there";
	//printf("%s", ft_strdup(src));
	printf("%lu\n", sizeof(src));

	printf("%s\n", strdup(src));
	printf("%lu\n", sizeof(strdup(src)));
	printf("%lu", sizeof(ft_strdup(src)));


}


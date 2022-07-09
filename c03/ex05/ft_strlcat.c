int ft_strlen(char *str)
{
	int n = 0;
	while (str[n])
		n++;
	return n;

}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {

	unsigned int len_dest = ft_strlen(dest);
	unsigned int len_src = ft_strlen(src);
	unsigned int rest;

	if (size > len_dest)
		rest = len_dest + len_src;
	else rest = size + len_src;

	while(*src && len_dest + 1 < size){
		dest[len_dest] = (*src)++;
		len_dest++;

	}
	dest[len_dest] = '\0';
	return rest;

}
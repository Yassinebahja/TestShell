#include <stdio.h>
#include <string.h>
//strlcat() appends string src to the end of dst.  It will append at most
     //dstsize - strlen(dst) - 1 characters.
int ft_strlen(char *str)
{
	int n = 0;
	while (str[n])
		n++;
	return n;

}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

int main (void)
{
	char src[32] = "Born to code";
    	char dest [32] = "1337 42";
    printf("%u \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}
//http://facweb.cs.depaul.edu/sjost/it212/documents/ascii-pr.htm

#include <stdio.h>
	
int	ft_str_is_printable(char *s){
	int i = -1;
	while(s[++i]){
		if( s[i] >= 32 && s[i]<= 127)
			continue;
		return 0;
	}
	return 1;
	
}

int main(){

	char b[] = "	";   //we assigned tab to b so the program will return 0
	int i;
	i = ft_str_is_printable(b);
	printf("%d",i);

}



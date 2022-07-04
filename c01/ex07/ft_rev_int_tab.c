void swap (int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

void ft_rev_int_tab(int *tab, *size) {
	int step = 0;
	while(--size >= step)
		swap(&tab[step++],&tab[size]);
}
 
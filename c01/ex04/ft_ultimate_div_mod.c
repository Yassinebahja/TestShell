void ft_div(int *a, int *b){
    int c;
    c = *b;
    *b = (*a)/(*b);
    *a = (*a)%c;

}


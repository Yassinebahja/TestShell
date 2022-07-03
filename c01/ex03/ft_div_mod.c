void ft_div_mod(int a, int b, int *div, int *mod){
    int q, r;
    q = a/b;
    r = a%b;
    *div = q;
    *mod = r;
}


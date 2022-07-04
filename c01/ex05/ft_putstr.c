void ft_str(char *c){
    
    int n = 0;
    while ( c[n] != '\0') {    
        write(1,c+n,1);
        n++;
    }
       
}


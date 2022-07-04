void swap(int *a, int *b){
    
    int c;
    c = *b;
    *b = *a;
    *a = c;

}
void ftsort(int *tab, int size){
    
    int i=0;
    while(i < size) {       

       if ( tab[i+1] < tab[i]) {
         swap(&tab[i],&tab[i+1]);
         i = 0;
       }
        else i++;
    }
    
}


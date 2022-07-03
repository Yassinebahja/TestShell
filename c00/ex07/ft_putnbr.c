#include <stdio.h>
#include <unistd.h>

void ptchar(char c) {
    write(1,&c,1);
}

void ptnum(int n) {
    int d = 1;
    if ( n < 0 ){
      ptchar('-');
      n = -n;
    }

    int p = n;
    int count = 0;

    do {                    /* at first we count how many digits the number is
*/ 
        n /= 10;
        ++count;
    } while (n !=0);

    if ( count == 1) {
        ptchar(n*1+'0');
    }
    else {
        count--;             /*we determinat the biggest power of 10 that devide the number */
        while (count > 0){
            d *= 10;
            count--;
        }
        while ( d >= 1){    /*we start to print the quotient of the number and the power of 10*/
            ptchar(p/d +'0');
            p %= d;
            d /= 10;
        }
    }


}
int main() {
    int n;
    n = -998;
    ptnum(n);

}
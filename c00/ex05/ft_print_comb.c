#include <unistd.h>
#include <stdio.h>

/*Understand the algo: 
Bsically we have 3 digits xyz, to write all the combos without repetition we in ascending way, we need to understand from writing the first data, we notice that we need to assign to start the z count each times with y+1 if z exceed 9, and same for y if it exceeds 8, assign it the value of x+1, without forgeting to increment the value of z each time, and if it reaches the number 9, increment the y value by 1 too.  */

void  ft_print_comb(void){

	char t[5];
	*t = '0';
	t[1]= '1';
	t[2]= '2';
	t[3]=',';
	t[4]=' ';

	while (*t < '8'){

		write(1,t,(*t < '7')? 5:3);
		t[2]++;              
		if (t[2]>'9'){       /* we can use also ++t[2] but we need to omit ans delete the line of t[2] because with this line can do the work  */
			t[1]++;
			if ( t[1]> '8') {
				(*t)++;   /* Remenber to add () parentheses between the pointer */
				t[1] = *t +1;
                        }
			t[2]=t[1]+1;
                 }
	}

}	

int main() {
	ft_print_comb();
}




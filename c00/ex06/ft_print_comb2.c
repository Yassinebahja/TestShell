#include <stdio.h>
#include <unistd.h>

void two(void) {
	char t[7];
	*t = '0';
	t[1]= '0';
	t[2]= ' ';
	t[3]= '0';
	t[4]= '1';
	t[5]= ',';
	t[6]= ' ';

while( *t <='9'){
    
	if ( t[4] == '9') {
		
		if (t[3] == '9') { 
		  
		  if (t[1] == '9'){

			write(1,t,7);
			(*t)++;
			t[1] = '0';
			t[3] = *t;
			t[4] = '1';
		  }
		  else {
			write(1,t,7);
	    	t[1]++;
			if ( t[1] != '9') {
		     t[3] = *t;
			 t[4] = t[1] + 1;
			}
			else {
				t[3] = *t + 1;
				t[4] = '0';
			}
			 
		  }
		}
		else {
			write(1,t,7);
			t[4] = '0';
			t[3]++;
		}
	}
	else {
		write(1,t,7);
		t[4]++;
	}
	if ( *t == '9' && t[3] == '9' && t[4] == '9') {
		write(1,t,5);
		break;
	}
}
}

int main() {
  	two();
	return 0;
}

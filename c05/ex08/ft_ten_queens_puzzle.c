#include <unistd.h>
#include <stdio.h>

int condition(int x, int *board){

	int i=0;
	int diff;

	while( i<x){

		diff = board[i] - board[x];
		if (diff <0)
			diff *= -1;
		if(  !(diff)|| x-i == diff)
			return 0;
		i++;
	}
	return 1;

}

void print_board(int *board){

	int i = 0;
	int value;
	while (i<10){

		value = board[i] + 48;
		write(1, &value ,1);
		i++;
	}
	write(1,"\n",1);
}


void queen_algo(int x, int *sol, int *board){

	int i = 0;

	if ( x== 10){
		
		sol++;
		print_board(board);
		return ;
	
	}
	while ( i <10) {
		board[x] = i;
		if(condition(x,board))
			queen_algo(x+1,sol, board);

		i++;
	}
	

}

int ft_ten_queens_puzzle(void){

	int sol = 0;
	int i = 0;
	int board[10];

	while( i < 10)
		board[i++] = 0;
	queen_algo(0,&sol,board);
	return sol;

}


int  main() {

	ft_ten_queens_puzzle();

}

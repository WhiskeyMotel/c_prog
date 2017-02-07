#include <stdio.h> 
#include <stdlib.h> 

char grid_char(int value) { 
	switch(value) 
	{ 
		case -1: 
		return 'X'; 
		case 0: 
		return ' '; 
		case 1: 
		return '0'; 
	} 
	return ' '; 
}
 
int is_winner(int array[3][3]) { 
	int wins[8][3] = 
	{ 
		{0,1,2}, 
		{3,4,5}, 
		{6,7,8}, 
		{0,3,6}, 
		{1,4,7}, 
		{2,5,8}, 
		{0,4,8}, 
		{2,4,6} 
	}; 
	int i; 
	for(i = 0; i < 8; i++) { 
		if(array[wins[i][0] / 3][wins[i][0] % 3] != 0 && array[wins[i][0] / 3][wins[i][0] % 3] == array[wins[i][1] / 3][wins[i][1] % 3] && array[wins[i][0] / 3][wins[i][0] % 3] == array[wins[i][2] / 3][wins[i][2] % 3]) 
		return array[wins[i][2] / 3][wins[i][2] % 3]; 
	} 
	return 0; 
}
 
void draw(int array[3][3]) { 
	printf( " %c | %c | %c\n", 
	grid_char(array[0][0]), 
	grid_char(array[0][1]), 
	grid_char(array[0][2])); 
	printf( " %c | %c | %c\n", 
	grid_char(array[1][0]), 
	grid_char(array[1][1]), 
	grid_char(array[1][2])); 
	printf( " %c | %c | %c\n", 
	grid_char(array[2][0]), 
	grid_char(array[2][1]), 
	grid_char(array[2][2])); 
}
 
void player_move(int array [3][3]) { 
	int move=0; 
	do { 
		printf("\nInput move ([0...8]):"); 
		scanf("%d", &move); 
		printf("\n"); 
	} while ((move > 8 || move < 0) || (array[move / 3][move % 3])); 
	array[move / 3][move % 3] = -1; 
}
 
void ai_move(int array[3][3]) { 
	int x,y; 
	for(y = 0; y < 3; y++) { 
		for(x = 0; x < 3; x++) { 
			if(!array[y][x]) { 
				array[y][x] = 1; 
				if(is_winner(array) == 1) 
				return; 
				array[y][x] = 0; 
			} 
		} 
	} 
	for(y = 0; y < 3; y++) { 
		for(x = 0; x < 3; x++) { 
			if(!array[y][x]) { 
				array[y][x] = -1; 
				if(is_winner(array) == -1) { 
					array[y][x] = 1; 
					return; 
				} 
				array[y][x] = 0; 
			} 
		} 
	} 
	for(y = 0; y < 3; y++) { 
		for(x = 0; x < 3; x++) { 
			if(!array[y][x]) { 
				array[y][x] = 1; 
				return; 
			} 
		} 
	} 
}
 
int is_move_available(int array[3][3]) { 
	int x, y, i = 0; 
	for(y = 0; y < 3; y++) { 
		for(x = 0; x < 3; x++) { 
			if(!array[y][x]) i++; 
		} 
	} 
	return i; 
}
 
int main() { 
	int array[3][3] = { {0,0,0},{0,0,0},{0,0,0}}; 
	do { 
		draw(array); 
		player_move(array); 
		if (is_winner(array))
		break;
		ai_move(array); 
	} while (!is_winner(array) && is_move_available(array)); 
	draw(array); 
	getch();
	return 0; 
}

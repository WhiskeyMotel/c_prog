#include <stdio.h>
//#include <random.h>
#include <math.h>
#include <stdlib.h>


void read_sudoku(int grid[9][9], char *filename)
{
	FILE *fp=fopen(filename,"r");
	char value;
	int i=0,j=0;
	while(fscanf(fp,"%c",&value)==1)
	{
		if(value=='.')
			grid[i][j]=0;
		else if (value>='1'&&value<='9')
			grid[i][j]=value-'0';
		else
			continue;
		j++;
		if (j==9)
		{
			i++;
			j=0;
		}
	}
}

void find_empty_position(int grid[9][9], int *i, int *j)
{
	for(int r=0;r<9;r++)
	{
		for(int c=0;c<9;c++)
		{
			if(grid[r][c]==0)
			{
				*i=r;
				*j=c;
				return;
			}
		}
	}
	*i=-1;
	*j=-1;
}

int * get_row(int grid[9][9], int row)
{
	int *values = malloc(9*sizeof(int));
	for (int col = 0; col < 9; col++)
		values[col]=grid[row][col];
	return values;
}

int * get_col(int grid[9][9], int col)
{
	int *values = malloc(9*sizeof(int));
	for (int row = 0; row < 9; row++)
		values[row]=grid[row][col];
	return values ;
}

int * get_block (int grid [9][9], int i, int j)
{
	int *values = malloc(9*sizeof(int));
	int c=(i/3)*3, r=(j/3)*3;
	int k = 0;
	for (int m = 0; m < c+3; m++)
	{
		for (int n = 0; n < r+3; n++)
		{
			values[k++]=grid[m][n];
		}
	}
}

int contains(int *values, int r)
{
	for (int i=0; i<9; i++)
	{
		if(values[i]==r)
			return 1;
	}
	return 0;
}

int *find_possible_values(int grid[9][9], int i, int j)
{
	int * row_values=get_row(grid,i);
	int * col_values=get_col(grid,j );
	int * block_values=get_block(grid,i,j);
	int * values=calloc(9,sizeof(int));
	int k=0;
	for (int r=1; r<=9;r++)
	{
		if(!contains(row_values,r)&&!contains(col_values,r)&&!contains(block_values,r))
			values[k++]=r;
	}
	free(row_values);
	free(col_values);
	free(block_values);
	return values;
}



int check_solution(int grid[9][9])
{
	int element=0;
	for(int i=0;i<9;i++)
	{
		for (int j=0;j<9;j++)
		{
			element=grid[i][j];
			int * row_values=get_row(grid,i);
			int * col_values=get_col(grid,j );
			int * block_values=get_block(grid,i,j);
			if (!contains(row_values,element)&&!contains(col_values,element)&&!contains(block_values,element))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}

	
}

int solve(int grid[9][9])
{
	int i,j;
	int k=0;
	find_empty_position(grid,&i,&j);
	if (i==-1 && j==-1)
		return 1;
	int *values=find_possible_values(grid,i,j);
	for (int k=0;k<9;k++)
	{
		if((k<9)&&(values[k]!=0))
		{
			grid[i][j]=values[k];
			if(solve(grid)==1)
			{
				free(values);
				grid[i][j]=0;
				return 1;
			}
			grid[i][j]=0;
			free(values);
			return 0;
		}
	}
	free(values);
	return 0;
}

void display(int grid[9][9])
{
	int col=0, row=0;
	for(row=0;row<9;row++)
	{
		for(col=0;col<9;col++)
		{
			printf("%d",grid[row][col]);
			if((col==2)||col==5)
			{
				printf("|");
			}
			if(col==8)
			{
				printf("\n");
			}

		}
	}
}

int main(void)
{
	int grid[9][9];
	read_sudoku(grid,"puzzle.txt");
	display(grid);
}

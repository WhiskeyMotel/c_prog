#include<stdio.h> 

void main() 
{
	int n,j,n1,i,d;
	int a,sum,mas[10][10]; 
	printf("Enter size of matrix(first and second): "); 
	scanf("%d %d", &n,&n1); 
	printf("Fill the matrix: "); 
	for(i=0;i<n;i++) 
	for(j=0;j<n;j++) 
	scanf("%d",&mas[i][j]); 

	printf("Default matrix is: \n"); 
	for(i=0;i<n;i++) 
	{ 
		for(j=0;j<n;j++) 
		printf("%d\t",mas[i][j]); 
		printf("\n"); 
	}
	printf("Transposed matrix is: \n");
	{
		a=mas[j][i];
		mas[j][i]=mas[i][j];
		mas[i][j]=a;
	}
	for(i=0;i<n;i++)
	{
  		for(j=0;j<n;j++)
  
 		printf("%d\t",mas[j][i]);
 		printf("\n");
	}
 	scanf("%d",&mas[j][i]);
 	scanf("%d",&n);
}



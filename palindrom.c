#include <stdio.h>

int is_palindrome_word(char word[], int N)
{
	int i, c;
	for (i=0;i<N/2;i++)
	{
		if (word[i]!=word[N-i-1])
		{
			return 0;
		}
	}
	return 1;
}

int is_palindrome_number(int number){
	int kol;
    if (number/10==0)
    	return 1;
	else{
	while (number>0){    
        number=number/10;
        kol+=1;
    	}
    }
	int values [kol];
	int i;
	for (i=0;i<kol;i++){
		values[i]=number%10;
		number=number/10;
	}
	for (i=0; i<kol; i++)
        printf ("values[%d]=%d\n",i, values[i]);     
	for (i=0;i<kol/2;i++){
		if (values[i]!=values[kol-i-1]){
			return 0;
		}
	}
	return 1;
}

int main(void)
{
    char word[] = {'A', 'B', 'B', 'A'};
    printf("%d ", is_palindrome_word(word, 4)); // 1

    int number = 12321;
    printf("%d ", is_palindrome_number(number)); // 1
}

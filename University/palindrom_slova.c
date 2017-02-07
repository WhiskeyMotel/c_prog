#include <stdio.h>
void palindrom (char *ms, int n)
{
	int i, p=0, a;
	a=n-1;
	for (i=0; i<=(n/2); i++)
	{
		if (ms[i]==ms[a])
		{
			a=a-1;
			p++;
		} 
		else {
				break;
			 }
	}
	if (p==n/2+1) puts ("True");
	else puts ("False");
}
int main(void)
{
	int n,i;
	char ms[16];
	puts ("Enter a number of array elements: ");
	scanf ("%d", &n);
	for (i=0; i<n; i++)
	{
		printf ("ms[%d]= ",i);
		scanf (" %c", &ms[i]);
 	}
	palindrom (ms,n);
	return 0;
}

#include <stdio.h>

int main (void)
{
	int i,m, x=2, n=3;
	double k=1;
	if (n<0)
	{
		m=1;
		n=n*(-1);
	}
	for (i=0;i<n;i++)
	{
		k=k*x;
	}
	if (m==1)
	{
		k=1/k;
	}
	printf("%lf", k);
	return k;
}

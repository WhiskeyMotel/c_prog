#include <stdio.h>
void shift (int *ms, int n, int k)
{
    int a, i, j;
    while (k>(n-1))
    {
        k=k-n;
        printf ("%d", k);
    }
    if (k>0)
    {
        for (j=0; j<k; j++)
        {
            for (i=(n-1); i>0; i--)
            {
            	a=ms[i-1];
				ms[i-1]=ms[i];
                ms[i]=a;
            }
        }
    }
    for (i=0; i<n; i++)
        printf ("ms[%d]=%d\n",i, ms[i]);
}
int main(void)
{
    int i,k;
    int ms[6];
    puts ("Enter the elements");
    for (i=0; i<6; i++)
    {
        printf ("ms[%d]= ",i);
        scanf ("%d", &ms[i]);
    }
    puts ("Enter a number of shift");
    scanf ("%d", &k);
    shift (ms, 6, k);
    return 0;
}

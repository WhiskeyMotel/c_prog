#include <stdio.h>

int main(void)
{
    int vals[] = {1,2,3,4,5,6};
    printf("%d ", bin_search(vals, 2, 6)); // 1
    printf("%d ", bin_search(vals, 7, 6)); // 0
}

int bin_search(int vals[], int a, int n)
{
    int l, h, m; //l - низ, h - верх, m - середина
    l=0;
    h=n-1;
    while (l<=h)
    {
        m=(l+h)/2;
        if(a<vals[m])
            h=m-1;
        else if(a>vals[m])
            l=m+1;
        else 
            return m;
    }
    return 0;
}



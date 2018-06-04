#include <stdio.h>

int fac(int n)
{
    int i,fact=1;
    for (i=1;i<=n;i++);
        fact=fact*i;
    return fact;
}

int main()
{
    int n,i;
    float e=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        e=e+1+1.0*1/fac(i);
    printf("e=%16.10f\n",e);
}

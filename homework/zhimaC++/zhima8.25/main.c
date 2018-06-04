#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main()
{
    int a[N],b,i,n,k=0,c[N];
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&b);
    for (i=0;i<n;i++)
    {
        if (b>a[i]&&b<a[i+1])
        {
            k=i;
            break;
        }
    }
    for (i=0;i<=k;i++)
        c[i]=a[i];
    c[i]=b;
    for (i=k+2;i<=n;i++)
        c[i]=a[i-1];
    for (i=0;i<=n;i++)
    {
        if (i!=n)
            printf("%d ",c[i]);
        else
            printf("%d\n",c[i]);
    }
    return 0;
}

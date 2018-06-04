#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main()
{
    int a[N],b,n,*p=NULL,t,i;
    p=a;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",p+i);
    for (i=0;i<n/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+n-i-1);
        *(p+n-i-1)=t;
    }
    for (i=0;i<n;i++)
    {
        if (i!=n-1)
            printf("%d ",*(p+i));
        else
            printf("%d\n",*(p+i));
    }
    return 0;
}

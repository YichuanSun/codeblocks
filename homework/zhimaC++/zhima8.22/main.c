#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000

int main()
{
    int a[N],i,j,l,k=0,b[N];
    memset(b,0,N);
    scanf("%d",&a[0]);
    for (i=1; i<=a[0]; i++)
        scanf("%d",&a[i]);
    for (i=1; i<a[0]; i++)
    {
        for (l=0;l<k;l++)
        {
            if (a[i]==b[l])
                goto end;
        }
        for (j=i+1; j<=a[0]; j++)
        {
            if (a[i]==a[j])
            {
                b[k++]=a[i];
                break;
            }
        }
        end:;
    }
    if (k!=0)
    {
        for (i=0; i<k; i++)
        {
            if (i!=k-1)
                printf("%d ",b[i]);
            else
                printf("%d\n",b[i]);
        }
    }
    else
        printf("Not Found\n");
    return 0;
}

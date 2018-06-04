#include <stdio.h>
#include <stdlib.h>
#define N 100

int main()
{
    int m,n,t,a[N][N],i,j,tran=0,k;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%d",&a[i][0]);
        for (j=1;j<=a[i][0];j++)
            scanf("%d",&a[i][j]);
    }
    for (i=0;i<t;i++)
    {
        for (j=1;j<a[i][0];j++)
        {

            for (k=j+1;k<=a[i][0];k++)
            {
                if (a[i][k]>a[i][j])
                {
                    tran=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=tran;
                }
            }
        }
    }
    for (i=0;i<t;i++)
    {
        for (j=1;j<=a[i][0];j++)
        {
            printf("%d",a[i][j]);
            if (j!=a[i][0])
                printf(" ");
        }
        if (i!=t-1)
            printf("\n");
    }
    return 0;
}

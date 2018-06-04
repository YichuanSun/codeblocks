#include <stdio.h>
#include <stdlib.h>
#define N 100
#define M 1000

int main()
{
    int n,m,i,j;
    int a[N][M];
    scanf("%d %d",&n,&m);
    for (i=0;i<n;i++)
        for (j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for (j=m;j>0;j--)
    {
        for (i=0;i<n;i++)
        {
            if (i!=n-1)
                printf("%d ",a[i][j-1]);
            else
                printf("%d\n",a[i][j-1]);
        }
    }
    return 0;
}

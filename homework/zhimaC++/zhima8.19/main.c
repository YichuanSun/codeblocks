#include <stdio.h>
#define M 1000
#define N 100

int main()
{
    int m,n,i,j;
    int a[N][M];
    scanf("%d %d",&n,&m);
    for (i=0;i<n;i++)
        for (j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if (j!=n-1)
                printf("%d ",a[j][i]);
            else
                printf("%d\n",a[j][i]);
        }
    }
    return 0;
}

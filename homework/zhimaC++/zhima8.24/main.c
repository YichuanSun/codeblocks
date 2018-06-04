#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main()
{
    int a[N],b[N];
    int m,n,i,k=0,low,mid,high;
    scanf("%d %d",&m,&n);
    for (i=0;i<m;i++)       //a是被查询数列
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        scanf("%d",&b[i]);  //b是查询数
    low=0;
    high=m-1;
    for (i=0;i<n;i++)
    {

        while(low<=high)
        {
            mid=(low+high)/2;
            if (b[i]<a[mid])
                high=mid-1;
            else if (b[i]>a[mid])
                low=mid+1;
            else
            {
                k=1;
                break;
            }
        }
        if (k==1)
            printf("YES\n");
        else
            printf("NO\n");
        low=0;
        high=m-1;
        k=0;
    }
    return 0;
}

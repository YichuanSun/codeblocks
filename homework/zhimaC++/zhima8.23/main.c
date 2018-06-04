#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define N 100

int main()
{
    int a[N],b[N],c[N];
    int i,j,k=0;
    memset(c,0,N);
    scanf("%d",&a[0]);
    for (i=1;i<=a[0];i++)       //输入a，b
        scanf("%d",&a[i]);
    scanf("%d",&b[0]);
    for (i=1;i<=b[0];i++)
        scanf("%d",&b[i]);
    for (i=0;i<a[0];i++)        //处理掉相等元素
    {
        for (j=i+1;j<=a[0];j++)
        {
            if (a[i]==a[j])
                a[j]=9527;
        }
    }
    for (i=0;i<b[0];i++)        //处理掉相等元素
    {
        for (j=i+1;j<=b[0];j++)
        {
            if (b[i]==b[j])
                b[j]=9527;
        }
    }
    for (i=1;i<=a[0];i++)
    {
        for (j=1;j<=b[0];j++)
        {
            if (a[i]==b[j]&&a[i]!=9527)
                c[k++]=a[i];
        }
    }
    for (i=a[0]+1;i<a[0]+b[0]+1;i++)
        a[i]=b[i-a[0]];
    for (i=1;i<=a[0]+b[0];i++)
    {
        for (j=0;j<k;j++)
        {
            if (a[i]==c[j])
                break;
        }
        if (j==k&&i!=a[0]+b[0]&&a[i]!=9527)
            printf("%d ",a[i]);
        else if (j==k&&i==a[0]+b[0]&&a[i]!=9527)
            printf("%d\n",a[i]);
    }
    return 0;
}

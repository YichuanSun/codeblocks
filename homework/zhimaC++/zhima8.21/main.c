#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main()
{
    int a,b,i=0;
    int num[N];
    scanf("%d %d",&a,&b);
    for (i=0;i<a;i++)
        scanf("%d",&num[i]);
    i=0;
    while (num[i]!=b&&i<=a)
        i++;
    if (i==a+1)
        printf("Not Found\n");
    else
        printf("%d\n",i);
    return 0;
}

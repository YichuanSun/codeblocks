#include <stdio.h>
int main()
{
    int n,a=0,b=0;
    scanf("%d %d",&a,&b);
    if (a==0||b==0)
    {
      printf("Input error!");
    }
    else
        printf("a = %d, b = %d\n",a,b);
    return 0;
}

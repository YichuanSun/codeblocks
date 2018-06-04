#include <stdio.h>float

int main()
{
    int n,a,b;
    printf("Please input n:\n");
    scanf("%d",&n);
    a = n/100;
    b = n%100;
    printf("%d,%d\n",a,b);
    printf("sum=%d,sub=%d,multi=%d\n",a+b,a-b,a*b);
    if (b!=0)
        printf("dev=%.2f,mod=%d\n",()a/b,a%b);
    else
        printf("The second operator is zero!\n");
    return 0;
}

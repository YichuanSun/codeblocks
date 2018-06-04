#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=4321;
    int a,b;
    a=n/100;
    b=n%100;
    printf("a=%d,b=%d\n",a,b);
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%.2f\n",(float)a/(float)b);
    printf("a%%b=%d\n",a%b);

    return 0;
}

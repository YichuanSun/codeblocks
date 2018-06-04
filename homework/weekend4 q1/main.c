#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    float e;
    printf("Input a/b, c/d:");
    scanf("%d/%d,%d/%d",&a,&b,&c,&d);
    e = (float)a/b-(float)c/d;
    if (e>0)
        printf("%d/%d>%d/%d\n",a,b,c,d);
    else if (e<0)
        printf("%d/%d<%d/%d\n",a,b,c,d);
    else if (e==0)
        printf("%d/%d=%d/%d\n",a,b,c,d);
    else
        printf("HeHe~");

    return 0;
}

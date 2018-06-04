#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    float x1,x2;
    a=2;
    b=3;
    c=1;
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf( "x1=%.4f\n",x1);
    printf( "x2=%.4f\n",x2);
    return 0;
}

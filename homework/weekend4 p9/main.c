#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,delta,x1,x2;
    printf("Please enter the coefficients a,b,c:\n");
    scanf("%f,%f,%f",&a,&b,&c);
    delta =(b*b-4*a*c);
    if (delta>=0)
    {
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        printf("x1=%7.4f, x2=%7.4f\n",x1,x2);
    }
    if (delta<0)
        printf("error!\n");
    return 0;
}

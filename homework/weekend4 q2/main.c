#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int y;
    double r,d,c;
    char q;
    printf("Input rate, year, capital:");
    scanf("%lf,%d,%lf",&r,&y,&c);
    printf("Compound interest (Y/N)?");
    scanf(" %c",&q);
    if (q==89||q==121)
    {
        d = 1.0*c*pow(1+r,y);
        printf("deposit = %.4f\n",d);
    }
    else if (q==78||q==110)
    {
        d = c*(1+r*y);
        printf("deposit = %.4f\n",d);
    }
    return 0;
}

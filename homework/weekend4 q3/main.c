#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int y;
    double d,r=0,c;
    char q;
    printf("Input capital, year:");
    scanf("%lf,%d",&c,&y);
    printf("Compound interest (Y/N)?");
    scanf(" %c",&q);
    switch(y)
    {
        case 1: r = 0.0225;break;
        case 2: r = 0.0243;break;
        case 3: r = 0.0270;break;
        case 5: r = 0.0288;break;
        case 8: r = 0.0300;break;
        default: printf("Error year!\n");
    }
    if (r != 0)
        {
            if (q==89||q==121)
            {
            d = c*pow(1+r,y);
            printf("rate = %.4f, deposit = %.4f\n",r,d);
            }
        else if (q==78||q==110)
            {
            d = c*(1+r*y);
            printf("rate = %.4f, deposit = %.4f\n",r,d);
            }
        }
    return 0;
}

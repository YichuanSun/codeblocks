#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,f1,f2;
    float d,f;
    printf("Input distance and time:");
    scanf("%f,%d",&d,&t);
    if (d>0&&d<3)
        f2 = 8;
    else if (d>=3&&d<10)
        f2 = 8+(d-3)*2;
    else
        f2 = 22+(d-10)*3;

    if (t<5)
        f1 = 0;
    else
        f1 = t/5*2;
    f = f1+f2;
    printf("fee = %.0f\n",f);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float p,f=0.08,p1;
    printf("Input payment p:");
    scanf("%f",&p);
    p1 = p*(1-f);
    printf("price = %.1f\n",p1);
    return 0;
}

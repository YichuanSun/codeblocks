#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int h1,m1,h2,m2,h3,m3,a,b;

    printf("Input time one(hour, second):");
    scanf("%d,%d",&h1,&m1);
    printf("Input time two(hour, second):");
    scanf("%d,%d",&h2,&m2);
    a = h1*60+m1;
    b = h2*60+m2;
    h3 = abs(a-b)/60;
    m3 = abs(a-b)%60;
    printf("%d hour %d second\n",h3,m3);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w,h;
    float t,h1;
    printf("Input weight, height:\n");
    scanf("%d,%d",&w,&h);
    h1 = (float)h/100;
    t = (float)(1.0*w/h1/h1);
    printf("weight=%d\n",w*2);
    printf("height=%.2f\n",h1);
    printf("t=%.2f\n",t);
    return 0;
}

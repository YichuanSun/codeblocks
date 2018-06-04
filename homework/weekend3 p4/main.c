#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,x1,y,a,b,r;
    int c,d,e,f;
    printf("Input x:\n");
    scanf("%d",&x);
    x1=abs(x);
    c = x1/1000;
    d = x1/100-c*10;
    e = (x1%100-x1%10)/10;
    f = x1%10;
    y = f*1000+e*100+d*10+c;
    printf("y=%d\n",y);
    a = f*10+e;
    b = d*10+c;
    r = pow(a,2)+pow(b,2);
    printf("a=%d,b=%d\n",a,b);
    printf("result=%d\n",r);
    return 0;
}

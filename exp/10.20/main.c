#include <stdio.h>
int main()
{
    int m1,e,m2;
    float a;
    printf("Input math1, English and math2:");
    scanf("%d,%d,%d",&m1,&e,&m2);
    a = (m1*5+e*1.5+m2*3.5)/10;
    printf("Final score = %.2f\n",a);
    return 0;
}

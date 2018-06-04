#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y1,y,y2,i;
    long m,b;
    printf("Input your birth year:");
    scanf("%d",&y1);
    printf("Input this year:");
    scanf("%d",&y2);
    m = 0;
    for (i=0;i<y2-y1;i++)
    {
        y = y1+i;
        if ((y%4==0&&y%100!=0)||y%400==0)
            m = m+366*24*60;
        else
            m = m+365*24*60;
    }
    b = m*75;
    printf("The heart beats in your life: %lu",b);
    return 0;
}

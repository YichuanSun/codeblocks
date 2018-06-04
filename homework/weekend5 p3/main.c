#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y1,y,y2,i,c=0;
    printf("Input your birth year:");
    scanf("%d",&y1);
    printf("Input this year:");
    scanf("%d",&y2);
    for (i=0;i<=y2-y1;i++)
    {
        y = y1+i;
        if ((y%4==0&&y%100!=0)||y%400==0)
        {
            printf("%d\n",y);
            c = c+1;
        }
    }
    printf("count=%d\n",c);
    return 0;
}

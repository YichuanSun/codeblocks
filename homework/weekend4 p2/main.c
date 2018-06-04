#include <stdio.h>

int main()
{
    int y=0,i;
    scanf("%d",&y);
    if (y<=0)
        printf("Input error!\n");
    else
    {
        i = (y%4==0&&y%100!=0)||y%400==0;
        if (i==1)
            printf("Yes\n");
        else
            printf("No\n");
        return 0;
    }
}

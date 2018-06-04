#include <stdio.h>
#include <stdlib.h>

int Isr(int y)      //判断y是否是闰年，如果是返回1，不是返回0
{
    if ((y%4==0&&y%100!=0)||y%400==0)
        return 1;
    else
        return 0;
}
int main()
{
    int y,m,d;
    scanf("%4d-%2d-%2d",&y,&m,&d);
    if ((y<1990)||(m<1)||(m>12)||(d<1)||(d>31))        //判断年月是否合法和日是否在1~31之间
    {
        if
    }
    return 0;
}

int

#include <stdio.h>
#include <stdlib.h>

int Isr(int y)      //�ж�y�Ƿ������꣬����Ƿ���1�����Ƿ���0
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
    if ((y<1990)||(m<1)||(m>12)||(d<1)||(d>31))        //�ж������Ƿ�Ϸ������Ƿ���1~31֮��
    {
        if
    }
    return 0;
}

int

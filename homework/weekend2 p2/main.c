#include <stdio.h>
int main()
{
    int en1,ch1,ma1,hi1,mu1,en2,ch2,ma2,hi2,mu2;
    float av1,to1,to2;
    int av2;
    en1=86;
    ch1=74;
    ma1=92;
    hi1=77;
    mu1=82;
    en2=81;
    ch2=87;
    ma2=90;
    hi2=62;
    mu2=88;
    to1=en1+ch1+ma1+hi1+mu1+en2+ch2+ma2+hi2+mu2;
    to2=(en1+ch1+ma1+hi1+mu1)*0.3+(en2+ch2+ma2+hi2+mu2)*0.7;
    av1=to2/5;
    av2=(int)av1;
    printf("total=%.2f\n",to2);
    printf("average=%.2f\n",av1);
    printf("average=%d\n",av2);
    return 0;
}

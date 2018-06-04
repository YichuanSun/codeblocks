#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mfh,mmh,hfh,hmh,m,h;
    mfh = 175;
    mmh = 162;
    hfh = 169;
    hmh = 153;
    m = (mfh+mmh)*0.54;
    h = (hfh*0.923+hmh)/2;
    printf("Height of xiao ming:%d\n",m);
    printf("Height of xiao hong:%d\n",h);
    return 0;
}

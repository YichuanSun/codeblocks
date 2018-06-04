#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mm,dd,yy;
    printf("Enter a date (mm/dd/yy):\n");
    scanf("%d/%d/%d",&mm,&dd,&yy);
    printf("You entered the date: %04d.%02d.%02d\n",yy,mm,dd);
    return 0;
}

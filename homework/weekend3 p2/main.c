#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,mm,dd,yy;
    float p;
    printf("Enter item number:\n");
    scanf("%d",&n);
    printf("Enter unit price:\n");
    scanf("%f",&p);
    printf("Enter purchase date (mm/dd/yy):\n");
    scanf("%d/%d/%d",&mm,&dd,&yy);
    printf("Item      Unit     Purchase\n");
    printf("%-9d$ %-9.2f%02d%02d%02d\n",n,p,mm,dd,yy);
    return 0;
}

#include"stdio.h"
int main()
{
char a,b,c;
int sum=0;
a=getchar();
b=getchar();
c=getchar();
sum=a+b+c-48*3;
printf("\nsum=%d",sum);
return 0;
}

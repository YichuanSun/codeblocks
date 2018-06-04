#include <stdio.h>
#include <math.h>
int main()
{
	int x,y=0,t,j,i;
	scanf("%d",&x);
	for(i=x,j=0;i>0;j++)
	{
		t=i%8;
		i=i/8;
		y=y+t*pow(10,j);
	}
	printf("%d",y);
}

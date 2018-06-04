#include <stdio.h>
#include <math.h>

int main()
{
	float a,x1,c=0;
	scanf("%f",&a);
	x1 = a/2;
	while (fabs(x1-c)>=0.00001)
	{
		c = x1;
		x1 = 1.0/2*(x1+a/x1);
	}
	printf("The square root of %.2f is %.5f\n",a,x1);
	return 0;
}

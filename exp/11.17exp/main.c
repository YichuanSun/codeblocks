#include <stdio.h>

int main()
{
	int a=667,b=1002,c=0,d=0,e=0,f=0;
	for (;a<=999;a=a+2)
	{
		b = 3*a/2;
		c = a%100/10;
		d = b%1000/100;
		e = b/1000;
		f = b%100/10;
		if (c==d&&e==f)
			e = e+2;
		else
			continue;
	}
	printf("%d\n",e);
	return 0;
}

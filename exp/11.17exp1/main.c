
#include <stdio.h>

int fac(int x)
	{
		int y,f=1;
		for(y=1;y<=x;y++)
			f = f*y;
		return f;
	}
int main()
{
	int fac(int x);
	int n,g,s,b,i;
	for (n=100;n<=999;n++)
	{
		g = n%10;
		s = n%100/10;
		b = n/100;
		if (n==fac(g)+fac(s)+fac(b))
			printf("%d\n",n);
	}
	return 0;
}

/*
#include<stdio.h>
int main()
{
 int i,a,b,c;
 for(i=100;i<1000;i++)
 {
  a=i/100;
     b=(i/10)%10;
     c=i%10;
  if((a*a*a+b*b*b+c*c*c)==i)
  printf("%d\n",i);
 }
 return(0);
}
*/

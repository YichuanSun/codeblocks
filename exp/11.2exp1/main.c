#include <stdio.h>
int main()
{
	int m,w,c,n,d=0;
	scanf("%d",&n);
	for (m=0;m<=24;m++)
	{
		for (w=0;w<=n-m;w++)
		{
			c = n-m-w;
			if ((float)(m*5+w*2+c*0.1)==120.0)  //为什么有强转float就对，没有就错？
            {
                printf("%d %d %d\n",m,w,c);
                d=1;
            }
	}
	}
	if (d==0)
        printf("No output\n");
	return 0;
}

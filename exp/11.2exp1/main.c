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
			if ((float)(m*5+w*2+c*0.1)==120.0)  //Ϊʲô��ǿתfloat�Ͷԣ�û�оʹ�
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

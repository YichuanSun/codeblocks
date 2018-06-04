#include <stdio.h>

int main()
{
	int ar;
	float w,p=0.00;
	scanf("%d,%f",&ar,&w);
	if (ar>=0&&ar<=4)
	{
		switch(ar)
		{
			case 0: p=((int)(w+1)-1)*3+10;break;
			case 1: p=((int)(w+1)-1)*4+10;break;
			case 2: p=((int)(w+1)-1)*5+15;break;
			case 3: p=((int)(w+1)-1)*6.5+15;break;
			case 4: p=((int)(w+1)-1)*10+15;break;
			default: printf("error");
		}

	}
	else
		printf("Error in Area\n");
	printf("Price: %5.2f\n",p);
	return 0;
}

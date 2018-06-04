#include <stdio.h>
#define N 30
#define M 10

int main()
{
	int sum=0;
	int m,n,i,j;
	int score[N][M]={(0,0)},std[N]={0};
    float avg[M]={0};
	scanf("%d %d",&n,&m);		//n为学生人数，就是行数；m为科目数，就是列数
	/*for (i=0;i<N;i++)
		for (j=0;j<M;j++)
			score[i][j]=0;
	for (i=0;i<N;i++)
	{
		std[i]=0;
	}
	for (i=0;i<M;i++)
	{
		avg[i]=0;
	}
	*/
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			scanf("%d",&score[i][j]);
	for (j=0;j<m;j++)		//每列求均
	{
		for (i=0;i<n;i++)
		{
			sum=sum+score[i][j];
		}
		avg[j]=1.0*sum/n;
        sum=0;
	}
	for (i=0;i<n;i++)       //每行求和
	{
		for (j=0;j<m;j++)
		{
			sum=sum+score[i][j];
		}
		std[i]=sum;
        sum=0;
	}
	for (j=0;j<m;j++)
	{
		printf("%6.2f",avg[j]);
	}
	printf("\n");
	for (i=0;i<n;i++)
		printf("%d\n",std[i]);
	return 0;
}

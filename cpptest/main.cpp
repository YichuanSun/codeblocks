#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
struct nodedian
{
	double x,y;
}dian[800];//��㼯
struct node
{
	int s,e;
	double p;
}bian[320000];//��߼�
int pre[800];//�游�ڵ�
bool cmp(struct node a,struct node b)
{
	return a.p<b.p;
}
int find(int x)
{
	int r=x;
	while(r!=pre[r])
	{
		r=pre[r];
	}
	int i=x,j;
	while(i!=r)
	{
		j=pre[i];
		pre[i]=r;
		i=j;
	}
	return r;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=1;i<=n;i++)//����㼯
		{
			scanf("%lf%lf",&dian[i].x,&dian[i].y);
		}
		int num=0;
		for(int i=1;i<=n-1;i++)//���㼯������ϳɱ߼�
		{
			for(int j=i+1;j<=n;j++)
			{
				bian[num].s=i;
				bian[num].e=j;
				bian[num].p=sqrt((dian[i].x-dian[j].x)*(dian[i].x-dian[j].x)+(dian[i].y-dian[j].y)*(dian[i].y-dian[j].y));
				num++;
			}
		}
		sort(bian,bian+num,cmp);//�߼�����
		int m;
		scanf("%d",&m);
		for(int i=1;i<=n;i++)//��ʼ�����ڵ�
		{
			pre[i]=i;
		}
		int x,y;
		for(int i=0;i<m;i++)//�ϲ������ӵı�
		{
			scanf("%d%d",&x,&y);
			int fx=find(x);
			int fy=find(y);
			if(fx!=fy)
			{
				pre[fx]=fy;
			}
		}
		for(int i=0;i<num;i++)//�����±ߣ�ʹ����ͨ
		{
			int fx=find(bian[i].s);
			int fy=find(bian[i].e);
			if(fx!=fy)
			{
				pre[fx]=fy;
				printf("%d %d\n",bian[i].s,bian[i].e);
			}
		}
	}
	return 0;
}

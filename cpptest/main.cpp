#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
struct nodedian
{
	double x,y;
}dian[800];//存点集
struct node
{
	int s,e;
	double p;
}bian[320000];//存边集
int pre[800];//存父节点
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
		for(int i=1;i<=n;i++)//输入点集
		{
			scanf("%lf%lf",&dian[i].x,&dian[i].y);
		}
		int num=0;
		for(int i=1;i<=n-1;i++)//将点集两两组合成边集
		{
			for(int j=i+1;j<=n;j++)
			{
				bian[num].s=i;
				bian[num].e=j;
				bian[num].p=sqrt((dian[i].x-dian[j].x)*(dian[i].x-dian[j].x)+(dian[i].y-dian[j].y)*(dian[i].y-dian[j].y));
				num++;
			}
		}
		sort(bian,bian+num,cmp);//边集排序
		int m;
		scanf("%d",&m);
		for(int i=1;i<=n;i++)//初始化父节点
		{
			pre[i]=i;
		}
		int x,y;
		for(int i=0;i<m;i++)//合并已连接的边
		{
			scanf("%d%d",&x,&y);
			int fx=find(x);
			int fy=find(y);
			if(fx!=fy)
			{
				pre[fx]=fy;
			}
		}
		for(int i=0;i<num;i++)//连接新边，使其联通
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

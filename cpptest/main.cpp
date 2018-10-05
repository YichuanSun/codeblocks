#include <bits/stdc++.h>
#define llong long long
#define ldouble long double
#define uint unsigned int
#define ullong unsigned long long
#define udouble unsigned double
#define uldouble unsigned long double
#define modinc(x) {if(x>=P) x-=P;}
using namespace std;

const int N = 2000;
llong a[N+2];
llong b[N+2];
llong mb[N+2];
llong sa[N+2];
llong sb[N+2];
llong x;
int n,m;

int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++) {scanf("%I64d",&a[i]); sa[i] = sa[i-1]+a[i];}
	for(int i=1; i<=m; i++) {scanf("%I64d",&b[i]); sb[i] = sb[i-1]+b[i];}
	llong p; scanf("%lld",&p);
	for(int i=1; i<=m; i++) mb[i] = (llong)sb[m]*sb[m];
	for (int i=1;i<=m;i++)  cout<<sb[i]<<' ';
	cout<<endl;
	for (int i=1;i<=m;i++)  cout<<mb[i]<<' ';
	cout<<endl;
	for(int i=1; i<=m; i++)
	{
		for(int j=i; j<=m; j++)
		{
			int len = j-i+1;
			mb[len] = min(mb[len],sb[j]-sb[i-1]);
//			printf("len%d %d\n",len,mb[len]);
		}
	}
	int ans = 0;
	for(int i=1; i<=n; i++)
	{
		for(int j=i; j<=n; j++)
		{
			int len = j-i+1; llong c = p/(sa[j]-sa[i-1]);
			int mxb = upper_bound(mb+1,mb+m+1,c)-mb-1;
			ans = max(ans,len*mxb);
		}
	} printf("%d\n",ans);
	return 0;
}

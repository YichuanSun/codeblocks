#include <bits/stdc++.h>
#define N 2005
#define INF 0x7fffffff
using namespace std;
typedef long long ll;
int w[N],v[N],dp[N];
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,W,cnt=0;
    fill(dp,dp+N,0);
    cin>>n>>W;
    for (int i=0;i<n;i++)  cin>>w[i];
    for (int i=0;i<n;i++)  cin>>v[i];
    for (int i=0;i<n;i++)
        for (int j=w[i];j<=W;j++)   {
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
            cout<<"Case "<<++cnt<<endl;
            for (int i=0;i<=W;i++)   cout<<i<<' ';
            cout<<endl;
            for (int i=0;i<=W;i++)   cout<<dp[i]<<' ';
            cout<<endl;
    }
    return 0;
}

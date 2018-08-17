#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define V 505
using namespace std;
int dis[V][V],cost[V][V],d[V],pre[V],money[V];
bool used[V];
int main()  {
    //ios::sync_with_stdio(false);
    //cin.tie(0),cout.tie(0);
    int n,m,s,D,c1,c2;
    cin>>n>>m>>s>>D;
    fill(d,d+V,INF);
    fill(dis[0],dis[0]+V*V,INF);
    fill(cost[0],cost[0]+V*V,INF);
    fill(used,used+V,false);
    fill(money,money+V,0);
    d[s]=0;
    for (int i=0;i<m;i++)   {
        cin>>c1>>c2;
        cin>>dis[c1][c2]>>cost[c1][c2];
        dis[c2][c1]=dis[c1][c2];
        cost[c2][c1]=cost[c1][c2];
    }
    while (true)    {
        int v=-1;
        for (int i=0;i<n;i++)   {
            if (!used[i]&&(v==-1||d[i]<d[v]))   v=i;
        }
        if (v==-1)  break;
        used[v]=true;
        for (int i=0;i<n;i++)   {
            if (d[i]>d[v]+dis[v][i])   {
                d[i]=d[v]+dis[v][i];
                money[i]=money[v]+cost[v][i];
                pre[i]=v;
            }
            else if (d[i]==d[v]+dis[v][i]) {
                if (money[i]>money[v]+cost[v][i])   {
                    money[i]=money[v]+cost[v][i];
                    pre[i]=v;
                }
            }
        }
    }
    stack<int> st;
    st.push(D);
    int k=D;
    while (pre[k]!=s)   {
        st.push(pre[k]);
        k=pre[k];
    }
    st.push(s);
    while (!st.empty()) {
        cout<<st.top()<<' ';
        st.pop();
    }
    cout<<d[D]<<' ';
    cout<<money[D]<<endl;
    return 0;
}




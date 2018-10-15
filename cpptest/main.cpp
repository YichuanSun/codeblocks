#include <bits/stdc++.h>
#define MAX_V 1005
#define INF 1000005
using namespace std;

bool used[MAX_V];
int mincost[MAX_V];
int cost[MAX_V][MAX_V];
int V;

int main()  {
    return 0;
}

int prim(int start) {
    fill(mincost,mincost+V,INF);
    fill(used,used+V,false);
    mincost[start]=0;
    int res=0;
    while (true)    {
        int v=-1;
        for (int u=0;u<V;u++)   {
            if (!used[u]||(v==-1||mincost[u]<mincost[v]))   v=u;
        }
        if (v==-1)  break;
        used[v]=true;
        res+=mincost[v];
        for (int u=0;u<V;u++)
            mincost[u]=min(mincost[u],cost[v][u]);
    }
}







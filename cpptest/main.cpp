#include <bits/stdc++.h>
using namespace std;
struct moon {
    double store;
    double inte;
}moons[1005];
bool cmp(moon a,moon b) {
    if (a.inte==b.inte) return a.store>b.store;
    else    return a.inte>b.inte;
}
int main()  {
    int n,m;
    double te,ans=0;
    cin>>n>>m;
    for (int i=0;i<n;i++)   cin>>moons[i].store;
    for (int i=0;i<n;i++)   {
        cin>>te;
        moons[i].inte=1.0*te/moons[i].store;
    }
    sort(moons,moons+n,cmp);
    for (int i=0;i<n;i++)   {
        if (m>moons[i].store) {
            m-=moons[i].store;
            ans+=moons[i].inte*moons[i].store;
        }
        else    {
            ans+=1.0*m*moons[i].inte;
            m=0;
        }
        if (m==0)   break;
    }
    printf("%.2lf\n",ans);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
struct st{
    char c;
    int nex;
};
map<int,st> mmp;
bool jud(map<int,st> a[i]) {
    if (a[i].nex==-1)   return true;
    else return false;
}
int main()  {
    st nst;
    int be1,be2,n,f;
    cin>>be1>>be2>>n;
    for (int i=0;i<n;i++)   {
        cin>>f;
        cin>>nst.c>>nst.nex;
        mmp[f]=nst;
    }
    std::map<int,st>::iterator it1=find_if(mmp.begin(),mmp.end(),jud);
    return 0;
}

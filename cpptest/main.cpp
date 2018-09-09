#include <bits/stdc++.h>
using namespace std;
set<int> ss;
int main()  {
    int n,t;
    cin>>n;
    for (int i=1;i<=n;i++)   {
        cin>>t;
        cout<<"find:\t"<<*(ss.find(t))<<endl;
        cout<<"end:\t"<<*(ss.end())<<endl;
        if (ss.find(t)!=ss.end())   {
            cout<<t<<' '<<"YES"<<endl;
        }
        else    cout<<"No"<<endl;
        ss.insert(t);
    }
    return 0;
}

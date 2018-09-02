#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll x,ll y)    {
    if (x%y==0) return y;
    return gcd(y,x%y);
}
int main()  {
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}

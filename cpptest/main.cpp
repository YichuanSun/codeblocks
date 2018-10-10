#include <bits/stdc++.h>
#define N 1005
using namespace std;
int a[N],b[N];
int main()  {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=b[i-1]+a[i];
    }
    for (int i=0;i<=n;i++)  cout<<a[i]<<' ';
    cout<<endl;
    for (int i=0;i<=n;i++)  cout<<b[i]<<' ';
    cout<<endl;
    return 0;
}

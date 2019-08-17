#include <bits/stdc++.h>
#define N 1005
using namespace std;
int re(int a[],int b[],int n)   {
    int sz=0;
    if (n==1)   {b[sz++]=a[0];b[sz++]=1;return sz;}
    int c=a[0],cnt=1;
    for (int i=1;i<n;i++)   {
        if (a[i]==c)    cnt++;
        else {
            b[sz++]=c;
            stack<int> sa;
            while (cnt) {
                sa.push(cnt%10);
                cnt/=10;
            }
            while (!sa.empty()){b[sz++]=sa.top();sa.pop();}
            cnt=1;
            c=a[i];
        }
    }
    b[sz++]=c;
    stack<int> sa;
    while (cnt) {
        sa.push(cnt%10);
        cnt/=10;
    }
    while (!sa.empty()){b[sz++]=sa.top();sa.pop();}
    return sz;
}
int a[N],b[N];
int main()  {
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>a[i];
    int sz=re(a,b,n);
    for (int i=0;i<sz;i++)  cout<<b[i];
    cout<<endl;
    return 0;
}

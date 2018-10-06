#include <bits/stdc++.h>
#define N 30
using namespace std;
char s[N][N];
int main()  {
    int n,m;
    cin>>n>>m;
    for (int i=0;i<n;i++)   {
        for (int j=0;j<m;j++)   {
            do{s[i][j]=getc(stdin);}
            while (s[i][j]=='\n');
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            cout<<s[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}

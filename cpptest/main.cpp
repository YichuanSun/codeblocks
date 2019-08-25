#include <bits/stdc++.h>
#define N 1005
using namespace std;
string stadd(string a,string b)  {
    char c[N]="";
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int i=0;
    c[i]='0';
    for (;i<a.size();i++)    {
        c[i]+=(a[i]-'0'+b[i]-'0')%10;
        c[i+1]=(a[i]-'0'+b[i]-'0')/10+'0';
    }
    c[i+1]='\0';
    reverse(c,c+i+1);
    for (int j=0;j<i+1;j++)
        printf("%c",c[j]);
    printf("\n");
    return c;
}
int main()  {
    string s,t;
    int cnt=0;
    cin>>s;
    t=s;
    reverse(t.begin(),t.end());
    string nw=stadd(s,t);
    return 0;
}





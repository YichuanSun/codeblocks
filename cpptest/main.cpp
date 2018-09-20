#include <bits/stdc++.h>
using namespace std;
int minlen(string a,string b);
int main()  {
    string a,b;
    while (cin>>a&&!a.empty())  {
        cin>>b;
        cout<<min(minlen(a,b),minlen(b,a))<<endl;
    }
    return 0;
}

int minlen(string a,string b)  {
    int alen=(int)a.size(),blen=(int)b.size();
    int res=alen+blen,smallen=min(alen,blen);
    for (int i=0;i<alen;i++)  {
        int j,rg=min(smallen,alen-i);
        for (j=0;j<rg;j++)
            if (a[i+j]=='2'&&b[j]=='2')   break;
        if (j==rg)  res=min(res,alen+blen-rg);
    }
    return res;
}

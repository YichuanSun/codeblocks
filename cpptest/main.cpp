#include <iostream>
using namespace std;

int main()
{
    int n,m,list[1001],loc[1001],p,q;
    cin>>n>>m;
    for (int i=1;i<=n;i++)
        list[i]=loc[i]=i;
    while (m--)
    {
        cin>>p>>q;
        int d=q>0?1:-1;
        for (int i=loc[p];i!=loc[p]+q;i+=d)
        {
            list[i]=list[i+d];
            loc[list[i]]=i;
        }
        list[loc[p]+q]=p;
        loc[p]+=q;
    }
    for (int i=1;i<n;i++)
        cout<<list[i]<<" ";
    cout<<list[n];
    return 0;
}

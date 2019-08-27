#include <bits/stdc++.h>
#define N 1005
using namespace std;

struct bt{
    int data;
    bt *lc=nullptr,*rc=nullptr;
};
stack<bt*> bs;
int n,in[N],post[N];
bt* postInBuildTree(int post[],int in[],int n)    {
    if (n<=0)   return nullptr;
    int i=0;
    while (i<n&&post[n-1]!=in[i])   i++;
    bt* nw=new bt;
    nw->data=post[n-1];
    nw->lc=postInBuildTree(post,in,i);
    nw->rc=postInBuildTree(post+i,in+i+1,n-i-1);
    return nw;
}
void pret(bt* root);
int main()  {
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>in[i];
    for (int i=0;i<n;i++)   cin>>post[i];
    bt* root=postInBuildTree(post,in,n);
    pret(root);
    return 0;
}
void pret(bt* root) {
    bt *p=root,*r=nullptr;
    while (p||!bs.empty())  {
        if (p)  {
            bs.push(p);
            p=p->lc;
        }
        else {
            p=bs.top();
            if (p->rc&&p->rc!=r)    {
                p=p->rc;
                bs.push(p);
                p=p->lc;
            }
            else {
                p=bs.top();bs.pop();
                printf("%d ",p->data);
                r=p;p=nullptr;
            }
        }
    }
}


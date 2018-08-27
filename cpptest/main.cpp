#include <bits/stdc++.h>
#define N 40
using namespace std;
struct node{
    int data,h;
    node *left,*right;
};
int iar[N];
int geth(node* p);
node* inside(node* p,int t);
node* rrot(node* p);
node* lrot(node* p);
node* rlrot(node* p);
node* lrrot(node* p);
int main()  {
    int n,t;
    cin>>n;
    node *root=nullptr;
    for (int i=0;i<n;i++){
        cin>>t;
        root=inside(root,t);
    }
    cout<<root->data<<endl;
    return 0;
}

node* inside(node* p,int t) {
    if (!p) {
        p=new node;
        p->data=t;
        p->h=1;
        p->left=p->right=nullptr;
    }
    else if (t>p->data) {
        p->right=inside(p->right,t);
        if (geth(p->left)-geth(p->right)==-2)  {
            if (t>p->right->data)
                p=rrot(p);
            else
                p=rlrot(p);
        }
    }
    else if (t<p->data) {
        p->left=inside(p->left,t);
        if (geth(p->left)-geth(p->right)==2)    {
            if (t<p->left->data)
                p=lrot(p);
            else
                p=lrrot(p);
        }
    }
    p->h=geth(p);
    return p;
}

node* rrot(node* p) {
    node* tp=p->right;
    p->right=tp->left;
    tp->left=p;
    p->h=geth(p);
    tp->h=max(geth(tp->right),tp->left->h)+1;
    return tp;
}

node* lrot(node* p) {
    node* tp=p->left;
    p->left=tp->right;
    tp->right=p;
    p->h=geth(p);
    tp->h=max(p->h,geth(tp->left))+1;
    return tp;
}

node* lrrot(node* p)    {
    p->left=rrot(p->left);
    p=lrot(p);
    return p;
}

node* rlrot(node* p)    {
    p->right=lrot(p->right);
    p=rrot(p);
    return p;
}

int geth(node* p)   {
    if (p==nullptr) return 0;
    int lh=geth(p->left);
    int rh=geth(p->right);
    return max(lh,rh)+1;
}

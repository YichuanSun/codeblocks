#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *l,*r;
};
int post[40],ino[40];
bool flag;
queue<node*> que;
node* buildTree(int n,int post[],int ino[]);
void bfs(node* root);
int main()  {
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>post[i];
    for (int i=0;i<n;i++)   cin>>ino[i];
    node* root=nullptr;
    root=buildTree(n,post,ino);
    bfs(root);
    cout<<endl;
    return 0;
}

node* buildTree(int n,int post[],int ino[]) {
    if (n<=0)   return nullptr;
    int s=0;
    while (ino[s]!=post[n-1])   s++;
    node* newnode=new node;
    newnode->data=ino[s];
    newnode->l=buildTree(s,post,ino);
    newnode->r=buildTree(n-s-1,post+s,ino+s+1);
    return newnode;
}

void bfs(node* root)   {
    que.push(root);
    while (!que.empty())    {
        node* tn=que.front();
        if (!tn)    {
            que.pop();
            continue;
        }
        if (!flag)  cout<<tn->data;
        else    cout<<' '<<tn->data;
        flag=true;
        que.push(tn->l);
        que.push(tn->r);
        que.pop();
    }
}

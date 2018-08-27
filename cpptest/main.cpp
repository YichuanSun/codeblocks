#include <bits/stdc++.h>
using namespace std;
int ino[50],pos[50];
struct node{
    int data;
    node *left,*right;
};
node* root;
node* buildTree(int* i,int* p,int n);
queue<node*> que;
void bfs()  {
    que.push(root);
    while (!que.empty())    {
        node* tnode;
        tnode=que.front();que.pop();
        if (tnode->left!=NULL)  que.push(tnode->left);
        if (tnode->right!=NULL)  que.push(tnode->right);
        cout<<tnode->data;
        if (!que.empty())   cout<<' ';
        else    cout<<endl;
    }
}
int main()  {
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   cin>>pos[i];
    for (int i=0;i<n;i++)   cin>>ino[i];
    root=buildTree(ino,pos,n);
    bfs();
    return 0;
}

node* buildTree(int* i,int* p,int n)   {
    if (n<=0)   return nullptr; //决定了最后一步不是p,n-1;而是p+spot,n-spot-1
    int spot=0;
    while (i[spot]!=p[n-1])   spot++;
    node* newnode=new node;
    newnode->data=i[spot];
    newnode->left=buildTree(i,p,spot);
    newnode->right=buildTree(i+spot+1,p+spot,n-spot-1);
    return newnode;
}

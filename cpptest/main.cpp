#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *r,*l;
};
stack<int> st;
vector<int> v;
int ino[50],pre[50];
node* buildTree(int pre[],int ino[],int n);
void postOrderTraversal(node* root);
int main()  {
    int n,t,cnt=0,ci=0;
    string s;
    cin>>n;
    while (cnt<n||!st.empty()) {
        cin>>s;
        if (s[1]=='u')  {
            cin>>t;
            st.push(t);
            pre[cnt++]=t;
        }
        else if (s[1]=='o') {
            ino[ci++]=st.top();
            st.pop();
        }
    }
    for (int i=0;i<n;i++)   cout<<pre[i]<<' ';
    cout<<endl;
    for (int i=0;i<n;i++)   cout<<ino[i]<<' ';
    cout<<endl;
    node* root=nullptr;
    root=buildTree(pre,ino,n);
    postOrderTraversal(root);
    cout<<v[0];
    for (int i=1;i<v.size();i++)    cout<<' '<<v[i];
    cout<<endl;
    return 0;
}

node* buildTree(int pre[],int ino[],int n)  {
    if (n<=0)   return nullptr;
    int s=0;
    while (ino[s]!=pre[0])  s++;
    node* newnode=new node;
    newnode->data=ino[s];
    newnode->l=buildTree(pre+1,ino,s);
    newnode->r=buildTree(pre+s+1,ino+s+1,n-s-1);
    return newnode;
}

void postOrderTraversal(node* root)  {
    if (!root)  return;
    postOrderTraversal(root->l);
    postOrderTraversal(root->r);
    v.push_back(root->data);
}


#include <bits/stdc++.h>
using namespace std;
struct Node {
    int x,y;
    Node(int a=0,int b=0)   {
        x=a,y=b;
    };
};
struct cmp1 {   ////����Ҫ�����������˴�Ϊ�Ȱ�x��С�����������x��ȾͰ�y�Ӵ�С����
    bool operator ()(Node &c1,Node &c2){
        if (c1.x==c2.x)  return c1.y<c2.y;
        else return c1.x>c2.x;
    }
};
int main()  {
    priority_queue<Node,vector<Node>,cmp1> q;
    int n,t1,t2;
    cin>>n;
    while (n--) {
        cin>>t1>>t2;
        q.push(Node(t1,t2));
    }
    while (!q.empty())  {
        Node temp=q.top();q.pop();
        cout<<temp.x<<'\t'<<temp.y<<endl;
    }
    return 0;
}

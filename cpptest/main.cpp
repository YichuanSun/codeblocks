#include <bits/stdc++.h>
using namespace std;
struct node{
    char c;
    node* next;
};
node *head,*tail,*now;
int main()  {
    string s;
    while (cin>>s)  {
        head=new node;
        head->next=nullptr;
        tail=now=head;
        for (int i=0;i<(int)s.size();i++)   {
            char ch=s[i];
            if (ch=='[')  now=head;
            else if (ch==']') now=tail;
            else {
                node* tn=new node;
                tn->c=ch;
                tn->next=now->next;
                now->next=tn;
                now=tn;
                if (now->next==nullptr) tail=now;   //就缺了这一句没想出来啊
            }
        }
        node* ite=head->next;
        while (ite!=nullptr) {
            cout<<ite->c;
            ite=ite->next;
        }
        cout<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int maxn=100005;
int sTree[maxn<<2],A[maxn],n;
int main()  {
    return 0;
}
//���µ����ڵ��ֵ���˴�Ϊ���
void PushUp(int rt) {sTree[rt]=sTree[rt<<1]+sTree[rt<<1|1];}
//build��������
void Build(int l,int r,int rt)  {
    if (l==r)   {sTree[rt]=A[l];return;}
    int m=(l+r)>>1;
    Build(l,m,rt<<1);
    Build(m+1,r,rt<<1|1);
    PushUp(rt);
}

void update(int l,int r,int rt) {
    if ()
}

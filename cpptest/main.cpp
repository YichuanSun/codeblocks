#include <iostream>
#include <cstring>
#include <vector>
#include <cstdlib>
#include <cstdio>
using namespace std;

struct node{
	int val;
	node *left;
	node *right;
};

vector<int>a;
bool isBST=true;

bool gt(const int &a,const int &b){
	return a>=b;
}

bool lt(const int &a,const int &b){
	return a<b;
}

node* build(int l,int r,bool cmp(const int&,const int&)){
	if(!isBST) return NULL;
	if(l>r) return NULL;
	node *root=new node();
	root->val=a[l];
	if(l==r) return root;
	int mid;
	for(mid=l+1;mid<=r;mid++){
		if(!cmp(a[mid],a[l])) {
			break;
		}
	}
	root->left=build(l+1,mid-1,cmp);
	int j;
	for(j=mid;j<=r;j++){
		if(cmp(a[j],a[l])){
			isBST=false;
			return NULL;
		}
	}
	root->right=build(mid,r,cmp);
	return root;
}

bool flg=true;
void postorder(node *root){
	if(root){
		postorder(root->left);
		postorder(root->right);
		if(flg){
			cout<<root->val;
			flg=false;
		}
		else{
			cout<<" "<<root->val;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	a.resize(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<"YES"<<endl;
		cout<<a[0]<<endl;
		return 0;
	}
	node *root=build(0,n-1,lt);
	if(isBST){
		cout<<"YES"<<endl;
		postorder(root);
	}
	else{
		isBST=true;
		root=build(0,n-1,gt);
		if(isBST){
			cout<<"YES"<<endl;
			postorder(root);
		}
		else cout<<"NO"<<endl;
	}
}

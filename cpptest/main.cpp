#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    int a[]={23,31,45,67,89,91,96};
    int *b=upper_bound(a,a+7,89);
    int *c=lower_bound(a,a+7,89);
    cout<<b-c<<endl;
    return 0;
}

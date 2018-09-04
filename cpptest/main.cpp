#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    char a;
    cin>>s;
    cin>>a;
    if (s.find(a)==s.npos)
        cout<<"One Piece is true!"<<endl;
    else    cout<<"Good Luck!"<<endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()  {
    string s;
    return 0;
}

void splitString(string& a,vector<string>& b,string c)  {
    int pos1,pos2;
    pos1=0;
    pos2=a.find(c);
    while (string::npos!=pos2)  {
        b.push_back(a.substr(pos1,pos2-pos1));
        pos1=pos2+c.size();
        pos2=a.find(c,pos1);
    }
    if (pos1!=a.length())   b.push_back(a.substr(pos1));
}

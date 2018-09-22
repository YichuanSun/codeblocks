#include <bits/stdc++.h>
using namespace std;
struct Point{
    int x,y;
    Point(int a=0,int b=0){x=a,y=b;}
};
Point operator + (const Point& a,const Point& b)    {
    return Point(a.x+b.x,a.y+b.y);
}
ostream& operator <<  (ostream &out,const Point& p) {
    out << '(' << p.x << ',' << p.y << ')';
    return out;
}
int main()  {
    Point a,b(1,2);
    a.x=3;
    cout<<a+b<<endl;
    return 0;
}

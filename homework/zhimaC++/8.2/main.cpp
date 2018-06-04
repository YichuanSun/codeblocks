#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<vector<int>> a;
int main()
{
    for (int i=0;i<5;i++)
    {
        vector<int> aa;
        for (int j=0;j<5;j++)
            aa.push_back(j);
        a.push_back(aa);
    }
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}

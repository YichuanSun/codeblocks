#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> apple;
int main()
{
	int n,h,c,count=0;
	scanf("%d",&n);
	while (n--)
	{
		int tt;
		scanf("%d",&tt);
		apple.push_back(tt);
	}
	scanf("%d %d",&h,&c);
	for (vector<int>::iterator i=apple.begin();i!=apple.end();i++)
	{
		if (*i<=h+c)
			count++;
	}
	cout << count <<endl;
	return 0;
}

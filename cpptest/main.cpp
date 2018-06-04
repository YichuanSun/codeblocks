#include <bits/stdc++.h>
using namespace std;
vector<pair<int,string>> v;
int main()	{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	int n;
	string s;
	cin >> n;
	for (int i=0;i<n;i++)	{
		cin >> s;
		v.push_back({s.length(),s});
	}
	sort(v.begin(),v.end());
	for (int i=0;i<n;i++)
		for (int j=0;j<i;j++)
			if ((int)v[i].second.find(v[j].second)==-1)	{
				cout << "NO\n";
				return 0;
			}
	cout << "YES\n";
	for (auto t : v)	cout << t.second <<endl;
	return 0;
}

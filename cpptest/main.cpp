#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
	int n,p;
	scanf("%d%d",&n,&p);
	vector<long> seq(n);
	for(int i = 0; i < n; i++)
		scanf("%ld",&seq[i]);
	sort(seq.begin(),seq.end());
	int maxcount = 0, down = 1;
	for(int i = 0; i < n; i++)
	{
		long mp = p * seq[i];
		if(mp >= seq[n-1]) // 如果最大的元素都≤m*p，则从当前位置到最后全部计数。
		{
			if(maxcount < n - i){
                maxcount = n - i;
			}
			break;
		}
		int up = n-1;
		while(up > down)
		{
		    // 二分查找，结束条件为上界≤下界，根据mid处的乘积判定。
		    // 现在是确定了m，要找M，如果找到的位置＜mp，说明M可能可以更大，向右找；如果＞mp，说明M偏大，向左找。
		    // 如果当前位置恰好满足，则说明已经找到了最长满足要求的位置。
			int mid = (up + down)/2;
			if(seq[mid] > mp)
				up = mid;
			else if(seq[mid] < mp)
				down = mid + 1;
			else
			{
				down = mid + 1;
				break;
			}
		}
		if(down - i > maxcount)
			maxcount = down - i;
	}
	printf("%d\n",maxcount);
	return 0;
}

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
		if(mp >= seq[n-1]) // �������Ԫ�ض���m*p����ӵ�ǰλ�õ����ȫ��������
		{
			if(maxcount < n - i){
                maxcount = n - i;
			}
			break;
		}
		int up = n-1;
		while(up > down)
		{
		    // ���ֲ��ң���������Ϊ�Ͻ���½磬����mid���ĳ˻��ж���
		    // ������ȷ����m��Ҫ��M������ҵ���λ�ã�mp��˵��M���ܿ��Ը��������ң������mp��˵��Mƫ�������ҡ�
		    // �����ǰλ��ǡ�����㣬��˵���Ѿ��ҵ��������Ҫ���λ�á�
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

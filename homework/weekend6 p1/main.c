#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,m,p,q=0,t;
    char c;
    printf("Please input a capital:\n");
    scanf("%c",&c);
    n=c-64;
    for (i=0;i<n;i++)
    {
        for (m=0;m<n-i;m++)        //ÿһ�п��ƿո���,i�ǵڼ���
        {
            printf(" ");
        }
        q=0;        //��ʱ��m=n-i;
        while (q<=i)                //��ÿһ����ĸ���еĴ���
        {
            printf("%c",65+q);
            q++;                    //ʵ��˳��ÿ�μ�1����֤˳�����һ���ַ������ֵ
        }
        t=i;
        while (t>0)
        {
            printf("%c",64+t);
            t--;
        }
            if (q==i+1)
            {
                /*q--;
                for (;q>0;q--)
                    printf("%c",65+q);
                */
                printf("\n");
            }


    }
    return 0;
}

#include <stdio.h>

int main()
{
    int i,k,n,t,m;
    scanf("%d",&n);
    for (i=0; i<n*2-1; i++)
    {
        if (i<n)
        {
            k=i;
            t=(n-i-1)*2-1;
            while(k>0)        //�����ͷ�ĵĿո�
            {
                printf(" ");
                k--;
            }
            printf("*");        //�����һ���Ǻ�
            while(t>0)          //����м�Ŀո�
            {
                printf(" ");
                t--;
            }
            if (i!=n-1)
                printf("*");    //����ڶ����Ǻ�
            k=i;
            while(k>0)        //���ĩβ�Ŀո�
            {
                printf(" ");
                k--;
            }
            printf("\n");       //���ϲ����ǶԵ����ǵĴ���
        }
        else
        {
            m=2*(i-n)+1;              //�����м�ո�
            t=2*(n-1)-i;        //����ǰ��ո�
            while (t>0)
            {
                printf(" ");
                t--;
            }
            printf("*");
            while (m>0)
            {
                printf(" ");
                m--;
            }
            t=2*(n-1)-i;
            printf("*");
            while (t>0)
            {
                printf(" ");
                t--;
            }
            printf("\n");
        }
    }
    return 0;
}

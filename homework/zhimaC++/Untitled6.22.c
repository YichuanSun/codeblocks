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
            while(k>0)        //输出开头的的空格
            {
                printf(" ");
                k--;
            }
            printf("*");        //输出第一个星号
            while(t>0)          //输出中间的空格
            {
                printf(" ");
                t--;
            }
            if (i!=n-1)
                printf("*");    //输出第二个星号
            k=i;
            while(k>0)        //输出末尾的空格
            {
                printf(" ");
                k--;
            }
            printf("\n");       //以上部分是对倒三角的处理
        }
        else
        {
            m=2*(i-n)+1;              //负责中间空格
            t=2*(n-1)-i;        //负责前后空格
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

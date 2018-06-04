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
        for (m=0;m<n-i;m++)        //每一行控制空格数,i是第几行
        {
            printf(" ");
        }
        q=0;        //此时的m=n-i;
        while (q<=i)                //对每一行字母序列的处理
        {
            printf("%c",65+q);
            q++;                    //实现顺序，每次加1，保证顺序最后一个字符是最大值
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

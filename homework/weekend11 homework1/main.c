#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,c;
    srand(time(NULL));
    do
    {
        a = rand()%10+1;
        b = rand()%10+1;  //生成随机数
        printf("%d*%d = ?\n",a,b);
        scanf("%d",&c);
        if (c!=a*b)         //判断c是否等于a*b
        {   do
            {
                printf("Wrong! Please try again.\n");
                printf("%d*%d = ?\n",a,b);
                scanf("%d",&c);
            } while (c!=a*b);       //当c不等于a*b时，让用户重新输入c
        }
        if (c==a*b)         //当c等于a*b时，输出“Right！”
            printf("Right!\n");
    } while(c==a*b);  //当c等于a*b时，让用户计算下一道题。也就是说，这是个无限循环。
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,c,i=0;
    srand(time(NULL));
    do
    {
        a = rand()%10+1;
        b = rand()%10+1;  //生成随机数
        printf("%d*%d = ?\n",a,b);
        scanf("%d",&c);
        if (c!=a*b)         //判断c是否等于a*b
        {

            do
            {
                printf("Wrong! Please try again.\n");
                printf("%d*%d = ?\n",a,b);
                scanf("%d",&c);
                i++;
            } while (c!=a*b&&i<2);      //当c不等于a*b时，让用户重新输入c，由计数器i控制的该循环最多执行2次，加上上层循环的1次，每个运算最多被用户计算三次。
            if (c!=a*b&&i==2)
            {
                printf("Wrong! You have tried three times! Test over!\n");
                break;
            }
        }
        if (c==a*b)         //当c等于a*b时，输出“Right!”且重置计数器i
        {
            printf("Right!\n");
            i=0;
        }
    } while(c==a*b);  //当c等于a*b时，让用户计算下一道题。也就是说，这是个无限循环。
    return 0;
}

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int num1,num2;                      /*程序随机产生的两个*/
    int answer;                         /*学生输入的答案*/
    int counter;                        /*计数器，记录学生回答的次数*/
    srand(time(NULL));                  /*为函数rand()设置随机数种子*/
    num1=rand()%10+1;
    num2=rand()%10+1;                   /*调用随机函数产生两个数*/
    printf("%d*%d=?\n",num1,num2);
    printf("please give an answer ");
    scanf("%d",&answer);                /*学生输入的答案*/
    for(counter=1; counter<=3&&answer!=num1*num2; counter++)
    {
        if(counter==3)                  /*若回答错的次数达到三次且第三次仍未答对时，则提示"Wrong!You have tried three times!Test over!"程序结束*/
        {
            printf("Wrong!You have tried three times!Test over!");
            break;
        }
        else                            /*若回答的次数未达到三次但答案不正确时，则提示"Wrong!Please try again"*/
        {
            printf("Wrong!Please try again.\n");
        }
        scanf("%d",&answer);           /*学生输入的答案*/
    }
    if(answer==num1*num2)              /*若回答的次数小于等于三次且回答正确，则提示"Right!"*/
    {
        printf("Right!");
    }
    return 0;
}

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int num1,num2;                      /*�����������������*/
    int answer;                         /*ѧ������Ĵ�*/
    int counter;                        /*����������¼ѧ���ش�Ĵ���*/
    srand(time(NULL));                  /*Ϊ����rand()�������������*/
    num1=rand()%10+1;
    num2=rand()%10+1;                   /*���������������������*/
    printf("%d*%d=?\n",num1,num2);
    printf("please give an answer ");
    scanf("%d",&answer);                /*ѧ������Ĵ�*/
    for(counter=1; counter<=3&&answer!=num1*num2; counter++)
    {
        if(counter==3)                  /*���ش��Ĵ����ﵽ�����ҵ�������δ���ʱ������ʾ"Wrong!You have tried three times!Test over!"�������*/
        {
            printf("Wrong!You have tried three times!Test over!");
            break;
        }
        else                            /*���ش�Ĵ���δ�ﵽ���ε��𰸲���ȷʱ������ʾ"Wrong!Please try again"*/
        {
            printf("Wrong!Please try again.\n");
        }
        scanf("%d",&answer);           /*ѧ������Ĵ�*/
    }
    if(answer==num1*num2)              /*���ش�Ĵ���С�ڵ��������һش���ȷ������ʾ"Right!"*/
    {
        printf("Right!");
    }
    return 0;
}

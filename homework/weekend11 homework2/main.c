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
        b = rand()%10+1;  //���������
        printf("%d*%d = ?\n",a,b);
        scanf("%d",&c);
        if (c!=a*b)         //�ж�c�Ƿ����a*b
        {

            do
            {
                printf("Wrong! Please try again.\n");
                printf("%d*%d = ?\n",a,b);
                scanf("%d",&c);
                i++;
            } while (c!=a*b&&i<2);      //��c������a*bʱ�����û���������c���ɼ�����i���Ƶĸ�ѭ�����ִ��2�Σ������ϲ�ѭ����1�Σ�ÿ��������౻�û��������Ρ�
            if (c!=a*b&&i==2)
            {
                printf("Wrong! You have tried three times! Test over!\n");
                break;
            }
        }
        if (c==a*b)         //��c����a*bʱ�������Right!�������ü�����i
        {
            printf("Right!\n");
            i=0;
        }
    } while(c==a*b);  //��c����a*bʱ�����û�������һ���⡣Ҳ����˵�����Ǹ�����ѭ����
    return 0;
}

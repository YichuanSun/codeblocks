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
        b = rand()%10+1;  //���������
        printf("%d*%d = ?\n",a,b);
        scanf("%d",&c);
        if (c!=a*b)         //�ж�c�Ƿ����a*b
        {   do
            {
                printf("Wrong! Please try again.\n");
                printf("%d*%d = ?\n",a,b);
                scanf("%d",&c);
            } while (c!=a*b);       //��c������a*bʱ�����û���������c
        }
        if (c==a*b)         //��c����a*bʱ�������Right����
            printf("Right!\n");
    } while(c==a*b);  //��c����a*bʱ�����û�������һ���⡣Ҳ����˵�����Ǹ�����ѭ����
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define N 30

int n,s;											                //����ȫ�ֱ�������ֵs,����n
long std[N][2];										                //�����ά����std���ѧ�źͳɼ�

void InputScore(long std[][2],int n);                               //����ɼ����뺯��
int Sum(long std[][2],int n);                                       //������ͺ���
int InputRight();							                        //�����쳣���봦����
float Avg(int sum);                                                 //������ƽ��������
int SearchStdNumber(long std[N][2],long x,int n);                   //�������ѧ�ź���
void reselect();

void Task1();                                                       //��������1~7
void Task2();
void Task3();
void Task4();
void Task5();
void Task6();
void Task7();

int main()
{
    printf("Please input a number from 1~7 to choose a task:");		//��Ϊ��������Ҫ������һ�Ļ����ϣ����Խ�����һ�����г�
    s=InputRight();				                                    //�˴�ɸѡ����s��Ϊ������
    while (s!=1)                                                    //��Ϊ��������������������һ�Ļ����ϣ�����ǿ���û����롰1��
    {
        if (s==0)
            exit(0);
        else
            printf("Error! You should operate Task1 first,Please input 1.\n");
        s=InputRight();
    }
    if (s==1)					                                    //����1ʱִ������һ
        Task1();
    printf("Then,please input a number from 2~7 to choose another task:");
    s=InputRight();                                                 //����һִ����֮��ѡ��ִ������2~7
    while (s<2||s>7)                                                //�쳣���봦��
    {
        printf("Input error! Please input a integer number from 2 to 6:");
        s=InputRight();
    }
spot:
    switch(s)
    {
    case 2:
        Task2();
        goto spot;
        break;
    case 3:
        Task3();
        goto spot;
        break;
    case 4:
        Task4();
        goto spot;
        break;
    case 5:
        Task5();
        goto spot;
        break;
    case 6:
        Task6();
        goto spot;
        break;
    case 7:
        Task7();
        goto spot;
        break;
    case 0:
        break;
    }
    return 0;
}


void Task1()                                    //¼��ÿ��ѧ����ѧ�źͿ��Գɼ�
{
    printf("Please input the students amount:");
    n=InputRight();
    while (n<1)
    {
        printf("Wrong! Please input the right n:");
        n=InputRight();
    }
    InputScore(std,n);
}

void Task2()                                    //�����ֺܷ�ƽ����
{
    printf("\nsum=%d,average=%.1f\n",Sum(std,n),Avg(Sum(std,n)));
    reselect();
}

void Task3()                                    //���ɼ�����
{
    int i,j,k,trans;
    printf("\ntop\tThe studentnumber\t  score\n");
    for (i=0; i<n-1; i++)
    {
        k=i;
        for (j=i+1; j<n; j++)
        {
            if (std[k][1]<std[j][1])                //�洢��߷�ѧ����ѧ��
                k=j;
        }
        if (k!=i)
        {
            trans=std[i][1];
            std[i][1]=std[k][1];
            std[k][1]=trans;
            trans=std[i][0];
            std[i][0]=std[k][0];
            std[k][0]=trans;
        }
    }
    for (i=0; i<n; i++)
    {
        printf("%-9d",i+1);
        for (j=0; j<2; j++)
        {
            if (j==0)
                printf("%010d",std[i][j]);           //ѧ��Ĭ��ʮλ��ǰ�����㲹��
            else
                printf("%20d",std[i][j]);
        }
        printf("\n");
    }
    reselect();
}

void Task4()                                        //��ѧ������
{
    int i,j,k,trans;
    printf("\ntop\tThe studentnumber\t  score\n");
    for (i=0; i<n-1; i++)
    {
        k=i;
        for (j=i+1; j<n; j++)
        {
            if (std[j][0]<std[k][0])
                k=j;
        }
        if (k!=i)                                   //����ѧ������
        {
            trans=std[i][0];
            std[i][0]=std[k][0];
            std[k][0]=trans;
            trans=std[i][1];
            std[i][1]=std[k][1];
            std[k][1]=trans;
        }
    }
    for (i=0; i<n; i++)                                //��ʽ�������Ϣ
    {
        printf("%-9d",i+1);
        for (j=0; j<2; j++)
        {
            if (j==0)
                printf("%010d",std[i][j]);           //ѧ��Ĭ��ʮλ��ǰ�����㲹��
            else
                printf("%20d",std[i][j]);
        }
        printf("\n");
    }
    reselect();
}

void Task5()                                        //��ѯ����
{
    int i,j,k,trans,m=0;
    long stn;
    for (i=0; i<n-1; i++)
    {
        k=i;
        for (j=i+1; j<n; j++)
        {
            if (std[j][0]<std[k][0])                //�洢���ѧ��ѧ����ѧ��
                k=j;
        }
        if (k!=i)                                   //����ѧ������
        {
            trans=std[i][0];
            std[i][0]=std[k][0];
            std[k][0]=trans;
            trans=std[i][1];
            std[i][1]=std[k][1];
            std[k][1]=trans;
        }
    }
    printf("Please input a studentnumber:");
    while (scanf("%ld",&stn)==0)                    //����ѧ�źܿ����ǳ����ͣ����Դ˴�ֻ������InputRight���������жϣ�֮���ٵ���дһ���Գ����͵��жϺ���
    {
        while(getchar()!='\n');
        printf("Error!Please input a long integer number:");
        scanf("%ld",&stn);
    }
    m=SearchStdNumber(std,stn,n);
    if (m!=-1)
    {
        printf("%-9d%010d%20d\n",m+1,std[m][0],std[m][1]);          //��ʽ�������Ϣ
    }
    else
        printf("No result.\n");
    reselect();
}

void Task6()                                                        //���ֵȼ�������������ռ��
{
    int i,score,yx=0,lh=0,zd=0,jg=0,bjg=0;
    float pyx,plh,pzd,pjg,pbjg;
    for (i=0; i<n; i++)                                             //�����ж�ѧ���ɼ���ʲô���䣬���ֵȼ�
    {
        score=std[i][1];
        if (score>=90&&score<=100)
            yx++;
        else if (score>=80&&score<=89)
            lh++;
        else if (score>=70&&score<=79)
            zd++;
        else if (score>=60&&score<=69)
            jg++;
        else
            bjg++;
    }
    pyx=(float)100*yx/n;                                            //���㲢�洢ռ�Ȱٷ���
    plh=(float)100*lh/n;
    pzd=(float)100*zd/n;
    pjg=(float)100*jg/n;
    pbjg=(float)100*bjg/n;
    printf("���\t����\tռ��\n");                                   //��ʽ�����ռ�Ȱٷ���
    printf("����\t%d\t%.2f%%\n",yx,pyx);
    printf("����\t%d\t%.2f%%\n",lh,plh);
    printf("�е�\t%d\t%.2f%%\n",zd,pzd);
    printf("����\t%d\t%.2f%%\n",jg,pjg);
    printf("������  %d\t%.2f%%\n",bjg,pbjg);
    reselect();
}

void Task7()                                                        //���ѧ�š��ɼ����ܷ֡�ƽ����
{
    int i,j;
    printf("ѧ��\t\t\t    �ɼ�\n");
    for(i=0; i<n; i++)
        printf("%010d%20d\n",std[i][0],std[i][1]);
    printf("�γ��ܷ�\t\t    %d\n",Sum(std,n));
    printf("ƽ����\t\t\t    %.1f\n",Avg(Sum(std,n)));
    reselect();
}

void reselect()                                                         //�����ÿ������ʱ�������ʾ��Ϣ�����û�����ѡ����һ������
{
    printf("Please input another number from 0 to 7 to operate another task:");
    s=InputRight();
    while(s<0||s>7)
    {
        printf("Error!Please input a number from 0 to 7:");
        s=InputRight();
    }
}

int SearchStdNumber(long std[N][2],long x,int n)                        //����ѧ��ѧ�š����κͳɼ�
{
    int low=0,high=n-1,mid;
    while (low<=high)
    {
        mid = (high+low)/2;
        if (x > std[mid][0])
            low = mid + 1;
        else if (x < std[mid][0])
            high = mid -1;
        else
            return mid;
    }
    return -1;
}

int InputRight()									                //�����쳣���봦�������䷵��ֵһ����һ��������
{
    int asd,r;
    asd=scanf("%d",&r);
    while(asd!=1)
    {
        while(getchar()!='\n');
        printf("please input right number:");
        asd=scanf("%d",&r);
    }
    if (asd==1)
        return r;
}

int InputScoreRight()                                               //�ɼ�������쳣���������ݹ����ȷ������ɼ���0~100֮��
{
    int score;
    score=InputRight();
    if (score<0||score>100)
    {
        printf("The score should bigger than 0 and within 100.Please input again.\n");
        score=InputScoreRight();
    }
    else
        return score;
}

int Sum(long std[][2],int n)							            //����ʵ�ּ���γ��ܷ�
{
    int i,sum=0;
    for (i=0; i<n; i++)
        sum=sum+std[i][1];
    return sum;
}

float Avg(int sum)							                        //����ʵ�ֿγ̵�ƽ����
{
    float avg;
    avg=1.0*sum/n;
    return avg;
}

void InputScore(long std[][2],int n)					    //����ʵ��¼��ÿ���˵�ѧ�źͳɼ�,����ʵ���쳣���봦��
{
    int i,j;
    for (i=0; i<n; i++)
    {
        printf("Please input the student number and score:");
        std[i][0] = InputRight();
        std[i][1] = InputScoreRight();
    }
}

#include <stdio.h>
#include <stdlib.h>
#define N 30

int n,s;											                //定义全局变量输入值s,人数n
long std[N][2];										                //定义二维数组std存放学号和成绩

void InputScore(long std[][2],int n);                               //定义成绩输入函数
int Sum(long std[][2],int n);                                       //定义求和函数
int InputRight();							                        //定义异常输入处理函数
float Avg(int sum);                                                 //定义求平均数函数
int SearchStdNumber(long std[N][2],long x,int n);                   //定义查找学号函数
void reselect();

void Task1();                                                       //定义任务1~7
void Task2();
void Task3();
void Task4();
void Task5();
void Task6();
void Task7();

int main()
{
    printf("Please input a number from 1~7 to choose a task:");		//因为其他任务都要在任务一的基础上，所以将任务一单独列出
    s=InputRight();				                                    //此处筛选的数s已为整型数
    while (s!=1)                                                    //因为后续的所有任务都在任务一的基础上，所以强制用户输入“1”
    {
        if (s==0)
            exit(0);
        else
            printf("Error! You should operate Task1 first,Please input 1.\n");
        s=InputRight();
    }
    if (s==1)					                                    //输入1时执行任务一
        Task1();
    printf("Then,please input a number from 2~7 to choose another task:");
    s=InputRight();                                                 //任务一执行完之后，选择执行任务2~7
    while (s<2||s>7)                                                //异常输入处理
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


void Task1()                                    //录入每个学生的学号和考试成绩
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

void Task2()                                    //计算总分和平均分
{
    printf("\nsum=%d,average=%.1f\n",Sum(std,n),Avg(Sum(std,n)));
    reselect();
}

void Task3()                                    //按成绩排序
{
    int i,j,k,trans;
    printf("\ntop\tThe studentnumber\t  score\n");
    for (i=0; i<n-1; i++)
    {
        k=i;
        for (j=i+1; j<n; j++)
        {
            if (std[k][1]<std[j][1])                //存储最高分学生的学号
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
                printf("%010d",std[i][j]);           //学号默认十位，前面用零补齐
            else
                printf("%20d",std[i][j]);
        }
        printf("\n");
    }
    reselect();
}

void Task4()                                        //按学号排序
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
        if (k!=i)                                   //交换学号排序
        {
            trans=std[i][0];
            std[i][0]=std[k][0];
            std[k][0]=trans;
            trans=std[i][1];
            std[i][1]=std[k][1];
            std[k][1]=trans;
        }
    }
    for (i=0; i<n; i++)                                //格式化输出信息
    {
        printf("%-9d",i+1);
        for (j=0; j<2; j++)
        {
            if (j==0)
                printf("%010d",std[i][j]);           //学号默认十位，前面用零补齐
            else
                printf("%20d",std[i][j]);
        }
        printf("\n");
    }
    reselect();
}

void Task5()                                        //查询排名
{
    int i,j,k,trans,m=0;
    long stn;
    for (i=0; i<n-1; i++)
    {
        k=i;
        for (j=i+1; j<n; j++)
        {
            if (std[j][0]<std[k][0])                //存储最大学号学生的学号
                k=j;
        }
        if (k!=i)                                   //交换学号排序
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
    while (scanf("%ld",&stn)==0)                    //由于学号很可能是长整型，所以此处只能先用InputRight函数初级判断，之后再单独写一个对长整型的判断函数
    {
        while(getchar()!='\n');
        printf("Error!Please input a long integer number:");
        scanf("%ld",&stn);
    }
    m=SearchStdNumber(std,stn,n);
    if (m!=-1)
    {
        printf("%-9d%010d%20d\n",m+1,std[m][0],std[m][1]);          //格式化输出信息
    }
    else
        printf("No result.\n");
    reselect();
}

void Task6()                                                        //划分等级，计算人数和占比
{
    int i,score,yx=0,lh=0,zd=0,jg=0,bjg=0;
    float pyx,plh,pzd,pjg,pbjg;
    for (i=0; i<n; i++)                                             //依次判断学生成绩在什么区间，划分等级
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
    pyx=(float)100*yx/n;                                            //计算并存储占比百分率
    plh=(float)100*lh/n;
    pzd=(float)100*zd/n;
    pjg=(float)100*jg/n;
    pbjg=(float)100*bjg/n;
    printf("类别\t人数\t占比\n");                                   //格式化输出占比百分率
    printf("优秀\t%d\t%.2f%%\n",yx,pyx);
    printf("良好\t%d\t%.2f%%\n",lh,plh);
    printf("中等\t%d\t%.2f%%\n",zd,pzd);
    printf("及格\t%d\t%.2f%%\n",jg,pjg);
    printf("不及格  %d\t%.2f%%\n",bjg,pbjg);
    reselect();
}

void Task7()                                                        //输出学号、成绩、总分、平均分
{
    int i,j;
    printf("学号\t\t\t    成绩\n");
    for(i=0; i<n; i++)
        printf("%010d%20d\n",std[i][0],std[i][1]);
    printf("课程总分\t\t    %d\n",Sum(std,n));
    printf("平均分\t\t\t    %.1f\n",Avg(Sum(std,n)));
    reselect();
}

void reselect()                                                         //当完成每个任务时，输出提示信息，让用户自行选择下一步进程
{
    printf("Please input another number from 0 to 7 to operate another task:");
    s=InputRight();
    while(s<0||s>7)
    {
        printf("Error!Please input a number from 0 to 7:");
        s=InputRight();
    }
}

int SearchStdNumber(long std[N][2],long x,int n)                        //查找学生学号、名次和成绩
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

int InputRight()									                //定义异常输入处理函数，其返回值一定是一个整型数
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

int InputScoreRight()                                               //成绩输入的异常处理函数，递归调用确保输入成绩在0~100之间
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

int Sum(long std[][2],int n)							            //函数实现计算课程总分
{
    int i,sum=0;
    for (i=0; i<n; i++)
        sum=sum+std[i][1];
    return sum;
}

float Avg(int sum)							                        //函数实现课程的平均分
{
    float avg;
    avg=1.0*sum/n;
    return avg;
}

void InputScore(long std[][2],int n)					    //函数实现录入每个人的学号和成绩,并且实现异常输入处理
{
    int i,j;
    for (i=0; i<n; i++)
    {
        printf("Please input the student number and score:");
        std[i][0] = InputRight();
        std[i][1] = InputScoreRight();
    }
}

#include <stdio.h>
#define N 4
#define M 3

int InputR(int(*p)[N],int I,int J);     //用二维数组行指针输入
int OutputR(int(*p)[N],int I,int J);
int InputC(int *p,int I,int J);         //用二维数组列指针输入
int OutputC(int *p,int I,int J);

int main()
{
    int i,j,a[M][N];
    int *p;
    p=a;
    //InputR(a,3,4);
    //OutputR(a,3,4);
    InputC(a,3,4);
    OutputC(a,3,4);
    return 0;
}


//下面定义的是行指针
int InputR(int(*p)[N],int I,int J)
{
    int i,j;
    for (i=0;i<I;i++)
        for (j=0;j<J;j++)
            scanf("%d",p[i]+j);
    return 0;
}

int OutputR(int(*p)[N],int I,int J)
{
    int i,j;
    for (i=0;i<I;i++)
    {
        for (j=0;j<J;j++)
           printf("%5d",*(*(p+i)+j));
        printf("\n");
    }
    return 0;
}

//下面定义的是列指针
int InputC(int *p,int I,int J)
{
    int i,j;
    for (i=0;i<I;i++)
        for (j=0;j<J;j++)
            scanf("%d",&p[i*N+j]);
}

int OutputC(int *p,int I,int J)
{
    int i,j;
    for (i=0;i<I;i++)
    {
        for (j=0;j<J;j++)
            printf("%-4d",p[i*N+j]);
        printf("\n");
    }
}





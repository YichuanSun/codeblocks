#include <stdio.h>
#include <stdlib.h>
#define N 30        //不超过30人
#define M 4         //只需存4组数据

void menu();
int InputInfor(char *pstd);
int SumandAvg();
int ScoreHtoL();
int ScoreLtoH();
int StdNumLtoH();
int StdNameList();
int SearchStdNum();
int SearchStdName();
int Statis();
int Output();
int amount;         //定义全局变量amount：学生人数

int main()
{
    int n,stdnum,stdname,score;
    char std[N][M];
    char *pstd=std;
    menu();
    scanf("%d",&n);
    switch(n)
    {
        case 1: InputInfor(pstd);break;
/*        case 2: SumandAvg();break;
        case 3: ScoreHtoL();break;
        case 4: ScoreLtoH();break;
        case 5: StdNumLtoH();break;
        case 6: StdNameList();break;
        case 7: SearchStdNum();break;
        case 8: SearchStdName();break;
        case 9: Statis();break;
        case 10: Output();break;
        case 0: break;
*/
    }
    Output(pstd);
    return 0;
}

void menu()
{
    printf("1. Input record\n");
    printf("2. Caculate total and average score of course\n");
    printf("3. Sort in descending order by score\n");
    printf("4. Sort in ascending order by score\n");
    printf("5. Sort in ascending order by number\n");
    printf("6. Sort in dictionary order by number\n");
    printf("7. Search by number\n");
    printf("8. Search by name\n");
    printf("9. Statistic analysis\n");
    printf("10. List record\n");
    printf("0. Exit\n");
    printf("Please enter your choice:");
}

int InputInfor(char *pstd)
{
    int i,j;
    printf("Please input the students amount:");
    scanf("%d",&amount);
    for (i=0;i<amount;i++)
        for (j=0;j<M-1;j++)
            scanf("%s",&pstd[i*(M-1)+j]);
    return 0;
}

int Output(char *p)
{
    int i,j;
    for (i=0;i<amount;i++)
    {
        for (j=0;j<M-1;j++)
            printf("%s",p[i*(M-1)+j]);
        printf("\n");
    }
}

#include <stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for (i=0;i<2*n-1;i++)
    {
        if (i<n)
        {
            j=n-i-1;        //space
            k=2*i+1;        //*
            while (j>0)
            {
                printf(" ");
                j--;
            }
            while (k>0)
            {
                printf("*");
                k--;
            }
            printf("\n");
        }
        else
        {
            j=i-n+1;
            k=2*(2*(n-1)-i)+1;
            while (j>0)
            {
                printf(" ");
                j--;
            }
            while (k>0)
            {
                printf("*");
                k--;
            }
            printf("\n");
        }
    }
}

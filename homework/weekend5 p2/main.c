#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int age,i,j,a3,a4;
    int a[10];
    for (age=18;age>=18&&age<21;age++)
    {
        a3 = age*age*age;
        a4 = age*age*age*age;
        a[1] = a3/1000;
        a[2] = a3%1000/100;
        a[3] = a3%100/10;
        a[4] = a3%10;
        a[5] = a4/100000;;
        a[6]= a4%100000/10000;
        a[7] = a4%10000/1000;
        a[8] = a4%1000/100;
        a[9] = a4%100/10;
        a[0] = a4%10;
        for (i=0;i<=9;i++)
        {
            for (j=i+1;j<=9;j++)
            {
                if (a[i]==a[j])
                    goto spot;
            }
        }
        break;
        spot:;
    }
    printf("age=%d\n",age);
    return 0;
}

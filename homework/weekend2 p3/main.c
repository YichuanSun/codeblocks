#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    double capital,rate,deposit;
    printf("Please enter rate, year, capital:\n");
    scanf("%lf,%d,%lf", &rate, &n, &capital);
    deposit=capital*pow(1+rate,n);
    printf("deposit=%.3f\n",deposit);
    return 0;
}

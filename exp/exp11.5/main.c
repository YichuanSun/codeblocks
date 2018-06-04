#include <stdio.h>
int main()
{
    float n;
    int d;
    scanf("%f",&n);
    if (n>=0)
    {   d = (int)(n+0.5);
        printf("%d\n",d);
    }
    else
    {
        d = (int)(n-0.5);
        printf("%d\n",d);
    }
    return 0;
}

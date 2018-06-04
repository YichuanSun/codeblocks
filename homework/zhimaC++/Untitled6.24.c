#include <stdio.h>

int main()
{
    long long rem=1,i,n;
    scanf("%lld",&n);
    for (i=0;i<n-1;i++)
    {
        rem=2*(rem+n-i-1);
    }
    printf("The monkey got %lld peachs in first day.\n",rem);
    return 0;
}

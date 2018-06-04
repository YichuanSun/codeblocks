#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,s;
    printf("Input percent of A and B:");
    scanf("%f%f",&a,&b);
    c = 10*a+6*b;
    s = 8*a+10*b;
    printf("compete = %.4f\nstandard = %.4f\n",c,s);
    if (c>s)
        printf("The Best Response is compete!");
    else if (c<s)
        printf("The Best Response is standard!");
    else
        printf("Both are the best response!");
    return 0;
}

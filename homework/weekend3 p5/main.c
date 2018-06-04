#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b,c;
    int d;
    printf("Input your English name:\n");
    scanf("%c%c%c",&a,&b,&c);
    d=a-32;
    printf("%c%c%c\n",d,b,c);
    printf("%c:%d\n",a,a-96);
    printf("%c:%d\n",b,b-96);
    printf("%c:%d\n",c,c-96);
    return 0;
}

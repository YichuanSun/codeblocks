#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    for (;(c=getchar())!='\n';)
        printf("%c",c);
    printf("Hello world!\n");
    return 0;
}

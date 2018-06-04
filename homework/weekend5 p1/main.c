#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,w,c;
    printf("Man   Women   Children\n");
    for (m=0;m<17;m++)
    {
        for (w=0;w<=30-m;w++)
        {
            c = 30-m-w;
            if (m*3+w*2+c==50)
            {
                printf("%3d%8d%8d\n",m,w,c);
            }
        }
    }
    return 0;
}

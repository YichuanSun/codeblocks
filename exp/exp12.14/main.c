#include <stdio.h>


int main(void)
{
   unsigned long n;
   int k,i=1,z=0;
   scanf("%d",&n);
   while(n != 0)
   {
       k = n%10;
       n = n/10;
       if(k%2 == 1)
       {
           z = z+k*i;
           i = 10*i;
       }

   }
   printf("%d\n",z);
   return 0;
}

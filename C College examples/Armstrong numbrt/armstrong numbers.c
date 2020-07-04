#include <math.h>
#include <stdio.h>

int main()
{
   int first, second, originalnum,k, remainder, n = 0;
   float result = 0.0;

   printf("Enter the first integer: ");
   scanf("%d", &first);
   printf("Enter the second interger: ");
   scanf("%d", &second);

   for(k=first;k<=second;k++)
   {
       originalnum=k;

   while(originalnum!=0)
    {
       originalnum = originalnum/10;
       n++;
    }
    originalnum=k;

     while(originalnum!=0)
     {
         remainder=originalnum%10;
         result=result+pow(remainder,n);
         originalnum/=10;
     }
     if ((int)result == k)
    printf("%d ", k);

    n=0;
    result=0;
   }


   return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int num,dup,sq,rem,sum=0,count=1;
    printf("Enter the number :");
    scanf("%d",&num);

    dup=num;

    while(num!=0)
    {
        count++;
        num=num%10;
    }
    if(dup!=0)
    {
        rem=dup%10;
        sq=pow(rem,count);
        sum=sum+sq;
    }
   if(dup==sum)
   {
       printf("Armstrong number");
   }
       else
       {
           printf("Not a armstrong number");
       }

   return 0;

}

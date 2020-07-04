#include<stdio.h>
#include<stdlib.h>
int checkprime(int n);
int checkarmstrong(int n);
int main()
{
    int n,flag;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Entered number is %d\n",n);
    flag=checkprime(n);
    if(flag==1)
        printf("%d is a not prime number\n",n);
    else
        printf("%d is prime number\n",n);

    flag=checkarmstrong(n);
    if(flag==1)
        printf("%d is a armstrong number",n);
    else
        printf("%d is not a armstrong number",n);
return 0;
}
int checkprime(int n)
{
   int i,flag=0;
   for(i=2;i<=n/2;i++)
   {
       if(n%i==0)
       {
           flag=1;
       }
   }
   return flag;
}
int checkarmstrong(int n)
{
    int flag,num=0,original;
    float result=0,rem;
    num=original;
    while(num!=0)
    {
       original/10;
       num++;
    }
    while(original!=0)
    {
        rem=original%10;
        result=pow(rem,n);
        original=original/10;
    }
    if(result==num)
        flag=1;
    else
        flag=0;
    return flag;

    }


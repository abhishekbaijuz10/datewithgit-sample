#include<stdio.h>
#include<stdlib.h>
int primenumber();
int main()
{
    int flag;
flag=primenumber();
    if(flag==1)
    printf("Not a prime number");
else
    printf("Prime number");
   return 0;
}
int primenumber()
{
    int n,i,flag=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}

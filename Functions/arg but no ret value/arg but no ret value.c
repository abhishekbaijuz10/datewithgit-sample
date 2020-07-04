#include<stdio.h>
#include<stdlib.h>
void primenumber();
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    primenumber();
    return 0;
}
void primenumber(int n)
{
    int i,flag=0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
           flag=1;
           break;
           }
    }
    if(flag==1)
    printf("Not a prime number");
    else
        printf("prime number");
}

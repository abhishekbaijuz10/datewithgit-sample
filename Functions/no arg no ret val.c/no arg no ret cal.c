#include<stdio.h>
#include<stdlib.h>
int primenumber();
int main()
{
    primenumber();
    return 0;
}
int primenumber()
{
    int n,flag=0,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("The number is not a prime number");
    }
        else
        {
            printf("The numb er is  prime number");
        }
        return 0;
}

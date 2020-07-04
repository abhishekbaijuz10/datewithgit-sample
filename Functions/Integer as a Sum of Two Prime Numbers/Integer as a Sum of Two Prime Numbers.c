#include<stdio.h>
#include<stdlib.h>
int checkprime(int n);
int main()
{
    int n,i,flag=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(checkprime(i)==1)
        {
            if(checkprime(n-i)==1)
            {
                printf("%d = %d+%d",n,i,n-i);
                flag=1;
            }
        }
    }
    if (flag==0)
        printf("%d cannot be expressed as a sum of 2 prime numbers",n);

    return 0;

}
checkprime(int n)
{
    int i,isprime=1;
    for(i=2 ;i<=n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    return isprime;
}

#include<stdio.h>
#include<stdlib.h>
int primenumber(int n);
int main()
{
    int n,flag;
    printf("Enter a number");
    scanf("%d",&n);
    flag=primenumber(n);

    if(flag==1)
        printf("Not a prime number");
        else
        printf("prime number");

}
primenumber(int n)
{
    int i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int fun(int n);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("%d",fun(n));
    return 0;
}
int fun(int n)
{
    if(n!=0)
    {
        return n+fun(n-1);
    }
    else
    {
        return n;
    }
}

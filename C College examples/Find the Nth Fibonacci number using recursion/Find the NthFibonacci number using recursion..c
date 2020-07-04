#include<stdio.h>
int fibo(int num);
int main()
{
    int num,fibonacci;
    printf("Enter a number");
    scanf("%d",&num);

    fibonacci = fibo(num);

    printf("Fibonacci value is %d",fibonacci);

    return 0;
}
int fibo(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
        return fibo(num-1)+fibo(num-2);
    }
}

#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the number to find the Factorial");
    scanf("%d",&num);

    while(num!=0)
    {
        fact=fact*num;
        num=num-1;
    }
    printf("The Factorial is = %d",fact);
    return 0;

}

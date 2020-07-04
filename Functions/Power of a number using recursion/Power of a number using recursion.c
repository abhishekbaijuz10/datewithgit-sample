#include<stdio.h>>
#include<stdlib.h>
int power(int a,int b);
int main()
{
    int base,exp,result;
    printf("Enter a base number");
    scanf("%d",&base);
    printf("Enter a power number");
    scanf("%d",&exp);
    result=power(base,exp);
    printf("%d^%d = %d",base,exp,result);
}
power(int base,int exp)
{
    if(exp==0)
    {
     return 1;
    }
    else
    {
        return base*power(base,exp-1);
    }
}

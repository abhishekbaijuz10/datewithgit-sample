#include <stdio.h>
#include <math.h>
int covert(long long n);
int main()
{
    long long n;
    printf("Enter a number");
    scanf("%lld",&n);
    printf("%lld in binary = %d in decimal"  ,n,covert(n));
    return 0;
}
int covert(long long n)
{
    int rem,temp=0,i=0;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        temp=temp+rem* pow(2,i);
        i++;
    }
    return temp;
}


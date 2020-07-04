#include<stdio.h>
#include<math.h>
int octtodec(int n);
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("%d in decimal = %d",n,octtodec(n));
    return 0;
}
int octtodec(int n)
{
    int rem,temp=0,i=0;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        temp=temp+rem*pow(8,i);
        i++;
    }
    return temp;
}

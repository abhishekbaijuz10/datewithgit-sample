#include<stdio.h>
int main()
{
    int n,rem,pali=0,num;
    printf("Enter a  number");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        pali=pali*10+rem;
        n=n/10;
    }
    if(pali==num)
    {
        printf("The number %d is a palindrome number",num);
    }
    else
    {
        printf("The number %d is not a palindrome number",num);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int rev,sum=0,num,rem,temp;
    printf("Enter the Number :");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
        rem = temp%10;
        sum = sum + rem;
        rev = rev * 10 + rem;
        temp = temp/10;
    }
    printf("Sum of the digits is : %d\n\n",sum);
    printf("The reverse of the number is : %d",rev);

    return 0;
}

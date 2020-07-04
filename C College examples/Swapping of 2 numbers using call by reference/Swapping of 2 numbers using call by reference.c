#include<stdio.h>
void swapped(int *n1,int *n2);
int main()
{
    int num1,num2;

    printf("Enter a number :");
    scanf("%d",&num1);
    printf("Enter a number :");
    scanf("%d",&num2);

    swapped(&num1,&num2);

    printf("Swapped numbers are : %d ,%d",num1,num2);
    return 0;
}
swapped(int *n1,int *n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}

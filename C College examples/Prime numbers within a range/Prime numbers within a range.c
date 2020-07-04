#include<stdio.h>
int main()
{
    int first,second,i,temp=0,average,total=0;
    printf("Enter the first number");
    scanf("%d",&first);
    printf("Enter the Second number");
    scanf("%d",&second);

    for(i=first;i<second;i++)
    {
        if(i % 2 != 0)
        {
            temp++;
            printf("%d, ",i);
            total = total+i;
        }
        average = total / temp;
    }
    printf("\nAverage of the prime numbers is : %d",average);
    return 0;
}

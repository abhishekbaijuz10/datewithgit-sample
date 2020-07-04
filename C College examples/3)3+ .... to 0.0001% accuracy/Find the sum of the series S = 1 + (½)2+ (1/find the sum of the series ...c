#include<stdio.h>
int main()
{
    int n;
    float sum;
    printf("Enter the number");
    scanf("%d",&n);

    while(n!0)
    {
        for(i=2;i<n;i++)
        {
            sum = sum + (1/n)^n;
        }
        n--;
    }
    printf("Sum = ",sum);
    return 0;
}

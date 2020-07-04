#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    float ar[100],sum=0.0,avg;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%f",ar+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    avg=sum/n;
    printf("Average is = %2f",avg);
    return 0;
}

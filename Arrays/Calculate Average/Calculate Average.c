#include<stdio.h>
int main()
{
    int marks[10],i,n,sum=0,average;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the mark");
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    average=sum/n;
    printf("Average=%d",average);
    return 0;

}

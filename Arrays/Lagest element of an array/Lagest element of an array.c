#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ar[100],n;
    printf("Enter the number of elements");
    scanf("%d",&n);

    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
       scanf("%d",ar+i);
    }

    for(int i=1;i<n;i++)
    {
        if(ar[0]<ar[i])
        {
            ar[0]=ar[i];
        }

    }
    printf("The largest element = %d",ar[0]);

    return 0;

}

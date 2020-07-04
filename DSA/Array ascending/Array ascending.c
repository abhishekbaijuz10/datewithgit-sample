#include<stdio.h>
int main()
{
    int ar[5];
    int i,j,temp;

    for(i=0;i<5;i++)
    {
        printf("Enter the data to be inserted");
        scanf("%d",&ar[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }

        for(i=0;i<5;i++)
        {
            printf("%d,",ar[i]);
        }
        return 0;
}

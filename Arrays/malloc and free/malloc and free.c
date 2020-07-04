#include<stdio.h>
#include<stdlib.h>
int main()
{
    int * ptr,n, i,sum=0;
    printf("Enter the number of elements");
    scanf("%d",&n);

    ptr=(int*)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Error! Memory cannot be allocated");
        exit(0);
    }
    else
    {
        printf("Enter the array elements");
        for(i=0;i<n;i++)
        {
            scanf("%d",ptr+i);
            sum=sum+*(ptr+i);
        }
    }
    printf("Sum is = %d",sum);
    free(ptr);

    return 0;
}

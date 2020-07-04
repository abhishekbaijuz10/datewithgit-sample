#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],result[2][2];

    //taking input for 1st matrix
    printf("Enter the elements of first matrix\n\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("a%d%d = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    //taking input for 2nd matrix
    printf("Enter the elements of 2nd matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("b%d%d = ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    //Adding corresponding sum
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            result[i][j]=a[i][j]+b[i][j];
        }
    }
    //Displaying sum
    printf("Sum of the matrix:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
        {
            printf("%d\t", result[i][j]);
            if(j==1)
                printf("\n");
    }
    return 0;
}

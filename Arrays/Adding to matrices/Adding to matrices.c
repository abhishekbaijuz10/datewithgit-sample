#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,r,c,a[100][100],b[100][100],sum[100][100];
    printf("Enter the rows of the matrix = ");
    scanf("%d",&r);
    printf("Enter the columns of the matrix = ");
    scanf("%d",&c);

    printf("Enter the elements of the 1st matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element a%d%d = ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the 2nd matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element b%d%d = ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    //adding two matrices
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    //printing the result
    printf("\nSum of the 2 matrices:\n");
    for(i=0;i<r;i++)
    {

        for(j=0;j<c;j++)
        {
            printf("%d   ",sum[i][j]);
            if(j==c-1)
            {
                printf("\n\n");
            }

        }
    }
    return 0;


}

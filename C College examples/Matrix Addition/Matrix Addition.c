#include<stdio.h>
int main()
{
    int a[100][100], b[100][100], sum[100][100],j,i,r,c;
    printf("Enter the number of rows");
    scanf("%d",&r);
    printf("Enter the number of columns");
    scanf("%d",&c);

    //elements of the 1st matrix
    printf("Enter the elements of 1st matrx");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        printf("Enter the element a%d%d",i+1,j+1);
        scanf("%d",&a[i][j]);
    }

    //elements of the 2nd matrix
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        printf("Enter the element b%d%d",i+1,j+1);
        scanf("%d ",&b[i][j]);
    }

    //Adding the 2 matrices
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }

    //Printing the sum of matrices
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        printf("%d ",sum[i][j]);
        {
            if(j==c-1)
            {
                printf("\n\n");
            }
        }
    }
    return 0;

}

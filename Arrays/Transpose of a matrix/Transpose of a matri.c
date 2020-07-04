#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ar[10][10],i,j,t[10][10],c,r;
    printf("Enter the rows of the matrix");
    scanf("%d",&r);
    printf("Enter the columns");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the elements");
            scanf("%d",&ar[i][j]);
        }
    }
     printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                printf("%d  ", ar[i][j]);
            if (j == c - 1)
                printf("\n");
            }
        }

    //finding transpose
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i] = ar[i][j];
        }
    }
    //displaying transpose
    printf("\nTranspose of the matrix\n");
 for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d  ",t[i][j]);
            if(j == r-1)
                printf("\n");

        }
    }
    return 0;
}

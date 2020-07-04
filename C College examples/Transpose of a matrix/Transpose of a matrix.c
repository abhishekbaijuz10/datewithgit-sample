#include<stdio.h>
int main()
{
    int r,c,a[100][100],t[100][100],i,j;
    printf("Enter the number of rows");
    scanf("%d",&r);
    printf("Enter the number of columns");
    scanf("%d",&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        printf("Enter the element of a%d%d",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
     for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            t[j][i] = a[i][j];
        }
        //printigng the transpose

         for(i=0;i<c;i++)
        for(j=0;j<r;j++)
        {
            printf("%d ",t[i][j]);
             if (j == r - 1)
                printf("\n");

        }
        return 0;

}

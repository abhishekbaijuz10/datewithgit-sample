#include<stdio.h>
#include<stdlib.h>
int main()
{
    int items[2][3][2];
    printf("Enter the values");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                scanf("%d",&items[i][j][k]);
            }
        }
    }

    //printing the entered values

    printf("\nValues are\n");


    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                printf("test[%d][%d][%d] = %d\n",i,j,k,items[i][j][k]);
            }
        }
    }
    return 0;
}

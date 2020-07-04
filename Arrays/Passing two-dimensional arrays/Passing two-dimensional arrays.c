#include<stdio.h>
#include<stdlib.h>
void display(int num[2][2]);
int main()
{
    int num[2][2];
    printf("Enter 4 numbers\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    //Passing multidimensional array
    display(num);
    return 0;
}
void display(int num[2][2])
{
    printf("Displaying\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\n",num[i][j]);
        }
    }
}

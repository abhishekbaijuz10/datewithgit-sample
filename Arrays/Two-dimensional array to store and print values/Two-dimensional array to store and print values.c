#include<stdio.h>
const int city=2;
const int week=7;
int main()
{
    int temperature[city][week];
    for(int i=0;i<city;i++)
    {
        for(int j=0;j<week;j++)
        {
            printf("City %d, Week %d =", i+1,j+1);
            scanf("%d",&temperature[i][j]);
        }
    }
    printf("\nDisplaying values:\n\n");

    for(int i=0;i<city;i++)
    {
        for(int j=0;j<week;j++)
        {
            printf("City %d, Week %d =%d\n",i+1,j+1,temperature[i][j]);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int num,con,i;
    printf("Enter a Integer number");
    scanf("%d",&num);
    printf("Enter the Range");
    scanf("%d",&con);

    for(i=1;i<=con;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}

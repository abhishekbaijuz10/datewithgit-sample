#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to be patterened :");
    scanf("%d",&num);

    while(num!=0)
    {
        printf("%d\n",num);
        num=num/10;

    }
    return 0;
}

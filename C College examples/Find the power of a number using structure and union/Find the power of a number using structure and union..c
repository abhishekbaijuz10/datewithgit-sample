#include<stdio.h>
typedef struct powofn
{
    int base;
    int pow;
    int tot;
}n1;
int main()
{
    n1 sam;
    printf("Enter the base number :");
    scanf("%d",&sam.base);
    printf("Enter the power of a number :");
    scanf("%d",&sam.pow);

    sam.tot = sam.base * sam.pow;

    printf("Power of the number is : %d",sam.tot);

    return 0;

}

#include<stdio.h>
#include<math.h>
int main()
{
    int num,duplicate,arm,remainder,digit=0;
    printf("Enter the number");
    scanf("%d",&num);

    duplicate=num;
    while(duplicate!=0)
    {
        remainder=num/10;
        digit++;
    }
    duplicate=num;

    while(duplicate!=0)
    {
        remainder=duplicate%10;
        arm = arm + pow(remainder,digit);
        duplicate = duplicate/10;
    }
     if (arm == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}

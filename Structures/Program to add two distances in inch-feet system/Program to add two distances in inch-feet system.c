#include<stdio.h>
struct distance
{
    float feet;
    float inch;
}d1,d2,sum;

int main()
{
    printf("Enter the Information for 1st distance\n");
    printf("Enter feet = ");
    scanf("%f",&d1.feet);
    printf("Enter inch = ");
    scanf("%f",&d1.inch);

    printf("Enter the Information for the 2nd distance\n");
    printf("Enter the feet = ");
    scanf("%f",&d2.feet);
    printf("Enter inch = ");
    scanf("%f",&d2.inch);

    //Adding
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

        //Printing the values
        printf("Sum of the feet are : %f\n",sum.feet);
        printf("Sum of the inches are : %f",sum.inch);

        return 0;
}

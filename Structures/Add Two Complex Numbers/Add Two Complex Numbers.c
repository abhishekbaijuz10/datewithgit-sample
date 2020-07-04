#include<stdio.h>
typedef struct complex
{
    float real;
    float img;
}complex;

complex add(complex n1,complex n2);

int main()
{
    complex n1,n2,result;

    printf("Enter the values for the 1st complex number\n");
    printf("Enter the real part = ");
    scanf("%f",&n1.real);
    printf("Enter the img part = ");
    scanf("%f",&n1.img);

    printf("\n\nEnter  the values for the 2nd complex number\n");
    printf("Enter the real part = ");
    scanf("%f",&n2.real);
    printf("Enter the img part = ");
    scanf("%f",&n2.img);

    result = add(n1,n2);

    printf("Sum is %f + %f",result.real,result.img);
}
complex add(complex n1,complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;
    return temp;
}

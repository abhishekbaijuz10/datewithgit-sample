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
    printf("Enter the first real and img part :");
    scanf("%f%f",&n1.real,&n1.img);
    printf("Enter the second real and img part :");
    scanf("%f%f",&n2.real,&n2.img);

    result = add(n1,n2);

    printf("%lf + %lfi",result.real,result.img);

    return 0;
}
complex add(complex n1,complex n2)
{
    complex temp;
    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;
    return temp;
}

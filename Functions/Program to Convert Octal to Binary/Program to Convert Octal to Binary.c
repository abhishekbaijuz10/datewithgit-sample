#include<stdio.h>
#include<math.h>
long long convert(int octal);
int main()
{
    int octal;
    printf("Enter a octal number");
    scanf("%d",&octal);
    printf("%d in binary = %lld",octal,convert(octal));
    return 0;
}
long long convert(int octal)
{
    int decimal=0,i=0,rem=0;
    long long binary=0;

//converting to decimal
    while(octal!=0)
    {
        rem=octal%10;
        decimal=decimal+rem*pow(8,i);
        i++;
        octal=octal/10;
    }
    i=1;

    //converting to binary
    while(decimal!=0)
    {
        rem=decimal%2;
        binary=binary+rem*i;
        decimal=decimal/2;
        i=i*10;
    }
    return binary;
}

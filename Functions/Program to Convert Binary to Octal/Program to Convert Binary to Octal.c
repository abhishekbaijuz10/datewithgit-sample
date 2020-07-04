#include<stdio.h>
#include<math.h>
int convert(int binary);
int main()
{
    long long binary;
    printf("Enter a binary number");
    scanf("%lld",&binary);
    printf("%lld in octal is %d",binary,convert(binary));
    return 0;
}
int convert(int binary)
{
    int decimal=0,i=0,rem,octal=0;
    //converting to decimal
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal+rem*pow(2,i);
        i++;
        binary=binary/10;
    }
    i=1;
    //converting to octal
    while(decimal!=0)
    {
        rem=decimal%8;
        decimal=decimal/8;
        octal=octal+rem*i;
        i=i*10;

    }
    return octal;
}

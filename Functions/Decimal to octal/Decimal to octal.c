#include<stdio.h>
#include<stdlib.h>
int dectooct(int decimalnumber);
int main()
{
    int decimalnumber;
    printf("Enter a decimal number");
    scanf("%d",&decimalnumber);
    printf("%d in octal is %d",decimalnumber,dectooct(decimalnumber));
    return 0;
}
int dectooct(int decimalnumber)
{
    int rem=0,temp=0,i=1;
    while(decimalnumber!=0)
    {
        rem=decimalnumber%8;
        decimalnumber=decimalnumber/8;
        temp=temp+rem*i;
        i=i*10;
    }
    return temp;
}

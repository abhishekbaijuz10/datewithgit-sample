#include <math.h>
#include <stdio.h>
long long convert(int n);
int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %lld in binary", n, convert(n));
    return 0;
}

long long convert(int n) {
    long long bin=0;
    int rem,i=1,step=1;
    while(n!=0)
    {
        rem=n%2;
        printf("step%d=%d/2,Remainder=%d,Quotient=%d\n",step++,rem,n/2);
        n=n/2;
        bin=bin+rem*i;
        i=i*10;
    }
    return bin;
}

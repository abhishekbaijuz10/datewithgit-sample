#include<stdio.h>
#include<stdlib.h>
void sample(int * abhi)
{
    (*abhi)++;
}
int main()
{
    int * ptr,i=10;
    ptr=&i;
    sample(ptr);

    printf("%d",*ptr);
    return 0;
}

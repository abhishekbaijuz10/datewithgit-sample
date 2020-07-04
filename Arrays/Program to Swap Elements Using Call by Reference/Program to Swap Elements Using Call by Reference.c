#include<stdio.h>
void swaps(int *a,int *b,int *c);
int main()
{
    int a,b,c;
    printf("Enter the 3 values");
    scanf("%d%d%d",&a,&b,&c);

    printf("Entered values are:\n");
    printf("%d%d%d\n",a,b,c);

    swaps(&a,&b,&c);

    printf("The swapped values are:\n%d%d%d",a,b,c);
    return 0;

}
void swaps(int *w1,int *w2,int *w3)
{
    int temp;
    temp=*w1;
    *w1=*w3;
    *w3=*w2;
    *w2=temp;
}

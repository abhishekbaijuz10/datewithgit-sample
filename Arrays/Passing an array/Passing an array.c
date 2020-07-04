#include<stdio.h>
#include<stdlib.h>
int main()
{
    int agearray[]={2,8,4,12};

    //Passing the elements
    display(agearray[1],agearray[2]);
    return 0;
}
void display(int a,int b)
{
    printf("%d\n",a);
    printf("%d\n",b);
}

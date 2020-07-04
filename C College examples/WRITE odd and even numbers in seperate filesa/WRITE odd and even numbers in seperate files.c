#include<stdio.h>
int main()
{
    int i,j;
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("Even","w");
    if(ptr1 == NULL)
    {
        printf("Error");
        exit(1);
    }

    for(i=2;i<50;i++)
        if(i%2==0)
    {
        fprintf(ptr1,"%d ,",i);
    }
    fclose(ptr1);
    //Second one
    ptr2 = fopen("Odd","w");
    if(ptr2 == NULL)
    {
        printf("Error");
        exit(1);
    }

    for(i=1;i<50;i++)
        if(i%2!=0)
    {
        fprintf(ptr2,"%d ,",i);
    }
    fclose(ptr2);
    return 0;
}

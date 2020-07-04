#include<stdio.h>
int main()
{
    int num;
    FILE *fptr;

    fptr = fopen("Sample","r");

    if(fptr == NULL)
    {
        printf("Error");
        exit(1);
    }
    fscanf(fptr,"%d",&num);
    printf("The dats is : %d",num);
    fclose(fptr);

    return 0;

}

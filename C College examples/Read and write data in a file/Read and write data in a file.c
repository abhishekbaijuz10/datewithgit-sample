#include<stdio.h>
int main()
{
    int num;
    FILE *ptr;
    printf("Enter a number");
    scanf("%d",&num);

    ptr=fopen("Sample","w");

    if(ptr==NULL)
    {
        printf("Error");
        exit(1);
    }
    fprintf(ptr,"%d",num);
    fclose(ptr);
    return 0;
}

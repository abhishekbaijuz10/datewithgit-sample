#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[50];
    int marks,i,n;

    printf("Enter the number of students");
    scanf("%d",&n);

    FILE *fptr;
    fptr = (fopen("student.txt","a"));
    if(fptr == NULL)
    {
        printf("Error!");
    }
    for(i=0;i<n;i++)
    {
        printf("For Student %d\n\nEnter the name",i+1);
        scanf("%s",name);

        printf("Enter the mark");
        scanf("%d",&marks);

        fprintf(fptr,"Name :%s \n Marks :%d",name,marks);

    }
    fclose(fptr);
    return 0;

}


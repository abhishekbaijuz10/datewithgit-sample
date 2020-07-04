#include<stdio.h>
struct student
{
    char name[50];
    int marks;
};
int main()
{
    struct student *ptr;
    int i,n;
    printf("Enter the number of student");
    scanf("%d",&n);

    //Memory allocation for students
    ptr = (struct student*)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the student and Marks\n");
        scanf("%s%d",&(ptr+i)->name,&(ptr+i)->marks);
    }

    //Displaying the information
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\n",(ptr+i)->name,(ptr+i)->marks);
    }
    return 0;
}

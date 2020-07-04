#include<stdio.h>
struct student
{
    char name[25];
    int roll;
    float marks;
}s[10];

int main()
{
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter the name");
        scanf("%s",s[i].name);
        printf("Enter the marks");
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<5;i++)
    {
        printf("Name :");
        puts(s[i].name);
        printf("Marks : %f\n",s[i].marks);
    }
    return 0;
}

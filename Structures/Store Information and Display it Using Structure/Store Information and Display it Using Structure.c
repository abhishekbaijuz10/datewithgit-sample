#include<stdio.h>
struct student
{
    char name[50];
    int rollno;
    int age;
};
int main()
{
    struct student s;

    printf("Enter the information\n");
    printf("Enter the name of student = ");
    fgets(s.name, sizeof(s.name),stdin);

    printf("Enter the age of the student = ");
    scanf("%d",&s.age);

    printf("Enter the roll no of the student = ");
    scanf("%d",&s.rollno);

    //Displaying the information
    printf("\n\nDisplaying the information\n");
    printf("Name :");
    printf("%s",s.name);
    printf("Age : %d\n",s.age);
    printf("RollNo : %d\n",s.rollno);
    return 0;
}

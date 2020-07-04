#include<stdio.h>
struct student
{
    int age;
    char name[20];
};

void display(struct student s);

int main()
{
    struct student s;

    printf("Enter name");
    scanf("%s",&s.name);

    printf("Enter age");
    scanf("%d",&s.age);

    display(s);

    return 0;
}
void display(struct student s)
{
    printf("Displaying values");
    printf("Name is %s",s.name);
    printf("Age is %d:",s.age);
}

#include<stdio.h>
struct student
{
    int age;
    char name[20];
};
struct student getinfo();

int main()
{
    struct student s;
    s=getinfo();

    printf("Name = %s",s.name);
    printf("Age is = %d",s.age);

    return 0;

}
struct student getinfo()
{
    struct student s1;

    printf("Enter a name");
    scanf("%s",&s1.name);

    printf("Enter a age");
    scanf("%d",&s1.age);

    return s1;
}


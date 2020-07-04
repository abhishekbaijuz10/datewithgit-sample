#include<stdio.h>
struct student
{
    char name[30];
    int rollno;
    int sub[3];
};
int main()
{
    struct student st[1000];
    int num;

    printf("Enter the number of students");
    scanf("%d",&num);

    for(int i=0;i<num;i++)
    {
        printf("Enter the name and the roll no for the student %d :",i);
        scanf("%s",&st[i].name);
        scanf("%d",&st[i].rollno);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nEnter the marks of %s for the subject %d :",st[i].name,j);
            scanf("%d",&st[i].sub[j]);
        }
    }
    for(int i=0;i<num;i++)
    {
        int total=0;
        int average=0;
        for(int j=0;j<3;j++)
        {
            total=total + st[i].sub[j];
            average=(total/300)*100;
        }
        printf("\nTotal marks of %s is %d :",st[i].name,total);
        printf("\nAverage marks of %s is %d :",st[i].name,average);
    }

    return 0;
}

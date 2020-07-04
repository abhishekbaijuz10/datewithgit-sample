#include<stdio.h>
#include<stdlib.h>
struct person
{
    int age;
    float weight;
    char name[20];
};
int main()
{
    struct person *ptr;
    int i,n;
    printf("Enter the number of persons");
    scanf("%d",&n);

    //allocating the memory for n numbers of struct person
    ptr = (struct person*) malloc(n*sizeof(struct person));

    for(i=0;i<n;i++)
    {
        printf("Enter the first name and age ");
        scanf("%s%d",(ptr+i)->name,&(ptr+i)->age);
    }
    for(i=0;i<n;i++)
    {
        printf("\tName: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);
    }
    return 0;
}

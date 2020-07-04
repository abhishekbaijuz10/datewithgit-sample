#include<stdio.h>
struct person
{
    int age;
    int weight;
};
int main()
{
    struct person *ptr, person1;
    ptr = &person1;

    printf("Enter age:");
    scanf("%d",&ptr -> age);

    printf("Enter Weight");
    scanf("%d",&ptr -> weight);

    printf("Age is  %d\n",ptr->age);
    printf("Weight is %d",ptr->weight);

    return 0;
}

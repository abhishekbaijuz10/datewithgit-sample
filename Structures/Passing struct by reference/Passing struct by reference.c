#include<stdio.h>
typedef struct add
{
    float first;
    float second;
}add;

void addnums(add n1,add n2,add *result);

int main()
{
    add n1,n2,result;

    printf("For the first time\n");
    printf("Enter a number");
    scanf("%f",&n1.first);
    printf("Enter a second number");
    scanf("%f",&n1.second);

    printf("For the second time\n");
    printf("Enter a first number");
    scanf("%f",&n2.first);
    printf("Enter the second number");
    scanf("%f",&n2.second);

    addnums(n1, n2, &result);
    printf("\nResult of first time = %f\n",result.first);
    printf("\nResult off second time = %f\n",result.second);
    return 0;

}
void addnums(add n1, add n2, add *result)
{
    result->first  = n1.first + n2.first;
    result->second = n1.second + n2.second;
}

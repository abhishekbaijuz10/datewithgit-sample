#include<stdio.h>
#include<stdlib.h>
float calculatesum(float age[]);
int main()
{
    float result,age[] = {23.4, 55, 22.6, 3, 40.5, 18};

    //age array is passed
    result=calculatesum(age);
    printf("Sum is =%f",result);
    return 0;
}
float calculatesum(float age[])
{
    float sum=0.0;
    for(int i=0;i<6;i++)
    {
        sum=sum+age[i];
    }
    return sum;
}

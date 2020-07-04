#include<stdio.h>
#define PI 3.1415
#define circle(r) (PI*r*r)

int main()
{
    float radius ,area;
    printf("Enter the radius");
    scanf("%f",&radius);

    area = circle(radius);

    printf("%f",area);
    return 0;
}

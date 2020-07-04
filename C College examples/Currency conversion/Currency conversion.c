#include<stdio.h>
int main()
{
    float cur;
    char currency;
    float U=0,E=0,P=0,C=0;

    printf("Enter the amount to be converted :");
    scanf("%f",&cur);
    printf("Enter the currency to covert(USD,INR,EUR,CAD) :");
    scanf("%s",&currency);

    switch(currency)
    {
    case 'U':
        U=75.54*cur;
        printf("%f in US Dollar is : %f",cur,U);
        break;
    case 'E':
        E=82.87*cur;
        printf("%f in Euro is : %f",cur,E);
        break;
    case 'C':
        C=53.89*cur;
        printf("%f in CAD is : %f",cur,C);
        break;
    case 'P':
        P=93.71*cur;
        printf("%f in Pounds is : %f",cur,P);
        break;
    default:
        printf("Enter the currencies correctly");
    }

  return 0;

}

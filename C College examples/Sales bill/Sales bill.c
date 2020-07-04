#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
struct details
{
    char name[30];
    int price;
    int qty;
    struct date mfg;
};
int main()
{
    struct details item[10];
    int n,i,sum=0,total=0;
    printf("Enter the number of items");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the name :");
        scanf("%s",&item[i].name);
        printf("Enter the price :");
        scanf("%d",&item[i].price);
        printf("Enter the quantity");
        scanf("%d",&item[i].qty);
        printf("Enter the mfg date(dd--mm--yyyy)");
        scanf("%d-%d-%d",&item[i].mfg.day, &item[i].mfg.month, &item[i].mfg.year);
    }
    for(i=0;i<n;i++)
    {
        sum = sum+item[i].price;
        total = sum*item[i].qty;
    }
    printf("\n\n                                           ****GEEKBOZ****                                         \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("SL.NO      |              NAME        |         QUANTITY   |         PRICE   |            MFG DATE \n");
    printf("---------------------------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d                          %s                     %d              %d             %d-%d-%d \n",i+1,item[i].name,item[i].qty,item[i].price,item[i].mfg.day,item[i].mfg.month,item[i].mfg.year);

    }
    printf("---------------------------------------------------------------------------------------------------\n");
    printf("                                                               Total = %d\n",total);
    printf("---------------------------------------------------------------------------------------------------\n");
    return 0;
}

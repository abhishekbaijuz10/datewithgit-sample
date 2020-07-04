#include<stdio.h>
int main()
{
    int num;
    int *data;
    printf("Enter the total number of elements");
    scanf("%d",&num);

    //Allocating the memory
    data=(int *)calloc(num, sizeof(int));
    if(data == NULL)
    {
         printf("Error! memory not allocated");
         exit(0);
    }
       //Storing numbers entered y the user
    for(int i=0;i<num;i++)
    {
        printf("Enter Number %d = ",i+1);
        scanf("%d",data+i);
    }

    //Finding the largest
    for(int i=1;i<num;i++)
    {
        if(*data < *(data+i))
        {
            *data = *(data+i);
        }

    }
    printf("Largest number is: %d",*data);

        return 0;
}

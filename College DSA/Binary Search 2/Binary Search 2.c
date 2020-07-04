#include<stdio.h>
#include<conio.h>
int main()
{
    int first,last,middle,size,i,key,list[100];
    printf("Enter the size of the list :");
    scanf("%d",&size);
    printf("Enter the elements in the list :");
    for(i=0;i<size;i++)
        scanf("%d",&list[i]);
    printf("Enter the element to be searched :");
    scanf("%d",&key);
    first=0;
    last=size-1;
    middle = (first + last) / 2;
    while(first<=last)
    {
        if(list[middle]<key)
            first=middle+1;
        else if(list[middle]==key)
        {
            printf("Element  found in the index %d .",middle);
            break;
        }
        else
            last=middle+1;
        middle=(first+last)/2;
    }
    if(first>last)
        printf("Element not found in the list.");
    return 0;
}

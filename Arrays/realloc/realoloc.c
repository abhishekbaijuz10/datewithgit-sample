#include<stdio.h>
#include<stdlib.h>
int main()
{
    int * ptr,i,n1,n2;
    printf("Enter a size");
    scanf("%d",&n1);

    ptr = (int *)malloc(n1 * sizeof(int));
    printf("The allocated momory addrwess are :");
    for(i=0;i<n1;i++)
    {
        printf("%u\n",ptr+i);
    }
    printf("Enter a new size");
    scanf("%d",&n2);

    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Address of the newly alocated memory:\n");
    for(i=0;i<n2;i++)
    {
        printf("%u\n",ptr+i);
    }
    free(ptr);
    return 0;
}

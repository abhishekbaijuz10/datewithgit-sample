#include<stdio.h>
int main()
{
    int a[100],b[100],i;
    printf("Enter a character");
    fgets(a, sizeof(a),stdin);

    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
    }
    printf("String is : %s",b);
    return 0;
}

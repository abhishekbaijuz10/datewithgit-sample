#include<stdio.h>
void displaystring(char str[]);
int main()
{
    char str[50];
    printf("Enter the string = ");
    fgets(str,sizeof(str),stdin);
    displaystring(str);
    return 0;
}
void displaystring(char sr[])
{
    printf("String is = ");
     puts(sr);
}



#include<stdio.h>
int main()
{
    char str[100],sp=0;
    printf("Enter a string : ");
    gets(str);

    for(int i=0;str[i]!=0;i++)
    {
        if(str[i]=='!'||str[i]=='@'||str[i]=='#'||
           str[i]=='$'||str[i]=='%'||str[i]=='^'||
           str[i]=='&'||str[i]=='*')
        {
            sp++;
        }
    }
    printf("The number if special characters in the string is %d",sp);
    return 0;
}

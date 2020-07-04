#include<stdio.h>
void revsent();
int main()
{
    int c;
    printf("Enter a sentence : ");
    revsent();
    return 0;
}
void revsent()
{
    char c;
    scanf("%c",&c);
    if(c!= '\n')
    {
        revsent();
        printf("%c",c);
    }
}

#include<stdio.h>
int main()
{
    char message = "";
    printf("Enter the string");
    scanf("%d", &message);

    int rot = 13;
    int i = 0;
    while(message[i]!='\0')
    {
        size++;
    }

    for(int i = 0;i < message.size(); i++)
    {
        if(message[i] != ' ')
        {
            int num = (dict1[message[i]] - rot + 26) % 26;
            decipher += dict2[num];
        }
        else
        {
            decipher += " ";
        }
}

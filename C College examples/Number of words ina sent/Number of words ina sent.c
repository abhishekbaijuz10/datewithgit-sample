#include<stdio.h>
#include<string.h>
int main()
{
    char sent[100],i,words=1;
    printf("Enter a sentence");
    gets(sent);

    for(i=0;sent[i]!='\0';i++)
    {
        if(sent[i]==' ' || sent[i]=='\0' || sent[i]=='\t')
        {
            words++;
        }
    }
    printf("There are %d words in the sentence",words);
    return 0;
}

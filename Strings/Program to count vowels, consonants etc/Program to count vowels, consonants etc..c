#include<stdio.h>
int main()
{
    char line[150];
    int vowel,ws,digit,constant;

    vowel=constant=digit=ws=0;

    printf("Enter a line of string");
    fgets(line,sizeof(line),stdin);

    for(int i=0;line[i]!='\0';i++)
        if(line[i] == 'a' || line[i] == 'A' || line[i] == 'e' ||
           line[i] == 'E' || line[i] == 'i' || line[i] == 'I' ||
           line[i] == 'O' || line[i] == 'o')
           {
               vowel++;
           }
           else if((line[i] >='a' && line[i] <='z') || line[i] >='A' && line[i] <='Z')
                    {
                        constant++;
                    }
                    else if(line[i] >='0' && line[i]<= '9')
                    {
                        digit++;
                    }
                    else if(line[i] == ' ')
                    {
                        ws++;
                    }

printf("Vowels are: %d",vowel);
printf("\n Constants: %d",constant);
printf("\nDigits: %d",digit);
printf("\nWhitespaces:%d",ws);
return 0;
}

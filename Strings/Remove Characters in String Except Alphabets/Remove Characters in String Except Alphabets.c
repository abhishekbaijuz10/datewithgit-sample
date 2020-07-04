#include<stdio.h>
int main()
{
    char line[100];
    printf("Enter a string");
    gets(line);
    for(int i=0;i<strlen(line);i++){
        while(!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0'))
        {
            for(int j=i;line[j]!='\0';j++)
            {
                line[j]=line[j+1];
            }
            line
        }

    }
}


}

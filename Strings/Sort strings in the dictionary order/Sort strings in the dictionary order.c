#include<stdio.h>
int main()
{
    char str[5][50],temp[50];
    printf("Enter 5 words");

    //Getting the input
    for(int i=0;i<5;i++){
        fgets(str[i], sizeof(str[i]), stdin);
    }

    //sorting the elements in dictionary order
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(str[i],str[j]) > 0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("Entered value in dictionary order");
    for(int i=0;i<5;i++){
        fputs(str[i],stdout);
    }
    return 0;
}

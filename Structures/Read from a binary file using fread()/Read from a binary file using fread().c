#include<stdio.h>
#include<stdlib.h>
struct threenum
{
    int n1,n2,n3;
};
int main()
{
    int i;
    struct threenum num;
    FILE *fptr;

    if((fptr = fopen("program.bin","wb")) == NULL)
    {
        printf("Error");
        exit(1);
    }
    for(i=1;i<5;i++)
    {
        fread(&num,sizeof(struct threenum),1,fptr);
         printf("n1: %d\tn2: %d\tn3: %d", num.n1, num.n2, num.n3);
    }
    fclose(fptr);

    return 0;
}

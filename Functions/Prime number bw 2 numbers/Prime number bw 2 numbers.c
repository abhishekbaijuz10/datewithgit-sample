#include<stdio.h>
#include<stdlib.h>
int primenumber(int n);
int main()
{
    int n1,n2,flag,i;
    printf("Enter 2 numbers");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        flag=primenumber(i);
        if(flag==1)
            printf("%d, ",i);
    }
    return 0;
}
primenumber(int n)
{
    int j,flag=1;
    for(j=2;j<=n/2;j++)
    {
        if(n%j==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}

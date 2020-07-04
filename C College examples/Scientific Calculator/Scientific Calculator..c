#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,x;
    float ans;
    printf("What do you want to do? \n");
    printf("1.sin, 2.cos, 3.tan, 4.log, 5.sqrt\n");
    scanf("%d",&n);
    printf("What is the value of x :");
    scanf("%d",&x);

    switch(n)
    {
        case 1:
            ans=sin(x);
            break;
        case 2:
             ans=cos(x);
            break;
        case 3:
             ans=tan(x);
             break;
        case 4:
             ans=log(x);
             break;
        case 5:
             ans=sqrt(x);
             break;
    }
    printf("%f",ans);
    return 0;
}

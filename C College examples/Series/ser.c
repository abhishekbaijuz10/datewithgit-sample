#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float sum = 1,result;
    printf("Enter the number");
    scanf("%d",&n);

    while(n!=0)
    {
        for(int i=2;i<n;i++)
        {
            result = result +sum+pow(n,n);
        }
        n--;
    }
    printf("Sum = %d",result);
    return 0;
}


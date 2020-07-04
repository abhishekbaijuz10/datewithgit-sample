#include<stdio.h>
void mergearray(int ar[],int m);
int main()
{
    int a[10],b[10];
    int i,j,n,m;
    int temp;

    printf("Enter the size of the array :");
    scanf("%d",&m);
    printf("Enter the elements of the array a :");
    for (i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elements of the array :");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }

    for(i=0;i<n;i++)
    {
        a[m+i] = b[i];
    }
    m=m+n;
    mergearray(a,m);

    return 0;
}
void mergearray(int a[],int m)
{
    int i,j,temp;
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%d,",a[i]);
    }
}




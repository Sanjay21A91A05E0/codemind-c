#include<stdio.h>
int main()
{
    int n,a[100],b,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(max<=a[i])
        max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+b>=max)
        printf("True ");
        else
        printf("False ");
    }
}
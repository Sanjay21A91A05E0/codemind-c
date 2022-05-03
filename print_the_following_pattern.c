#include<stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=n;j++)
        {
           if(i==j)
           printf("x");
           else if(i==n-j+1)
           printf("x");
           else
           printf("0");
        }
        printf("
");
    }
}
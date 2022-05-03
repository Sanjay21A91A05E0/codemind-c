#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,z=1,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=z;k++)
        {
            printf("%d",abs(k-i));
        }
        z+=2;
        printf("
");
    }
}
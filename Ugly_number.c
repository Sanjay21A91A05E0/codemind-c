#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    if(n==1)
    {
    printf("Ugly Number");
    return 0;
    }
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if(i==2|| i==3||i==5)
            c=1;
        }
    }
    if(c==1)
    printf("Ugly Number");
    else
    printf("Not Ugly Number");
}
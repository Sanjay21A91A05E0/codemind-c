#include<stdio.h>
int main()
{
    int n,i=0,dc=0,a[100],d,j,t;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        d=n%10;
        a[i]=d;
        i++;
        dc++;
        n/=10;
    }
    for(i=dc-1;i>=0;i--)
    {
        if(a[i]==6)
        {
            a[i]=9;
            for(j=dc-1;j>=0;j--)
            printf("%d",a[j]);
            return 0;
        }
        else
        continue;
    }
    printf("%d",t);
}
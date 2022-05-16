#include<stdio.h>
int main()
{
    int n,a[100],m,i,j,k,c=0,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            c=1;
            s=i;
        }
    }
     for(i=n-1;i>=0;i--)
    {
        if(m==a[i])
        {
            c=1;
            k=i;
        }
    }
    if(c==0)
    printf("-1 -1");
    else
    printf("%d %d",k,s);
}
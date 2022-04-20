#include<stdio.h>
int main()
{
    int i,j,n,a[200],c=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]<=m)
        c+=a[i];
    }
    printf("%d",c);
}
       
#include<stdio.h>
int main()
{
    int i,n,a[100],c=0,s=0,j,s1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            c++;
        }
        if(c==2)
        {
            s1++;
        s+=a[i];
        }
    }
    printf("%.2f",(float)s/s1);
}
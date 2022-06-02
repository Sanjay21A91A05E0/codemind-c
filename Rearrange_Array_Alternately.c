#include<stdio.h>
int main()
{
    int n,a[100],m,i;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
        scanf("%d",&a[i]);
        if(m%2)
        {
        for(i=0;i<(m/2);i++)
        printf("%d %d ",a[m-1-i],a[i]);
        printf("%d
",a[m/2]);
        }
        else
        {
        for(i=0;i<(m/2)-1;i++)
        printf("%d %d ",a[m-1-i],a[i]);
        printf("%d %d
",a[m/2],a[(m/2)-1]);
        }
        n--;
    }
}
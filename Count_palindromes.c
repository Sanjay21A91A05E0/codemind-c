#include<stdio.h>
int pal(int);
int pal(int a)
{
    int num,rem,rev=0;
    num=a;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    if(num==rev)
    return 1;
    else
    return 0;
}
int main()
{
    int n,a[100],i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(pal(a[i]))
        c++;
    }
    printf("%d",c);
}
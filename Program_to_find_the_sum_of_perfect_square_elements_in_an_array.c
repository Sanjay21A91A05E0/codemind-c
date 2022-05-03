#include<stdio.h>
#include<math.h>
int square(int);
int square(int a)
{
    int s=int(sqrt(a));
    if(a==s*s)
    return 1;
    else
    return 0;
}
int main()
{
    int n,a[100],i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(square(a[i]))
        s+=a[i];
    }
    printf("%d",s);
}
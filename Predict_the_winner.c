#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,s=0,s1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i<n/2)
        s+=a[i];
        else
        s1+=a[i];
    }
    int ans=abs(s-s1);
    if(ans%4==0)
    printf("X");
    else
    printf("Y");
}
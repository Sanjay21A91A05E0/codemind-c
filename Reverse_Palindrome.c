#include<stdio.h>
int reverse(int);
int reverse(int n)
{
    int d,k=0,res,s=n;
     while(n)
     {
         d=n%10;
         k=k*10+d;
         n/=10;
     }
    return k;
}
int main()
{
    int n,d,k=0,s,res;
    scanf("%d",&n);
    s=n;
    while(n)
    {
        d=n%10;
        k=k*10+d;
        n/=10;
    }
    res=s+k;
    while(1)
    {
        if(res==reverse(res))
        {
            printf("%d",res);
            break;
        }
        else
         res=res+reverse(res);
    }
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=1,c,i,s,d,x,y;
    scanf("%d",&n);
    while(a<=n)
    {
        i=a;
        c=a+b;
        a=b;
        b=c;
        s=a;
    }
   x=abs(n-i);
   y=abs(n-s);
   if(x<y)
   printf("%d",i);
   else if(y==x)
   printf("%d %d",i,s);
   else
   printf("%d",s);
}
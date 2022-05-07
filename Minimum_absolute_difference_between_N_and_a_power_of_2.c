#include<stdio.h>
#include<math.h>
int main()
{
    int a,i=0,s=0,k,x,y,ans;
    scanf("%d",&a);
    while(s<=a)
    {
        s=pow(2,i);
        i++;
    }
k=s/2;
x=abs(a-s);
y=abs(a-k);
ans=(x<y)?x:y;
printf("%d",ans);
}
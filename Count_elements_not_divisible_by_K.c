#include<stdio.h>
int main()
{
    int n,i,a[100],m,c=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<n;i++)
   {
       if(a[i]%m!=0)
       c++;
   }
   printf("%d",c);
}
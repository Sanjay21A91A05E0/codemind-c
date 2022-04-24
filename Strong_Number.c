#include<stdio.h>
int fact(int);
int fact(int a)
{
    int i,f=1;
    for(i=a;i>0;i--)
    {
        f*=i;
    }
    return f;
    
}
int main()
{
    int n,d,s,c=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        s=fact(d);
        c+=s;
        n/=10;
    }
    if(temp==c)
    printf("The number %d is a strong number",temp);
    else
    printf("The number %d is not a strong number",temp);
}
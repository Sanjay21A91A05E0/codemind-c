#include<stdio.h>
int main()
{
    long int n,d,dc=0;
    scanf("%ld",&n);
    while(n)
    {
        d=n%10;
        dc++;
        n/=10;
        if(dc==9 && d==0)
        {
            printf("Invalid");
            return 0;
        }
    }
    if(dc==10)
    printf("Valid");
    else
    printf("Invalid");
}
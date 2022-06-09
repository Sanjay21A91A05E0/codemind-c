#include<stdio.h>
int main()
{
    int a,n,x,y;
    scanf("%d%d",&a,&n);
    while(n)
    {
        scanf("%d%d",&x,&y);
        if(x<a || y<a)
        printf("UPLOAD ANOTHER
");
        else 
        {
            if(x==y)
            printf("ACCEPTED
");
            else
            printf("CROP IT
");
        }
        n--;
    }
}
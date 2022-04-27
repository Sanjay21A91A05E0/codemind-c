#include<stdio.h>
int main()
{
    char s[100];
    int a,b,i,j;
    scanf("%[^
]s ",s);
    scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            printf("%c",s[j]);
        }
}
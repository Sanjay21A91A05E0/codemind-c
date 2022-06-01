#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(int(s[i]-'0')%2)
        printf("%d",int(s[i]-'0')*int(s[i]-'0'));
    }
    
}
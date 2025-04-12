#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    char str[101];
    int i,upper=0,lower=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
       if(s[i]>=65 && s[i]<=90) 
       upper++;
       else if(s[i]>=97 && s[i]<=122)
       lower++;
    }
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(upper>lower)
        str[i]=toupper(s[i]);
        else 
        str[i]=tolower(s[i]);
    }
    str[i]='\0';
    printf("%s\n",str);
    
    return 0;
} 
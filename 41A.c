// Translation

#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    char t[101];
    int i,len1,len2,count=0;
    scanf("%s %s",s,t);
    len1=strlen(s);
    len2=strlen(t);
    if(len1!=len2)
    {
        printf("NO\n");
        return 0;
    }
    for(i=0;i<len1;i++)
    {
        if(s[i]==t[len1-i-1])
        count++;
    }
    if(count==len1)
    printf("YES\n");
    else 
    printf("NO\n");
    return 0;
}

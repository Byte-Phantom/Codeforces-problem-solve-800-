#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101],str2[101],str[101];
    int len;
    scanf("%s%s",str1,str2);
    len=strlen(str1);
    for(int i=0;i<len;i++)
    {
        if(str1[i]==str2[i])
        str[i]='0';
        else 
        str[i]='1';
    }
    str[len]='\0';
    printf("%s\n",str);
    return 0;
}
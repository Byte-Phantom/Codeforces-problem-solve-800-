#include<stdio.h>
#include<string.h>
int main()
{
    int num,len,i,count=0;
    char ch1,ch2;
    scanf("%d",&num);
    while(num--)
    {
        char str[100];
        scanf("%s", str);
        len=strlen(str);
        if(len<=10)
        {
            printf("%s\n",str);
        }
        else
        {
            ch1=str[0];
            ch2=str[len-1];
            len=len-2;
            printf("%c%d%c\n",ch1,len,ch2);
        }  
    }
    return 0;
}
// Boy or Girl

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp;
    int i,j,len,count=0;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    for(i=0;i<len-1;i++) 
    {
        if(str[i]!=str[i+1])
        count++; 
    }
    count++;
    if(count%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else 
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}

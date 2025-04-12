#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int result;
    scanf("%s %s",str1,str2);
    result= strcasecmp(str1,str2);
    if(result<0)
    result=-1;
    else if(result>0)
    result=1;
    printf("%d\n",result);
    return 0;
}
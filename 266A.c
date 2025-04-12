#include<stdio.h>
int main()
{
    int num,count=0,i,j;
    scanf("%d",&num);
    char str[num];
    scanf("%s",str);
    for(i=0;i<num;i++)
    {
        if(str[i]==str[i+1])
        count++;
    }
    printf("%d\n",count);
    return 0;
}
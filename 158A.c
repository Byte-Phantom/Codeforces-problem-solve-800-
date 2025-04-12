#include<stdio.h>
int main()
{
    int num,k,count=0,i;
    scanf("%d %d",&num,&k);
    int ara[num];
    for(i=0;i<num;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<num;i++)
    {
        if(ara[k-1]<=ara[i] && ara[i]>0)
        count++;
    }
    printf("%d\n",count);
    return 0;
}
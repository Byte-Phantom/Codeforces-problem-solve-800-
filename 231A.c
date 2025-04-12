// Team

#include<stdio.h>
int main()
{
    int num,p,v,t,count,sum=0;
    scanf("%d",&num);
    while(num--)
    {
       scanf("%d %d %d",&p,&v,&t);
       count=0;
       if(p==1)
       count++;
       if(v==1)
       count++;
       if(t==1)
       count++;
       if(count>=2)
       sum++;
    } 
    printf("%d\n",sum);
    return 0;
}

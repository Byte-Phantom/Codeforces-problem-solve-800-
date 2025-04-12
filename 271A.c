// Beautiful Year

#include<stdio.h>
int main()
{
    int num,rem,temp,rem1,count,k;
    scanf("%d",&num);
    while(1)
    {
        num++;
        k=num;
        count=0;
        while(k!=0)
    {
        rem=k%10;
        k=k/10;
        temp=k;
        while(temp!=0)
        {
           rem1=temp%10;
           if(rem==rem1)
           { 
              count++;
           }
           temp=temp/10;
        }
    }
    if(count==0)
        break;
    }
    printf("%d\n",num);
    return 0;
}

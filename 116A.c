// Tram

#include<stdio.h>
int main()
{
    int n,a,b,sum=0,min=0,temp=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        sum=sum-a;
        sum=sum+b;
        if(sum>temp)
       {
        min=sum;
        temp=sum;
       }
    }
    printf("%d\n",min);
    return 0;
}

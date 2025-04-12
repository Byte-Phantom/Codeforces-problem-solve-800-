#include<stdio.h>
int main()
{
    int n,t,i;
    char temp;
    scanf("%d%d",&n,&t);
    char str[n+1];
    scanf("%s",str);
    while(t--)
    {
        for(i=0;i<n-1;i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
            temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
            i++;
            }
        }
    }
    printf("%s\n",str);
    return 0;
}
// Presents

#include<stdio.h>
int main()
{
    int n,o;
    scanf("%d",&n);
    int p[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&o);
        p[o]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i+1]);
    }
    return 0;   
}

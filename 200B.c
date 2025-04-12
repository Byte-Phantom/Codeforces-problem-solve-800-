// Drinks

#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int p[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }
    double res=(double)sum/n;
    printf("%0.12f\n",res);
    return 0;
}

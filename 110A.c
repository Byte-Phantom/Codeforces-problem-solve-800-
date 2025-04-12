// Nearly Lucky Number

#include<stdio.h>
int main()
{
    long long int n,rem,count=0;
    scanf("%lld",&n);
    while(n!=0)
    {
      rem=n%10;
      if(rem==4 || rem==7)
      count++;
      n=n/10;
    }
    if(count==7 || count==4)
    printf("YES\n");
    else 
    printf("NO\n");
    return 0;
}

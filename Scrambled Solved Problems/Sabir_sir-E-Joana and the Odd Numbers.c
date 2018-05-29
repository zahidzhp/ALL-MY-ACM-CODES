#include<stdio.h>

int main()
{
    long long n,ans;
    while (scanf("%lld",&n)==1)
    {
        ans=((n*(n+2))/2)*3-6;
        printf("%lld\n",ans);
    }
    return 0;
}

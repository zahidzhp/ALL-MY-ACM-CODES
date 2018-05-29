#include <stdio.h>

int gcd(int a, int b)
{
    int t;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main()
{
    register int i;
    int n,a,b,ans;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d %d",&a,&b);
        ans=gcd(a,b);
        printf("%d %d %d\n",i,a*b/ans,ans);
    }
    return 0;
}

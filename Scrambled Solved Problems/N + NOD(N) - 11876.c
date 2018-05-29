#include <stdio.h>
int div[1000000];
int res[1000000];
int main()
{
    register int i,j;
    for(i=0;i<1000000;i++) div[i]=0;
    for(i=1;i<=1000000;i++)
    {
        for(j=i;j<=1000000;j+=i) div[j]++;
    }
    res[1]=1;
    for(i=2;i<1000000;i++)
        res[i]=res[i-1]+div[res[i-1]];
    int cas,a,b,ans,k=1;
    scanf("%d",&cas);
    while(cas!=0)
    {
        ans=0;
        scanf("%d %d",&a,&b);
        for(i=0;res[i]<a;i++);
        ans=i;
        for(;res[i]<=b;i++);
        printf("Case %d: %d\n",k,i-ans);
        cas--;
        k++;
    }
    return 0;
}

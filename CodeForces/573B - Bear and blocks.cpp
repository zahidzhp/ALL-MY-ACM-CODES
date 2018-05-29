#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,low=0,ans=0;
    scanf("%d",&n);
    int arr[n+2],num[n+2];
    for(register int i=1;i<=n;i++) scanf("%d",&arr[i]);
    for(register int i=1;i<=n;i++) {
        low=min(low,arr[i]-i);
        num[i]=i+low;
    }
    low=n+1;
    for(register int i=n;i>0;i--)
    {
        low=min(low,arr[i]+i);
        num[i]=min(num[i],low-i);
        ans=max(ans,num[i]);
    }
    printf("%d\n",ans);
    return 0;
}

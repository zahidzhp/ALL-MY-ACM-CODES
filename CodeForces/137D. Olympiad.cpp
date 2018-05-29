#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int ar1[n+2],ar2[n+2];
    register int i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar1[i]);

    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar2[i]);
    }
    sort(ar1,ar1+n);
    sort(ar2,ar2+n);
    int l=0,r=n-1,ans=0;
    while(l<n)
    {
        if(ar1[l]+ar2[r]>=x)
        {
            ans++;
            r--;
        }
        l++;
    }
    printf("1 %d\n",ans);
    return 0;
}

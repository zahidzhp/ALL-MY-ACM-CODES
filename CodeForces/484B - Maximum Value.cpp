#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main()
{
    int n,ma=0;
    scanf("%d",&n);
    int arr[n+2];
    register int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int ans=0;
    for(register int i=0;i<n;i++)
    {
        for(register int j=i+1;j<n;j++)
        {
            ans=max(ans,arr[j]%arr[i]);
        }
    }
    printf("%d\n",ans);
    return 0;
}

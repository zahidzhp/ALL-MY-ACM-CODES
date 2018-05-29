#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,k,ans=0,c=0;
    scanf("%d %d",&n,&k);
    register int i;
    int a[n+5];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i>0)
        {
            if(a[i]+a[i-1]<k)
            {
                c=k-a[i-1]-a[i];
                a[i]+=c;
                ans+=c;
                //printf("%d\n",k-a[i-1]);
            }
        }
    }
    printf("%d\n",ans);
    for(i=0;i<n;i++)
        if(i!=0)printf(" %d",a[i]);
    else printf("%d",a[i]);
    printf("\n");
    return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n;
    int dis[607];
    while(scanf("%d",&n)&&n)
    {
        int nig;
        scanf("%d",&nig);
        register int i,j;
        for(i=0;i<n+1;i++)
        {
            scanf("%d",&dis[i]);
        }
        int d=n+1-nig;
        int ans=10000000;
        for(i=0;i<n+1-d;i++)
        {
            int t_dis=0;
            for(j=i;j<i+d;j++)
                t_dis+=dis[j];
            ans=min(ans,t_dis);
        }
        printf("%d\n",ans);
    }
    return 0;
}

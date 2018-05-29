#include <stdio.h>

int main()
{
    int n,lev[101],ans=0;
    register int i;
    while(scanf("%d",&n)==1)
    {
        ans=0;
        if(n==0) return 0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&lev[i]);
        }
        ans=lev[0]*6+5;
        for(i=1;i<n;i++)
        {
            if(lev[i]>lev[i-1])
                ans+=(lev[i]-lev[i-1])*6+5;
            else ans+=(lev[i-1]-lev[i])*4+5;

        }
        printf("%d\n",ans);
    }
}


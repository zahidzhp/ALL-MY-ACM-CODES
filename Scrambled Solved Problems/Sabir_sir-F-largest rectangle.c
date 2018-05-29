#include <stdio.h>
int main()
{
    int hight[100001],n,h,maxh,maxa,r,ans,k;
    register int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        maxa=0;
        ans=0;
        maxh=0;
        scanf("%d",&h);
        for(j=0;j<h;j++)
        {
            scanf("%d",&hight[j]);
            if(hight[j]>maxh) maxh=hight[j];
        }
        for(k=1;k<=maxh;k++){
            maxa=0;
            r=0;
            for(j=0;j<h;j++)
            {
                if(hight[j]>=k)
                {
                    r++;
                }
                else
                {
                    if(maxa<r) maxa=r;
                    r=0;
                }
            }
            if(maxa<r) maxa=r;
            if(maxa*k>ans) ans=maxa*k;
        }
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}

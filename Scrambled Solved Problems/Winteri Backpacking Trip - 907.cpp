#include <iostream>
#include <stdio.h>
using namespace std;
int arr[1000],pos[1000],n,k,t=0;

bool check(int m)
{
    int y=m,camp=0;
    for(register int i=0;i<=n;i++)
    {
        int dif=pos[i+1]-pos[i];
        if(y>=dif) y-=dif;
        else {
            camp++;
            y=m-dif;
        }
        if(camp>k||y<0) return false;
    }
    return true;
}
void print(int m)
{
    int p,g=0;
    for(register int i=0;i<=n;i++)
    {
        p=n+1-k;
        g=0;
        while(p--&&i<=n)
            {
                if(g+arr[i]<=m){
                    g+=arr[i];
                }
                else break;
                i++;
            }
            i--;
        printf("%d\n",g);
    }
}

int main()
{
    while(scanf("%d %d",&n,&k)==2)
    {
        pos[0]=0;
        for(register int i=0;i<=n;i++)
        {
            scanf("%d",&arr[i]);
            pos[i+1]=pos[i]+arr[i];
        }
        int left=pos[0];
        int right=pos[n+1];
        int dis=1000000009;
        while(left<=right)
        {
            int mid=(right+left)/2;
            //printf("\nmid->%d\n",mid);
            if(check(mid)) {
                dis=min(mid,dis);

                right=mid-1;
            }
            else left=mid+1;
        }
        printf("%d\n",dis);
        //print(dis);
    }
    return 0;
}

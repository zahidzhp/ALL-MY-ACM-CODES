#include <bits/stdc++.h>
using namespace std;
int nu;
int q;
vector<int> prime;
int best[200][1150];
int ans;
void reset(int n)
{
    for(register int i=0; i<200; i++)
    {
        for(register int j=0; j<n; j++)
            best[i][j]=-1;
    }
}
int coun(int pos, int sum,int numb)
{
    if(prime[pos]>nu) return 0;
    if(sum>nu||q<numb) return 0;
    if(sum==nu&&q==numb)
    {
        ans++;
        return 1;
    }
    if(best[pos][sum]!=-1)
    {
        ans+=best[pos][sum];
        return best[pos][sum];
    }
    best[pos][sum]=coun(pos+1,sum,numb);
    best[pos][sum]+=coun(pos+1,sum+prime[pos],numb+1);
    ans+=best[pos][sum];
    return best[pos][sum];
}
int main()
{
    int n,k;
    register int i,j;
    int pri[1150]= {0};
    pri[0]=1;
    pri[1]=1;

    for(i=2; i<1150; i++)
    {
        if(pri[i]==0)
        {
            //printf("%d ",pri[i]);
            for(j=i*i; j<1150; j+=i)
                pri[j]=1;
        }

    }
    for(i=0; i<1150; i++)
        if(pri[i]==0)
        {
            //printf("%d\n",i);
            prime.push_back(i);
        }
    //printf("%d\n",prime.size());
    while(scanf("%d %d",&n,&k)&&n&&k)
    {

        nu=n;
        q=k;
        ans=0;
        coun(0,0,0);
        printf("%d\n",ans);
    }
}

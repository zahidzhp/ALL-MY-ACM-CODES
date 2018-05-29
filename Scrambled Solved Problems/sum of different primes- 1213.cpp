#include <iostream>
#include <stdio.h>
using namespace std;
bool prime[1130];
int n;
long long ways(int pos,int tot,int remain)
{
    if(pos>=1126&&tot==0&&remain==0) return 1;
    if(pos>=1126) return 0;
    if(tot==n) return 1;

}

int main()
{
    for(register int i=0;i<1130;i++)
        prime[i]=true;
    prime[0]=false;
    prime[1]=false;
    for(register int i=2;i<1130;i++)
        if(prime[i]) for(register int j=i+i;j<1130;j+=i) prime[j]=false;
    int k;
    while(scanf("%d %d",&n,&k)==2)
    {
        printf("%lld\n",ways(0,0,k));
    }
}

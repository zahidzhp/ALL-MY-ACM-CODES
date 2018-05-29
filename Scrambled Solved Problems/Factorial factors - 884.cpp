#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
vector<int> primes;
int arr[1000005],prime[1002],ans[1000005];

int main()
{
    register int i,j;
    prime[1]=1;
    prime[0]=1;
    for(i=2; i<1001; i++)
        if(!prime[i])
        {
            primes.push_back(i);
            for(j=i*i; j<=1000; j+=i)
                prime[j]=1;
        }
    for(i=2; i<1000001; i++)
    {
        int coun=0,n=i;
        j=0;
        while(n!=1&&j<primes.size()&&i>=primes[j])
        {
            if(arr[n]!=0)
            {
                coun+=arr[n];
                break;
            }
            if(n%primes[j]==0)
            {
                coun++;
                n/=primes[j];
            }
            else
            {
                j++;
            }
        }
        if(coun==0) coun++;
        arr[i]=coun;
    }
    ans[1]=1;
    int n=0;
    for(i=2;i<=1000000;i++)
    {
        n+=arr[i];
        ans[i]=n;
    }
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",ans[n]);
    }
    return 0;

}

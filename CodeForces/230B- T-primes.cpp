#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int prime[1000005];
int main()
{
    register int i,j;
    prime[0]=1;
    prime[1]=1;
    for(i=2;i<1000002;i++)
    {
        if(!prime[i]) for(j=i+i;j<1000002;j+=i) prime[j]=1;
    }
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        long long k;
        cin>>k;
        double p=sqrt(k);
        if(p-(int)p!=0) cout<<"NO"<<endl;
        else if(!prime[(int)p]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

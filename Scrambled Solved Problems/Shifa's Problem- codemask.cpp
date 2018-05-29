#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        long long ans=((long long)pow(2,n+1)-1);
        cout<<ans<<endl;
    }
}

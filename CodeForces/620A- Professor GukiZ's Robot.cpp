#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main()
{
    long long x,y,m,n;
    cin>>x>>y>>m>>n;
    long long ans=max(abs(x-m),abs(y-n));
    cout<<ans<<endl;
}

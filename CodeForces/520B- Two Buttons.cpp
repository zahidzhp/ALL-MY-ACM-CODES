#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n,m ;
    cin>>n>>m;
    int ans=0;
    while(m!=n)
    {
        if(m>n&&m%2==0) m/=2;
        else m++;
        ans++;
    }
    cout<<ans<<endl;
}

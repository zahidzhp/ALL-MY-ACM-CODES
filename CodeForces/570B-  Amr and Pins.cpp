#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    long long r,x,y,x1,y1;
    cin>>r>>x>>y>>x1>>y1;
    long long t=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    //printf("%lld\n",t);
    int ans=ceil(sqrt(t)/(2*r));
    cout<<ans<<endl;
    //main();
    return 0;
}

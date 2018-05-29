#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    long long a,b=0,c=0;
    cin>>a;
    if(a<0)
    {
        b=-1*a;
        int t,l;
        t=b%10;
        b/=10;
        c=b;
        b/=10;
        b=b*10+t;
        if(c*-1>b*-1) cout<<-1*c<<endl;
        else cout<<-1*b<<endl;
    }
    else cout<<a<<endl;
    return 0;
}

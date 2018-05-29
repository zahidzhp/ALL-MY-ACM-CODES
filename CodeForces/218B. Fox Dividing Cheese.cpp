#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return 0;
    }
    int a2=0,a3=0,a5=0,b2=0,b3=0,b5=0;
    while(a%2==0)
    {
        a/=2;
        a2++;
    }
    while(a%3==0)
    {
        a/=3;
        a3++;
    }
    while(a%5==0)
    {
        a/=5;
        a5++;
    }
    while(b%2==0)
    {
        b/=2;
        b2++;
    }
    while(b%5==0)
    {
        b/=5;
        b5++;
    }
    while(b%3==0)
    {
        b/=3;
        b3++;
    }
    if(a==b) cout<<abs(a2-b2)+abs(a3-b3)+abs(a5-b5)<<endl;
    else cout<<-1<<endl;
}

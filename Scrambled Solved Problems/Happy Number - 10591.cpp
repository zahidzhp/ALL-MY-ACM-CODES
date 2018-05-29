#include <iostream>
#include <stdio.h>

unsigned long long f(unsigned long long b)
{
   unsigned long long c;
   long long d=0;
   c=b;
   while(c!=0)
    {
        d=d+(c%10)*(c%10);
        c=c/10;
    }
    return d;
}
using namespace std;

int main()
{
    unsigned long long a=0,b,t;
    int k=1,l;
    cin>> l;
    if(l<=0) return 0;

    while(scanf("%lld",&b)==1)
    {
        a=b;
        while(a!=1)
        {
            t=a;
            a=f(a);
           if(a==t||a==b) break;
        }
        if(a==1) cout<< "Case #" <<k <<": " <<b<<" is a Happy number."<<"\n";
        else cout<< "Case #" <<k <<": " <<b<<" is a Unhappy number."<<"\n";
        if(k==l) return 0;
        k++;
    }
    return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;

long long fac[101];
int main()
{
    long long ans;
    register unsigned long long i,j;
    fac[0]=1;
    for(i=1;i<101;i++)
    {
        fac[i]=fac[i-1]*i;
    }
    printf("%llu",fac[100]);
}

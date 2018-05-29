#include <stdio.h>
long long fac(long long b,long long k)
{
    long long given1,given2;
    given1=b;
    given2=k;
    long long i,j;
    j=1;
    for(i=k;i<=given1;i++){
        j=j*i;
    }
    return j;
}
int main()
{
    long long n,m;
    while(scanf("%lld %lld",&n,&m)==2){
        if(n==0&m==0) return 0;
        else printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,(fac(n,n-m+1)/fac(m,1)));
    }
    return 0;
}

#include <stdio.h>
int main()
{
    long long x,y;
    while(scanf("%lld %lld",&x,&y)==2){
        long long result;
        result=x^y;
        printf("%lld\n",result);
    }
    return 0;
}

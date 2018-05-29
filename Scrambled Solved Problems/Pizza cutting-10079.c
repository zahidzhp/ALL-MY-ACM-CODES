#include <stdio.h>
long long series(int a)
{
    long long i,r=0;
    for(i=0;i<=a;i++){
        r=r+i;
    }
    return r;
}
int main()
{
    long long cut;
    while(scanf("%lld",&cut)==1){
        if(cut<0) break;
        else {
            printf("%lld\n",1+series(cut));
        }
    }
    return 0;
}

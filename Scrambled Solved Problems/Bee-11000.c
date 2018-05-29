#include <stdio.h>
int fib(int a);
int main()
{
    int year;
    while (scanf("%d",&year)==1){
        long long i,m=0,t=0;
        if(year>=1){
        for(i=1;i<year;i++){
            m=m+fib(i);
        }
        m=m+1;
        t=m+fib(i);
        }
        else if(year==0){
            m=0;
            t=1;
        }
        else if(year<0) return 0;
        printf("%lld %lld\n",m,t);
    }
    return 0;
}

int fib(int a){
        int l=0;
        if(a==1) return 1;
        else if (a==2) return 2;
        else {
            long long k[1000],i;
            k[0]=0;
            k[1]=1;
            for(i=2;i<=a+1;i++){
                k[i]=k[i-1]+k[i-2];
                l=k[i];
            }

        }
        return l;
}

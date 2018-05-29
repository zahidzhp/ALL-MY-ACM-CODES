#include <stdio.h>
long long prime_give(long long a)
{
    if(a==1) return 2;
    if(a==2) return 3;
    if(a==3) return 5;
    if(a==4) return 7;
    if(a==5) return 11;
    if(a==6) return 13;
    if(a==7) return 17;
    if(a==8) return 19;
    if(a==9) return 23;
    long long l,m,n=10,k=1;
    for(m=24; n<=a; m++)
    {
        k=1;
        if(m%2==0)
        {
            k=0;
            m++;
        }
        for(l=3; l<=m/2; l=l+2)
        {
            if(m%l==0)
            {
                k=0;
                continue;
            }
        }
        if(k==1) n++;
    }
    return m;
}
int main()
{
    long long a,i,j,k=0;
    while(scanf("%lld",&a)==1)
    {
        if(a==0) return 0;
        k=0;
        for(i=1; a>prime_give(i); i++)
        {
            for(j=1; a>prime_give(j); j++)
            {
                if(a==(prime_give(i)+prime_give(j)))
                {
                    printf("%lld = %lld + %lld\n",a,prime_give(i),prime_give(j));
                    k=1;
                    continue;
                }
                if(k==1) break;
            }
        }
        if(k==0) printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int prime[1299710];
    int dis[1299710];
    register long long i,j;
    for(i=0; i<1299710; i++) prime[i]=1;
    prime[0]=0;
    prime[1]=0;
    for(i=2; i<1141; i++)
    {
        if(prime[i]=1)
            for(j=i*i; j<1299710; j=j+i)
                prime[j]=0;
    }
    register int di=0;
    long long k=2;

    while(k!=1299710)
    {

        if(prime[k])
        {
            dis[k]=di;
            di=0;
        }
        di++;
    }
    long long a;
    while(scanf("%lld",&a)==1)
    {
        if(a==0) return 0;
        else
        {
            if(prime[a])
            {
                printf("0");
                continue;
            }
            else {
                for(i=a+1;;i++)
                    if(prime[i]) break;
                printf("%d",dis[i]);
            }
        }
    }
    return 0;
}

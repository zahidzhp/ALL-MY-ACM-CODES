#include <stdio.h>
#include <stdlib.h>
int dig_sum(long long a)
{
    int b=0;
    while(a!=0)
    {
        b=b+a%10;
        a=a/10;
    }
    return b;
}
int prime[1000010];
int res[1000010];

int main()
{
    int a,num=0;
    long long i,k,j;
    for(i=0;i<=1000010;i++) prime[i]=1;
    prime[0]=0;
    prime[1]=0;
    for(i=2;i<=1001;i++)
    {
        if(prime[i]==1)
        {
            for(j=i*i;(j)<=1000009;j+=i)
                prime[j]=0;
        }
    }
    printf("%ld\n",clock());
    k=-1;
    for(i=0;i<1000009;i++)
    {
        if(i%10!=0) k++;
        else k=dig_sum(i);
        if(prime[i]&&prime[k]) num++;
        res[i]=num;
    }
    long long b,c,d;
    scanf("%d",&a);
    if(a==0) return 0;
    for(i=0; i<a; i++)
    {
        num=0;
        if(scanf("%lld %lld",&b,&c)==2)
        {
                printf("%d\n",res[c]-res[b-1]);
        }
        else return 0;

    }
    return 0;
}

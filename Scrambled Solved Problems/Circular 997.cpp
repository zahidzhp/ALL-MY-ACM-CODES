#include <iostream>
#include <cstdio>
#include <cmath>

int prime[1000005];
using namespace std;

int check(int a)
{
    int b,c,r=0,e;
    c=log10(a);
    printf("c-> %d\n",c);
    e=c;
    b=a;
    while(e--)
    {
        b=(b*10+b/pow(10,c));
        printf("b->%d\n",b);
        if(a>=100000) b=b%1000000;
        else if(a>=10000) b=b%100000;
        else if(a>=1000) b=b%10000;
        else if(a>=100) b=b%1000;
        printf("b2->%d\n",b);
        if(!prime[b]) r++;
        else break;
    }
    printf("%d -> %d\n",a,r);
    if(r==c)
    return 1;
    else return 0;
}
int main()
{
    register int i,j;
    prime[0]=1;
    prime[1]=1;
    prime[2]=0;

    for(i=2;i<=1000005;i++)
    {
            if(prime[i]==0)
                for(j=2*i;j<=1000005;j+=i)
                prime[j]=1;
    }
    int x,y,f;
    int ans;
    while(scanf("%d",&x)==1)
    {
        ans=0;
        scanf("%d",&y);
        for(i=x;i<=y;i++)
        {
           if(!prime[i]){
            printf("asi\n");
            ans+=check(i);
            }
            printf("nai ken ? %d\n",prime[i]);
        }

        if(ans==0) printf("No Circular Primes.\n");
        else printf("%d  Circular Prime.\n",ans);
    }
    return 0;
}

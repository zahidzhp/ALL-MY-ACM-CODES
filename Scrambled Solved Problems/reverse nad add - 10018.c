#include <stdio.h>
long long rev(long long a)
{
    long long b,c=0;
    b=a;
    while(b!=0)
    {
        c=c*10+b%10;
        b=b/10;
    }
    return c;
}
int main()
{
    long long a=0,test ,ini,p,q,step=0;
    scanf("%lld",&test);

    for(a=0; a<test; a++)
    {
        step=0;
        if(scanf("%lld",&ini)==1)
        {
            p=ini;
            while(1)
            {
                q=rev(p);
                if(p!=q)
                {
                    p=p+q;
                }
                else break;
                step++;
            }
            printf("%lld %lld\n",step,p);
        }
    }
    return 0;
}

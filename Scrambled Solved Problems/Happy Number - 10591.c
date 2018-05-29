#include <stdio.h>
int main()
{
    unsigned long long b,d,c=0;
    int a,i,r,p[650],q[10]= {0,1,4,9,16,25,36,49,64,81};
    for(r=0;r<650;r++)
        p[r]=-1;
    scanf("%d",&a);

    for(i=0; i<a; i++)
    {
        c=0;
        scanf("%lld",&b);
        d=b;
        while(c!=1)
        {
            c=0;
            while(b!=0)
            {
                c=c+q[b%10];
                b=b/10;
            }
            b=c;
            if(p[c]==i) break;
            p[c]=i;

        }
        if(c==1) printf("Case #%d: %lld is a Happy number.\n",i+1,d);
        else printf("Case #%d: %lld is an Unhappy number.\n",i+1,d);
    }
    return 0;
}

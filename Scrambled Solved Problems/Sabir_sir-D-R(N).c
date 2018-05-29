#include <stdio.h>
#include <math.h>

int main()
{
    long long a,b,ans,p;
    double l;
    int j;
    while(scanf("%lld",&a)==1)
    {
        ans=0;
        p=sqrt(a);
        for(j=0;j<=(int)p;j++)
        {
            l=a-j*j;
            l=sqrt(l);
            if((l-(int)l)==0)
            {
                if(l!=0&&j!=0)
                    ans=ans+4;
                else if(l!=0||j!=0)
                    ans=ans+2;
                else ans=ans+1;
            }
        }
        printf("%d\n",ans);
    }
}

#include<stdio.h>

long long lady[1000000];
int main()
{
    long long a,b,i,j,ans,ans1,q;
    while(scanf("%lld",&a)==1)
    {

        for(i=0; i<a; i++)
        {
            scanf("%lld",&lady[i]);
        }

        scanf("%lld",&b);


        for(i=1; i<=b; i++)
        {
            scanf("%lld",&q);

            ans=0;

            for(j=0; j<a; j++)
            {
                if(q> lady[j])
                {
                    ans=lady[j];
                }
                else break;
            }

            if(ans==0)printf("X ");

            else printf("%lld ",ans);

                        ans1=0;

            for(j=a-1; j>=0; j--)
            {
                if(q< lady[j])
                {
                    ans1=lady[j];
                }
                else break;
            }

            if(ans1==0)printf("X\n");

            else printf("%lld\n",ans1);

        }
    }

    return 0;
}

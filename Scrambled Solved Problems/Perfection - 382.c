#include <stdio.h>
int main()
{
    long long a,b=0,c=1,i;
    while(scanf("%lld",&a)==1)
    {
        if(c==1) printf("PERFECTION OUTPUT\n");
        b=0;

        if(a==0)
        {
            printf("END OF OUTPUT\n");
            return 0;
        }

        else{
            for(i=1;i<a;i++)
            {
                if(a%i==0) b=b+i;
            }
            if(b==a)
            {
                if(a<10) printf("    %lld  PERFECT\n",a);
                else if(a<100) printf("   %lld  PERFECT\n",a);
                else if(a<1000) printf("  %lld  PERFECT\n",a);
                else if(a<10000) printf(" %lld  PERFECT\n",a);
                else if(a<100000) printf("%lld  PERFECT\n",a);
            }
            if(b<a)
            {
                if(a<10) printf("    %lld  DEFICIENT\n",a);
                else if(a<100) printf("   %lld  DEFICIENT\n",a);
                else if(a<1000) printf("  %lld  DEFICIENT\n",a);
                else if(a<10000) printf(" %lld  DEFICIENT\n",a);
                else if(a<100000) printf("%lld  DEFICIENT\n",a);
            }
             if(b>a)
            {
                if(a<10) printf("    %lld  ABUNDANT\n",a);
                else if(a<100) printf("   %lld  ABUNDANT\n",a);
                else if(a<1000) printf("  %lld  ABUNDANT\n",a);
                else if(a<10000) printf(" %lld  ABUNDANT\n",a);
                else if(a<100000) printf("%lld  ABUNDANT\n",a);
            }
        }
        c++;
    }
    return 0;
}

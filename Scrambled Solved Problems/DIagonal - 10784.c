#include <stdio.h>
#include <math.h>
int main()
{
   long long a,b;
   int cas=1;
   while(scanf("%lld",&a)==1)
   {
       if(a==0) return 0;
       else {
            b=3+ceil(sqrt(9+4*2*a));
            b=ceil((double)b/2);
            printf("Case %d: %lld\n",cas,b);
            cas++;
       }
    }
    return 0;
}

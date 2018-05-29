#include <stdio.h>
#include <math.h>

#define pi 3.14159265358979

int main()
{
    double a,b,ans;

    while(scanf("%lf %lf",&a,&b)==2)
    {
        ans=.5*a*a*b*sin(2*pi/(b));
        printf("%.3lf\n",ans);
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
int main()
{
    double n,area,ansin,ansout;
    int cas=1;
    double pi;
    pi=2*acos(0);
    while(scanf("%lf %lf",&n,&area)==2)
    {
        if(n<3) return 0;
        double outrad,inrad;

        inrad=sqrt(area/(n*tan(pi/n)));
        outrad=inrad/cos(pi/n);
        ansin=area-pi*inrad*inrad;
    ansout=pi*outrad*outrad-area;
        printf("Case %d: %.5lf %.5lf\n",cas,ansout,ansin);
        cas++;
    }
}

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double k,t;
    double a1,a2,ans;
    scanf("%d",&n);
    register int i;
    for(i=0; i<n; i++)
    {
        scanf("%lf %lf",&k,&t);

        if(k>10) a1=10+7*2+(k-10)*3+1;
        else if(k>3) a1=10+(k-3)*2+1;
        else a1=10+1;

        if(k>10) a2=11+7*2.5+(k-10)*3.75;
        else if(k>3) a2=11+(k-3)*2.5;
        else a2=11;
        {
            a2+= (t/4)*2.5;
        }
         a1+=(t/5)*2;
        a1=a1+.5;
        a2=a2+.5;
        int p1=a1;
        int p2=a2;
        printf("%d\n",abs(p1-p2));
    }
    return 0;
}

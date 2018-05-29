#include <stdio.h>
int main()
{
    int i,n;
    double p,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf %lf",&p,&j,&k,&l);
        printf("Case %d: %.6lf\n",i,p*k*l);
    }
    return 0;
}

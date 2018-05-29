#include <stdio.h>
int main()
{
    int i;
    double test,j;
    scanf("%lf",&test);
    for(i=1;i<=test;i++)
    {
        if(scanf("%lf",&j)==1)
        printf("Case %d:\n%.0lf %.0lf\n%.0lf %.0lf\n%.0lf %.0lf\n%.0lf %.0lf\n",i,(-1*2.25*j),(1.5*j),(2.75*j),(1.5*j),(2.75*j),(-1*1.5*j),(-1*2.25*j),(-1*1.5*j));
        else return 0;
    }
    return 0;
}

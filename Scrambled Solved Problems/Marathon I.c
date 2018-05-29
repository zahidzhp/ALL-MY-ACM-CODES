#include<stdio.h>
#include<math.h>
int main()
{
    double s, ab, ac, bc, rat, area_abc, area_ade, ad;
    int t, test;
    scanf("%d",&test);
    for(t=1; t<=test; t++)
    {
        scanf("%lf %lf %lf %lf",&ab,&ac,&bc,&rat);
        s=(ab+ac+bc)/2.0;
        area_abc=sqrt(s*(s-ab)*(s-ac)*(s-bc));
        area_ade=(area_abc/(rat+1.0))*rat;
        ad=sqrt((ab*ab)*(area_ade/area_abc));
        printf("Case %d: %.10lf\n",t,ad);
    }
    return 0;
}

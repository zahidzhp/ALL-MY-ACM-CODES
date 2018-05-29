#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define Pi 3.141592654

int main()
{
    double a,b,c;
    double area,circ,inc,s,p,q,r1,r2,n,m;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {

        s=(a+b+c)/2;
        m=(s*(s-a)*(s-b)*(s-c));
        area=sqrt(m);


        r1=2*area/(a+b+c);
        inc=Pi*r1*r1;

        p=(a+b+c)*(b+c-a)*(a+c-b)*(a+b-c);
        r2=(a*b*c)/sqrt(p);
        circ=Pi*r2*r2;

        q=circ-area;
        n=area-inc;




        printf("%.4lf %.4lf %.4lf\n",q,n,inc);


    }
    return 0;
}

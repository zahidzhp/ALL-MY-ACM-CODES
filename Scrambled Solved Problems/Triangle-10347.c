#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
    double s,area;
    s=(a+b+c)/2;
    if(s*(s-a)*(s-b)*(s-c)<=0) area=-1;
    else area=sqrt(s*(s-a)*(s-b)*(s-c))*4/3;
    printf("%.3lf\n",area);
    }
    return 0;
}

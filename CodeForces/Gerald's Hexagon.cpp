#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    double area=((a+b+c)*(a+b+c)-a*a-c*c-e*e);
    //printf("%lf\n",area);
    printf("%d\n",(int)area);
    return 0;
}

#include <stdio.h>
int main()
{
    double a=0,b=0;
    while(scanf("%lf",&a)==1){
        b=b+a;
        if(a==0) break;
    }
    printf("%.0lf",b);
    return 0;
}

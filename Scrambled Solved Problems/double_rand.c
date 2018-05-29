#include <stdio.h>
#include <stdlib.h>
double ran(double a, double b);
int main()
{
    while(1){
    double a,b;
    printf("Enter the Min value:");
    scanf("%lf",&a);
    printf("Enter the max value:");
    scanf("%lf",&b);
    printf("Generated No: %lf\n",ran(a,b));
    }
    return 0;
}
double ran(double a, double b){

    double k,dif;
    dif=b-a;
    k=RAND_MAX/dif;
    return a+(rand()/k);
}

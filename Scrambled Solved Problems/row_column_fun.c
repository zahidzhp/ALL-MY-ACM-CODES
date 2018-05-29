#include <stdio.h>
#include <math.h>
int main()
{
    double i,j,k,l,f,b,c;
    printf("Enter the number of Column :");
    scanf("%lf",&k);
    printf("Enter the number of Row :");
    scanf("%lf",&l);
    for(i=1;i<=l;i++){
            f=1;
        for(j=1;j<=k;j++){
                b=pow(i,f);
            printf("%.lf ",b);
            f++;
        }
        printf("\n");
    }
    return 0;
}

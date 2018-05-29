#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    scanf("%d",&i);
    while(i--)
    {
        char a[33];
        scanf("%s",a);
        int a1=0,a2=0,a3=0,a4=0;
        register int j,k;
        for(j=7,k=0;j>=0;j--,k++)
        {
            a1+=(a[j]-'0')*pow(2,k);
        }
        for(j=15,k=0;j>=8;j--,k++)
        {
            a2+=(a[j]-'0')*pow(2,k);
        }
        for(j=23,k=0;j>=16;j--,k++)
        {
            a3+=(a[j]-'0')*pow(2,k);
        }
        for(j=31,k=0;j>=24;j--,k++)
        {
            a4+=(a[j]-'0')*pow(2,k);
        }
        printf("%d.%d.%d.%d\n",a1,a2,a3,a4);
    }
    return 0;
}

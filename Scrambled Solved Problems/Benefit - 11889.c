#include <stdio.h>

int gcd(int a,int b)
{
    int t;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main()
{
    int i,a,b,res;
    double k;
    scanf("%d",&i);
    if(i<=0) return 0;
    while(scanf("%d %d",&a,&b)==2)
    {
        k=(double)(b/a);
        if(k-(int)(b/a)!=0)
        {
            printf("NO SOLUTION\n");
            i--;
            if(i==0) return 0;
            continue;
        }
        else {
        res=b/gcd(a,b/a);
        printf("%d\n",(b/a)*(b/res));
        i--;
        if(i==0) return 0;
        }
    }
    return 0;
}

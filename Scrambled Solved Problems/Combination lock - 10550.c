#include <stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        if(a==0&&c==0&&c==0&&d==0) return 0;
        int deg=0;
        if(a<b) deg=deg+720+(40-(b-a))*9;
        else deg=deg+720+(a-b)*9;
        if(b<=c) deg=deg+360+(c-b)*9;
        else deg=deg+360+(40-(b-c))*9;
        if(c<d) deg=deg+(40-(d-c))*9;
        else deg=deg+(c-d)*9;
        printf("%d\n",deg);
    }
    return 0;
}

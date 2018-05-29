#include <stdio.h>
#include <math.h>

int ans(int b)
{
    int i=0,an;
    while(b!=0)
    {
        if(b%2==0) i++;
        else break;
        b/=2;
    }
    an=pow(2,i);
    return an;
}

int main()
{
    int a;
    while(scanf("%d",&a)==1)
    {
        if(a==0) return 0;
        else printf("%d\n",ans(a));
    }
    return 0;
}

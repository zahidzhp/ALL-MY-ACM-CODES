#include <stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)==1)
    {
        if(a==0) return 0;
        else printf("%d\n",a*(a+1)*(2*a+1)/6);
    }
    return 0;
}

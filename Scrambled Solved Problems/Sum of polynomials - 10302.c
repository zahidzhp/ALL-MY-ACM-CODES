#include <stdio.h>
int main()
{
    int a;
    unsigned long long b;
    while(scanf("%d",&a)==1)
    {
        b=a*(a+1);
        printf("%llu\n",b*b/4);
    }
    return 0;
}

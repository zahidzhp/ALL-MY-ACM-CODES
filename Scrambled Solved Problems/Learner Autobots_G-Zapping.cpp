#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cas,a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==-1&&b==-1) return 0;
        if(abs(a-b)<abs(a-b+100))
        printf("%d\n",abs(a-b));
        else printf("%d\n",abs(a-b+100));
    }
    return 0;
}


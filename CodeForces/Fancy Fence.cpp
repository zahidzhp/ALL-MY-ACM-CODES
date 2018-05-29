#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        int angle;
        scanf("%d",&angle);
        register int i;
        double ans=360/(double)(180-angle);
        if(ans==(int)ans) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

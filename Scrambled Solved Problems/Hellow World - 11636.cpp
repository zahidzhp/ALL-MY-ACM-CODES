#include <stdio.h>
int main()
{
    int cas,precal[10005];
    register int i,j;
    long long tem=1;
    for(i=1,j=0; i<10005; i++)
    {
        if(i<=tem)
        {
            precal[i]=j;
        }
        else
        {
            j++;
            precal[i]=j;
            tem+=tem;
        }
    }
            int n;
            i=1;
    while(scanf("%d",&n)&&n>0)
    {

        printf("Case %d: %d\n",i++,precal[n]);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n,x,ini=0,minute1,minute2,track=0,seen=0;
    register int i,j;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&minute1,&minute2);
        for(j=ini;j<minute1;j+=x)track=j;
        seen+=minute2-track;
        ini=minute2;
    }
    printf("%d\n",seen);
    return 0;
}

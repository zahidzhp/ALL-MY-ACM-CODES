#include <stdio.h>
int main()
{
    int a,b,c,ans;
    scanf("%d %d %d",&a,&b,&c);
    if(a-b==0)ans=0;
    else if(c+b>=a) ans=a-b;
    else if(a-b<=c) ans=a-b;
    else ans=c+1;
    printf("%d\n",ans);
    return 0;
}

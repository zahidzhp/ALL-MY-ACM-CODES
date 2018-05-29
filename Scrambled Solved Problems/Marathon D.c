#include <stdio.h>

int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    if(a*2+39>b*2+40) ans=a*2+39;
    else ans=b*2+40;
    printf("%d\n",ans);
    return 0;
}

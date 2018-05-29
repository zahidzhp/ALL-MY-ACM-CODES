#include <stdio.h>
#include <string.h>
int main()
{
    int a,len,ans=1;
    register int i;
    char b[20];
    scanf("%d %s",&a,&b);
    len=strlen(b);

    {
        for(i=a;i>0;i-=len) ans*=i;
    }
    printf("%d\n",ans);
    return 0;
}

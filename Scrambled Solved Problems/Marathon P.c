#include <stdio.h>

int main()
{
    int n,t,c,tem,seg=0,ans=0;
    scanf("%d %d %d",&n,&t,&c);
    register int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&tem);
        if(tem<=t)
        {
            seg++;
            if(seg%c==0) {ans++;seg--;}
        }
        else {
            seg=0;
        }
    }
    printf("%d\n",ans);
    return 0;
}

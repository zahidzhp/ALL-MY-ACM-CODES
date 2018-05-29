#include <stdio.h>
#include <string.h>
int main()
{
    char ins[30];
    int cas,n,ans,t,job[110];
    register int i;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&n);
        ans=0;
        for(i=0; i<n; i++)
        {
            scanf("%s",ins);
            if(strcmp(ins,"LEFT")==0)
            {
                ans-=1;
                job[i]=-1;
            }
            else if(strcmp(ins,"RIGHT")==0)
            {
                ans+=1;
                job[i]=1;
            }
            else
            {
                scanf("%s %d",ins,&t);
                ans+=job[t-1];
                job[i]=job[t-1];
            }
        }
        printf("%d\n",ans);
    }

    return 0;
}

#include <stdio.h>
int pri[1000000];
int pair(int a)
{
    int p;
    for(p=3;p<a;p++)
    {
        if(pri[p]==0&&pri[a-p]==0)   return p;
    }
    return 0;
}

int main()
{
    register int i,j;
    for(i=0; i<1000000; i++)
        pri[i]=0;
    pri[0]=0;
    pri[1]=1;
    pri[2]=0;
    for(i=1; i<1000000; i++)
    {
        if(pri[i]==0)
            for(j=2*i; j<1000000; j+=i)
            {
                pri[j]=1;
            }
    }
    int a,ans;
    while(scanf("%d",&a)==1)
    {
        if(a==0) return 0;
        else ans=pair(a);
        printf("%d = %d + %d\n",a,ans,a-ans);
    }
    return 0;
}

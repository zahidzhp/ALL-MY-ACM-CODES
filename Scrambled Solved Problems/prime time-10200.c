#include <stdio.h>
#include <math.h>
int prime[10001];
int primel[100010042];
int main()
{
    register int i,j;
    register unsigned long long a,b;
    int u,l,aprm=0,t,dis;
    for(i=0; i<10001; i++) prime[i]=1;
    prime[0]=0;
    prime[1]=0;
    for(i=2; i<100; i++)
        for(j=i*i; j<10001; j+=i) prime[j]=0;


    for(a=0; a<100010042; a++) primel[a]=1;
    for(a=0; a<10001; a++)
    {
        unsigned long long c=a*a+a+41;
        for(b=sqrt(c); b>1; b--)
            if(prime[b]==1)
            {
                if(c%b==0)
                {
                    primel[c]=0;
                    break;
                }
            }
    }

    while(scanf("%d %d",&l,&u)==2)
    {
        aprm=0;
        dis=0;

        for(t=l; t<=u; t++)
        {
            if(primel[t*t+t+41]==1) aprm++;

        }
        dis=u+1-l;
        double du=aprm;
        printf("%.02lf\n",(((du*100)/(dis))+1e-9));

    }
    return 0;
}

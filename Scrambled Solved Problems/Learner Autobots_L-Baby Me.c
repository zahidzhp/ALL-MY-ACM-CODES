#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int cas,a,b;
    double ans;
    register int i,j;
    scanf("%d",&cas);
    getchar();
    for(i=1; i<=cas; i++)
    {

        ans=0;
        char k[10];
        gets(k);
        j=0;
        a=0;
        b=0;
        int d=0,e=0;

        while(j<strlen(k))
        {
            if((k[j]-'0')>=0&&(k[j]-'0')<=10)
            {
                d=d*10+k[j]-'0';
            }
            j++;
            if(k[j]==' ')
                j+=2;
            while(j<strlen(k))
            {
                if(k[j]-'0'>=0&&k[j]-'0'<=10)
                {
                    e=e*10+k[j]-'0';
                }
                j++;
            }
        }
            a=d;
            b=e;
        ans=(double)a*.5+(double)b*.05;
        if(ans==(int)ans) printf("Case %d: %.0lf\n",i,ans);
        else if((int)(ans*100)%10==0) printf("Case %d: %.1lf\n",i,ans);
        else printf("Case %d: %.2lf\n",i,ans);
    }
    return 0;
}

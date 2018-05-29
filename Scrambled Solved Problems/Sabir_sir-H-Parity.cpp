#include <stdio.h>
#include <string.h>


int main()
{
    long long a,ans,p,i;
    char k[35],l[35];
    while(scanf("%lld",&a)==1)
    {
        i=0;
        k[0]='\0';
        if(a==0) return 0;
        ans=0;
        while(a!=0)
        {
            if(a%2==0) k[i]='0';
            else {k[i]='1'; ans++;}
            a=a/2;
            i++;
        }
        k[i]='\0';
        register int j,q;
        for(j=i-1,q=0;j>=0;j--,q++)
        {
            l[q]=k[j];
        }
        l[q]='\0';
        printf("The parity of %s is %d (mod 2).\n",l,ans);
    }
    return 0;
}

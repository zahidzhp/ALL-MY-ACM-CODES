#include <stdio.h>
#include <ctype.h>
int main()
{
    register int i,j;
    int a[1050],b[123];
    for(i=0;i<1050;i++) a[i]=1;
    a[0]=0;
    a[1]=1;
    for(i=2;i<1050;i++)
    {
        if(a[i]==1)
            for(j=i+i;j<1050;j+=i)
            a[j]=0;
    }
    for(i=65;i<123;i++)
    {
        if(i<=90) b[i]=i-38;
        else if(i>96) b[i]=i-96;
    }
    char val[20];
    while(scanf("%s",val)==1)
    {
    int k,sum=0,tem;
    for(k=0;val[k]!='\0';k++)
    {
        tem=toascii(val[k]);
        sum+=b[tem];
    }
    if(a[sum]==1) printf("It is a prime word.\n");
    else printf("It is not a prime word.\n");
    }
    return 0;
}


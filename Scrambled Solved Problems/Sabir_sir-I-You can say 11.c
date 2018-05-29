#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001];
    long long b;
    int len;
    int i,j;
    while(1)
    {
        scanf("%s",a);
        len=strlen(a);
        if(len==1 && a[0]=='0') break;
        b=0;

        for(i=len-1,j=0; i>=0; i--,j++)
        {
            if(j%2==0) b=b+(a[i]-'0');
            else b=b-(a[i]-'0');
        }
        if(b%11==0) printf("%s is a multiple of 11.\n",a,b);
        else printf("%s is not a multiple of 11.\n",a,b);
    }
    return 0;
}

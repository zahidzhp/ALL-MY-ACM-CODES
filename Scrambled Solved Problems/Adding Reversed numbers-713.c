#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d",&a);
    while(a!=0)
    {
        char a[200],b[200],ans[2001];
        scanf("%s %s",&a,&b);
        int len1,len2,k,p,j,carry,i;
        len1=strlen(a);
        len2=strlen(b);
        if(len1>=len2)
        {
            carry=0;
            k=len2-1;
            p=len1-1;
            j=0;
            while(k!=-1)
            {
                ans[j]=(a[p]-'0')+(b[k]-'0')+carry>9? (a[p]-'0')+(b[k]-'0')-10+'0'+carry:(a[p]-'0')+(b[k]-'0')+'0'+carry;
                if((a[p]-'0')+(b[k]-'0')>9) carry=1;
                else carry=0;
                k--;
                p--;
                j++;
            }

            k=0;
            if(carry==1)
            {
                ans[j]='1';
                ans[j+1]='\0';
            }
            else
            {
                ans[j]='\0';
                j--;
            }
            for(i=0; i<=j; i++)
            {
                if(ans[i]!='0') k=1;
                if(ans[i]!='0'&&k!=0)
                {
                    printf("%c",ans[i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

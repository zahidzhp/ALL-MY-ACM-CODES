#include <stdio.h>
#include <string.h>

int main()
{
    char a[20],b[20];
    int cas,i,len1,len2,j,ans;
    scanf("%d",&cas);
            getchar();
    for(i=0;i<cas;i++)
    {
        ans=0;

        gets(a);
        gets(b);
        len1=strlen(a);
        len2=strlen(b);
        if(len1==len2)
        {
            for(j=0;j<len1;j++)
            {
                if((a[j]-'0')!=(b[j]-'0'))
                {

                    if((a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'))
                    {

                        if((b[j]!='a'&&b[j]!='e'&&b[j]!='i'&&b[j]!='o'&&b[j]!='u')){
                        ans++;
                        break;
                        }
                    }
                    else
                    {
                        ans++;
                        break;
                    }

                }
            }
            if(ans==0) printf("Yes\n");
            else printf("No\n");
        }
        else printf("No\n");
    }
    return 0;
}

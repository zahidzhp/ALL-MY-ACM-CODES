#include <stdio.h>
#include <string.h>

int main()
{
    char a[56];
    int ru=0,rd=0,nc=0,am=0,cas=1;
    while(scanf("%s",a)!=0)
    {
        ru=0;
        rd=0;
        nc=0;
        am=0;
        if(a[0]=='#'&&a[1]=='\0') return 0;
        int i,len;
        len=strlen(a);
        for(i=len-1; a[i]!='.'; i--)
        {
            if(a[i]-'0'==0) nc++;
            else if(a[i]-'0'>=5) ru++;
            else if(a[i]-'0'<5) rd++;


        }
        printf("Case %d:\nROUND UP: %d\nROUND DOWN: %d\nNO CHANGE: %d\nAMBIGUOUS: %d\n\n",cas,ru,rd,nc,am);
        cas++;
    }
}

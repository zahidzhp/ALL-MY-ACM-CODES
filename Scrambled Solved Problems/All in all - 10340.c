#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000000],b[1000000];
    register int i,j,c;
    while(scanf("%s",a)==1)
    {
        if(scanf("%s",b)!=1) return 0;
        i=0;
        j=0;
        c=0;
        while(a[i]!='\0')
        {
            while(b[j]!='\0')
            {
                if(a[i]==b[j])
                {
                    c++;
                    j++;
                    break;
                }
                j++;
            }
            i++;
        }
        if(strlen(a)==c) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

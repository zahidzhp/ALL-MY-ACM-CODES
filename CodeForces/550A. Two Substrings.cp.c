#include <stdio.h>
#include <string.h>
int main()
{
    char a[100005];
    gets(a);
    register int i,j;
    for(i=0;i<strlen(a)-1;i++)
    {
        if(a[i]=='B'&&a[i+1]=='A')
        {
            for(j=i+2;j<strlen(a)-1;j++)
            {
                if(a[j]=='A'&&a[j+1]=='B')
                {
                    printf("YES\n");
                    return 0;
                }
            }
        }
        else if(a[i]=='A'&&a[i+1]=='B')
        {
            for( j=i+2;j<strlen(a)-1;j++)
            {
                if(a[j]=='B'&&a[j+1]=='A')
                {
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }
    printf("NO\n");
    return 0;
}

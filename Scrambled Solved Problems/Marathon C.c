#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    gets(a);
    register int i,j;
    int f=0,len;
    len=strlen(a);
    for(i=0; i<len ; i++)
    {

        if(a[i]=='h')
        {
            i++;
            while(i<len)
            {
                if(a[i]=='e')
                {
                    i++;
                    while(i<len)
                    {
                        if(a[i]=='l')
                        {
                            i++;
                            while(i<len)
                            {
                                if(a[i]=='l')
                                {
                                    i++;
                                    while(i<len)
                                    {
                                        if(a[i]=='o')
                                        {
                                            printf("YES\n");
                                            return 0;
                                        }
                                        i++;
                                    }
                                }
                                i++;
                            }
                        }
                        i++;
                    }
                }
                i++;
            }
        }
    }

       printf("NO\n");

        return 0;
    }

#include <stdio.h>
#include <string.h>
int main()
{
    char l[5000];
    int len,tem;
    int i=0,j=0,k=0,pass=0;
    while(gets(l)!=0)
    {

        if(strcmp(l,"DONE")==0) return 0;

        pass=0;
        j=0;
        len=strlen(l);
        char b[len];

        for(i=0; i<len; i++)
        {

            tem=toascii(l[i]);
            if(tem>64&&tem<91)
            {
                b[j]=toascii(l[i])+32;
                j++;
            }
            else if(tem>96&&tem<123)
            {

                b[j]=l[i];
                j++;
            }

        }
        b[j]='\0';
        for(i=0,k=j-1; i<j,k>=0; i++,k--)
        {
            if(b[i]!=b[k]) break;
            else pass++;
        }
        if(pass==j) printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
    }
    return 0;
}

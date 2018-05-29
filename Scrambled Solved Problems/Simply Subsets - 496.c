#include <stdio.h>
#include <string.h>
int main()
{
    while(1)
    {
        char a[500],b[500];
        if(gets(a)!=0)
        {
            int i,j=0,l=0,se1[300],set2[300],c=0,res,k;
            for(i=0; a[i]!='\0'; i++)
            {
                if(a[i]!=' ')
                {
                    c=c*10+toascii(a[i])-'0';
                }
                else
                {
                    set1[j]=c;
                    c=0;
                    j++;
                }
            }
        }
        set1[j]=c;
        c=0;
        if(gets(b)!=0)
        {
            for(i=0; b[i]!='\0'; i++)
            {
                if(b[i]!=' ')
                {
                    c=c*10+toascii(b[i])-'0';
                }
                else
                {
                    set2[l]=c;
                    c=0;
                    l++;
                }
            }
            set2[l]=c;
            if(j==l)
            {
                for(i=0; i<=l; i++)
                    for(k=0;k<=l;k++)
                    {
                        if(set1[i]==set2[k])
                        {
                            for(k=k;k<l;k++)
                            {
                                set2[k]=set2[k+1];
                            }
                        }
                    }
            }
        }
    }
}
}
}

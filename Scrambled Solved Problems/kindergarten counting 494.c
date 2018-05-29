#include <stdio.h>
#include <string.h>
int main()
{
    char line[1000];
    while(gets(line)!=0)
    {
        int j,l,word=0;
        int i=strlen(line);
        for(j=0; j<i; j++)
        {
            if((line[j])>=65&&(line[j])<=122)
            {
                int bre=0;
                for(l=0;; l++)
                {
                    if ((line[j])>=65&&(line[j])<=122)
                        j++;
                    else break;
                }
                word++;
            }
        }
        printf("%d\n",word);
    }
}

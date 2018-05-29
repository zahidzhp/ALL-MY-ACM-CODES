#include <stdio.h>
#include <string.h>
int main()
{
    int a,i,d;
    if(scanf("%d",&a)==1)
    {
        getchar();
        for(i=1; i<=a; i++)
        {
            d=0;
            char line[100];
            if(gets(line)!=0)
            {
                int j;
                for(j=0;; j++)
                {
                    if(line[j]=='a'||line[j]=='d'||line[j]=='g'||line[j]=='j'||line[j]=='m'||line[j]=='p'||line[j]=='t'||line[j]=='w'||line[j]==' ') d=d+1;
                    else if(line[j]=='b'||line[j]=='e'||line[j]=='h'||line[j]=='k'||line[j]=='n'||line[j]=='q'||line[j]=='u'||line[j]=='x') d=d+2;
                    else if(line[j]=='c'||line[j]=='f'||line[j]=='i'||line[j]=='l'||line[j]=='o'||line[j]=='r'||line[j]=='v'||line[j]=='y') d=d+3;
                    else if(line[j]=='s'||line[j]=='z') d=d+4;
                    if(line[j+1]=='\0') break;
                }
                printf("Case #%d: %d\n",i,d);
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
void print(int a,char b)
{
    int i,l;
    l=a;
    for(i=0; i<l; i++) putchar(b);
}
int main()
{
    int count,i,len;
    char line[132];
    while(gets(line)!=0)
    {
        count=0;
        len=strlen(line);
        for(i=0; i<line; i++)
        {
            if(line[i]-'0'<10) count=count+(line[i]-'0');
            else if(line[i]=='b')
            {
                print(count," ");
                count=0;
            }
            else if(line[i]=='!') printf("\n");
            else if(line[i]-'0'<48||line[i]-'0'>57&&line[i]!='b')
            {
                print(count,line[i]);
                count=0;
            }
        }
    }
    return 0;
}

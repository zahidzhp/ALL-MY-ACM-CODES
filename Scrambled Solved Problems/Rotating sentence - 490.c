#include <stdio.h>
#include <string.h>
int main()
{
    char str[100][100];
    int i,j,k,len,p=0,t;
    for(i=0; i<100; i++)
    {
        for(t=0; t<100; t++)
            str[i][t]=' ';
    }
    i=0;
    while(gets(str[i]))
    {
        len=strlen(str[i]);
        if(len>p) p=len;
        i++;
    }
    for(j=0; j<p; j++)
    {
        for(k=i-1; k>=0; k--)
        {
            printf("%c",str[k][j]);
        }
        printf("\n");
    }
    return 0;
}

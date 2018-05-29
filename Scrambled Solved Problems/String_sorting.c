#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,l;
    char x[50],m;
    gets(x);
    l=strlen(x);
    for (i=0;i<l;i++){
        for (j=0;j<l-1;j++){
            if(x[j]>x[j+1])
            {
                m=x[j];
                x[j]=x[j+1];
                x[j+1]=m;
            }
        }
    }
    for (i=0;i<l;i++)
        printf("%c",x[i]);
    return 0;
}

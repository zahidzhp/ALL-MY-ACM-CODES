#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    while(gets(str)){
        int k;
        k=strlen(str);
        int i;
        for(i=0;i<k;i++) printf("%c",(str[i])-7);
        printf("\n");
    }
    return 0;
}

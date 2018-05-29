#include <stdio.h>
#include <string.h>
int main()
{
    char quotes[10000];
    while(gets(quotes)>0){
        int i,j,k=0,f=0;
        j=strlen(quotes);
        char newl[10000];
        for(i=0;i<j;i++){
            if(quotes[i]=='"'){
                if(k%2==0) {
                    newl[f]='`';
                    newl[f+1]='`';
                    f=f+2;
                }
                if(k%2!=0){
                    newl[f]='\'';
                    newl[f+1]='\'';
                    f=f+2;

                }
                k++;
            }
            else {
                newl[f]=quotes[i];
                f++;
            }
        }
        newl[f]='\0';
        puts(newl);

    }
    return 0;
}

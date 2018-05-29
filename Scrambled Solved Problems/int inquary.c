#include <stdio.h>
int main()
{
    char str[100][100],result[1000];
   int i;
   for(i=0;i<100;i++){
    gets(str[i]);
    int k,j,l=0,n=0;
    k=strlen(str[i]);
    for(j=k;j>0;j--){
        result[n]=result[n]+str[i][j-1]+l-48;
        if(result[n]+str[i][j-1]-48>9) l=1;
        else l=0;
        result[n]=result[n]%10;
        n++;
        if(l==1 && j==1) result[n]==result[n]+1;
    }
    if(str[i][0]-48==0&&str[i][1]=='\0') break;
   }
   int len;
   len=strlen(result);
    for(i=len;i<0;i--) result[i-1]=result[i-1]+'0';
    strrev(result);
    puts(result);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
    char input[1000];
    while(gets(input)!=0){
            int lenth,i;
            lenth=strlen(input);
            char output[lenth+1];
            for(i=0;i<lenth;i++)
            {
                if(input[i]=='1') output[i]='`';
                else if(input[i]=='2') output[i]='1';
                else if(input[i]=='3') output[i]='2';
                else if(input[i]=='4') output[i]='3';
                else if(input[i]=='5') output[i]='4';
                else if(input[i]=='6') output[i]='5';
                else if(input[i]=='7') output[i]='6';
                else if(input[i]=='8') output[i]='7';
                else if(input[i]=='9') output[i]='8';
                else if(input[i]=='0') output[i]='9';
                else if(input[i]=='-') output[i]='0';
                else if(input[i]=='=') output[i]='-';
                else if(input[i]=='W') output[i]='Q';
                else if(input[i]=='E') output[i]='W';
                else if(input[i]=='R') output[i]='E';
                else if(input[i]=='T') output[i]='R';
                else if(input[i]=='Y') output[i]='T';
                else if(input[i]=='U') output[i]='Y';
                else if(input[i]=='I') output[i]='U';
                else if(input[i]=='O') output[i]='I';
                else if(input[i]=='P') output[i]='O';
                else if(input[i]=='[') output[i]='P';
                else if(input[i]==']') output[i]='[';
                else if(input[i]=='\\') output[i]=']';
                else if(input[i]=='S') output[i]='A';
                else if(input[i]=='D') output[i]='S';
                else if(input[i]=='F') output[i]='D';
                else if(input[i]=='G') output[i]='F';
                else if(input[i]=='H') output[i]='G';
                else if(input[i]=='J') output[i]='H';
                else if(input[i]=='K') output[i]='J';
                else if(input[i]=='L') output[i]='K';
                else if(input[i]==';') output[i]='L';
                else if(input[i]=='\'') output[i]=';';
                else if(input[i]=='X') output[i]='Z';
                else if(input[i]=='C') output[i]='X';
                else if(input[i]=='V') output[i]='C';
                else if(input[i]=='B') output[i]='V';
                else if(input[i]=='N') output[i]='B';
                else if(input[i]=='M') output[i]='N';
                else if(input[i]==',') output[i]='M';
                else if(input[i]=='.') output[i]=',';
                else if(input[i]=='/') output[i]='.';
                else if(input[i]==' ') output[i]=' ';
                else if(input[i]=='Z') output[i]='Z';
                else if(input[i]=='A') output[i]='A';
                else if(input[i]=='Q') output[i]='Q';
                else if(input[i]=='`') output[i]='`';
            }
            output[i++]='\0';
            printf("%s\n",output);
    }
    return 0;
}

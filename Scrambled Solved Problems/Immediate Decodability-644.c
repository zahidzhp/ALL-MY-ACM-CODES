#include <stdio.h>
#include <string.h>
int main()
{
    long long st=0;
    while(1)
    {
        long long b[10]={0,0,0,0,0,0,0,0,0,0},a=0,l,gro=0;
        char input[8][10];
        while(1)
        {
            if(gets(input[gro])!=0)
            {
                int i,len;
                len=strlen(input[gro]);

                if(strcmp(input,"9")==0) break;
                else {
                    for(i=0;i<len;i++)
                        if(input[i]=='1') b[i]++;
                }
            }
            else return 0;
            gro++;
        }
        for(l=0;l<gro;l++){
            if(b[l]>1) a=5;
            else if(b[l]<=1) a=a;
        }
        if(a==0){
            for()
        }
        st++;
        if(a!=0)
            printf("Set %lld is not immediately decodable\n",st);
        else if(a==0)
            printf("Set %lld is immediately decodable\n",st);
    }
    return 0;
}

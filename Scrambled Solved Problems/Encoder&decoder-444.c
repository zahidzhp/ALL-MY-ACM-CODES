#include <stdio.h>
#include <string.h>
int main()
{
    char main[80];
    while(gets(main))
    {
        int j=0,i;
        for(i=0; main[i]!='\0'; i++)
        {
            int l=0;
            if(main[i]-'A'>=0&&main[i]-'z'<=0)
            {
                j=toascii(main[i]);
                while(j!=0)
                {
                    l=10*l+j%10;
                    j=j/10;
                }
                printf("%d",l);
            }
            else if(main[i]=='!'||main[i]==','||main[i]=='.'||main[i]==':'||main[i]==';'||main[i]=='?'||main[i]==' ')
            {
                j=toascii(main[i]);
                while(j!=0)
                {
                    l=10*l+j%10;
                    j=j/10;
                }
                printf("%d",l);
            }
            else if(main[i]-'0'>=0&&main[i]-'0'<=9)
            {
                    int p=0,d,c;
                    p=strlen(main);
                    for(c=0;c<p;c++){
                        p=p*10+(toascii(main[c])-48);
                    }
                    while(p!=0){
                        int dec,nomb,f,*last;
                        dec=p%100;
                        for(f=0;f<2;f++){
                            nomb=dec%10*10+dec/10;
                        }
                        if(nomb<65){
                            dec=p%1000;
                            nomb=dec%10*100+dec/10*10+dec/100;
                            p=p/10;
                        }
                        p=p/100;
                        last=&nomb;
                        printf("%c",nomb);
                        }

                        break;
                    }
            }
            printf("\n");
        }
    return 0;
}

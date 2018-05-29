#include <stdio.h>
#include <string.h>
int main()
{
    int b,i=0,len;
    double ini=0,total=0;
    scanf("%d",&b);
    while(b!=0)
    {
        ini=0;
        total=0;
        char a[81];
        scanf("%s",&a);
        len=strlen(a);
        for(i=0; i<len; i++)
        {
            ini=0;
            if(a[i]=='C')
            {
                ini=12.01;
                if((a[i+1]-'0')>=0&&(a[i+1]-'0')<=9&&(a[i+2]-'0')>=0&&(a[i+2]-'0')<=9)
                {
                    ini=ini*((a[i+1]-'0')*10+(a[i+2]-'0'));
                    i++;
                }
                else if((a[i+1]-'0')>=0&&(a[i+1]-'0')<=9)
                {
                    ini=ini*(a[i+1]-'0');
                }
            }
            else if(a[i]=='H')
            {
                ini=1.008;
                if((a[i+1]-'0')>=0&&(a[i+1]-'0')<=9&&(a[i+2]-'0')>=0&&(a[i+2]-'0')<=9)
                {
                    ini=ini*((a[i+1]-'0')*10+(a[i+2]-'0'));
                    i++;
                }
                else if((a[i+1]-'0')>=0&&(a[i+1]-'0')<=9)
                {
                    ini=ini*(a[i+1]-'0');
                }
            }
            else if(a[i]=='O')
            {
                ini=16;
                if((a[i+1]-'0')>=0&&(a[i+1]-'0')<=9&&(a[i+2]-'0')>=0&&(a[i+2]-'0')<=9)
                {
                    ini=ini*((a[i+1]-'0')*10+(a[i+2]-'0'));
                    i++;
                }
                else if((a[i+1]-'0')>=0&&(a[i+1]-'0')<=9)
                {
                    ini=ini*(a[i+1]-'0');
                }
            }
            else if(a[i]=='N')
            {
                ini=14.01;
                if((a[i+1]-'0')>=0&&(a[i+1]-'0')<=9&&(a[i+2]-'0')>=0&&(a[i+2]-'0')<=9)
                {
                    ini=ini*((a[i+1]-'0')*10+(a[i+2]-'0'));
                    i++;
                }
                else if((a[i+1]-'0')>=0&&(a[i+1]-'0')<=9)
                {
                    ini=ini*(a[i+1]-'0');
                }
            }
            total+=ini;
        }
        printf("%.3lf\n",total);
        b--;
    }
    return 0;
}

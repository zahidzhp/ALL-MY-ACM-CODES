#include <stdio.h>
int main()
{
    int a,b,i,j,l=0,p,t=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        char k[100][10];
        scanf("%d",&b);
        for(j=0;j<b;j++)
        {
           gets(k[j]);
           if(k[j][0]=='L') l--;
           else if(k[j][0]=='R') l++;
           else if(k[j][0]=='S')
           {
               p=7;
               while(k[j][p]!='\0')
               {
                   t=t*10+(k[j][p]-'0');
                   p++;
               }

           }
        }
        printf("%d",l);
    }
}

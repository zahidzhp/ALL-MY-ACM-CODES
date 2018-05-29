#include <stdio.h>
#include <string.h>
int main()
{
   char inti[10];
   while(1)
   {
       gets(inti);
       if((inti[0]-'0')==0&&inti[1]=='\0') return 0;
       int b=0,a=0,i;
       b=strlen(inti);
       for(i=0;i<b;i++)
       {
           a=a+(inti[i]-'0');

       }

       while(a>9)
       {
           int b;
           b=a;
           a=0;
           while(b!=0)
           {
               a=a+b%10;
               b=b/10;
           }
       }
       printf("%d\n",a);
   }
    return 0;
}

#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cstring>
char bit[10][12];
 int p;
 int result() {
   int i,j;
   for(i=0;i<p-1;i++)
   {
       for(j=i+1;j<p;j++)
        if(!strncmp(bit[i],bit[j],strlen(bit[i])))
        return 0;
   }
   return 1;
}
int main()
{
   int i=0,set=0;
   int len1,len2;p=0;
   while(scanf("%s",bit[p])!=EOF)
   {
       p++;
       char temp[12];
       while(scanf("%s",bit[p]))
       {
           if(strcmp(bit[p],"9")==0)
            break;
            p++;
       }
    for(int i=1;i<=p-1;i++)
 {
    for(int j=0;j<=p-i-1;j++)
    {
        len1=strlen(bit[j]);
        len2=strlen(bit[j+1]);
       if(len1>len2)
       {
         strcpy(temp,bit[j]);
         strcpy(bit[j],bit[j+1]);
         strcpy(bit[j+1],temp);
       }
    }
 }
 if(result())
   printf("Set %d is immediately decodable\n",++set);
  else
   printf("Set %d is not immediately decodable\n",++set);
   p = 0;
   }
    return 0;
}

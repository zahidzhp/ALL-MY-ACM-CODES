#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    string a;
    while(getline(cin,a)){
    char k;
    register int i,flag=0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==' '&&i==0)
        {
            while(a[i]==' ') i++;
            i--;
            continue ;
        }
        if(a[i]==' '&flag)
        {
            if(flag==2)printf("%cay ",k);
            else printf("ay ");
            flag=0;
            continue;
        }
        if((tolower(a[i])=='a'||tolower(a[i])=='e'||tolower(a[i])=='i'||tolower(a[i])=='o'||tolower(a[i])=='u')&&(a[i-1]==' '||i==0))
        {
            flag=1;
            printf("%c",a[i]);
            continue;
        }
        if(isalpha(a[i])&&(a[i-1]==' '||i==0))
        {
            k=a[i];
            flag=2;
            continue;
        }
        printf("%c",a[i]);
    }
    if(flag==2)
        printf("%cay",k);
    else if(flag==1) printf("ay");
    printf("\n");
    }
    return 0;
}

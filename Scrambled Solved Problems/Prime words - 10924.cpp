#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    register int i,j;
    int a[1050]={1};
    a[0]=1;
    a[1]=1;
    a[2]=0;
    for(i=2;i<1050;i++)
    {
        if(a[i]==0)
            for(j=i;j<1050;j+=i)
            a[j]=1;
    }

    string val;
    while(scanf("%s",val)!=0)
    {
    int a,sum=0;
    for(a=0;val[a]!='\0';a++)
    {

    }
}

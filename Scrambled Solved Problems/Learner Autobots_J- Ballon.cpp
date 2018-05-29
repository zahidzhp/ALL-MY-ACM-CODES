#include <iostream>
#include <string>
#include <map>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
    string a="",k;
    int cas,ma=0;
    while(scanf("%d",&cas)==1)
    {
        if(cas==0) return 0;
        map<string,int> coun;
        register int i;
        for(i=0;i<cas;i++)
        {
            cin>>a;
            coun[a]++;
            if(ma<coun[a])
            {
                k=a;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}

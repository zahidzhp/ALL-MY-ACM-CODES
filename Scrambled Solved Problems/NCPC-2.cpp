#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    long long a,b,c,dat,cas=1,i,m;
    vector<string> da;
    string day;
    da.push_back("FRIDAY");
    da.push_back("SATURDAY");
    da.push_back("SUNDAY");
    da.push_back("MONDAY");
    da.push_back("TUESDAY");
    da.push_back("WEDNESDAY");
    da.push_back("THURSDAY");
    scanf("%lld",&m);
    for(cas=1; cas<=m; cas++)
    {
        scanf("%lld %lld",&a,&b);
        {
            cin >>day;


            if(b>=a)
            c=b-a;
            else c=(b-a+7);
            dat=c%7;
            for(i=0;i<7;i++)
            {
                if(day==da[i])
                {
                    int k=(i+dat)%7;
                    cout<< "Case "<<cas<<": "<<da.at(k)<<"\n";
                }
            }
        }
    }
    return 0;
}

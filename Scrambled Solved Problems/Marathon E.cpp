#include <iostream>
#include <map>
#include <string>
#include <cstdio>

using namespace std;
int main()
{
    std::map<string,int> st;
    string a,d,temp;
    cin>>a;

    int l,maxl=0,tem=0,maxnu=0;
    register int i,j,k;

   for(i=1; i<=a.size(); i++)
    {
        for(j=0; j<=a.size()-i; j++)
        {
            temp = a.substr(j,i);
            st[temp]++;
            if(maxl<=st[temp])
            {
                d=temp;
                maxl=st[temp];
            }
        }
    }
    cout<<d<<endl;
    return 0;
}

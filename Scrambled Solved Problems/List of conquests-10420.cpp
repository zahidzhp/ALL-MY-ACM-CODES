#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cstdio>

using namespace std;
int main()
{
    int cas;
    cin>>cas;
    register int i;
    vector<string> a;
    string b,c;
    map<string,int> name;
    getchar();
    while(getline(cin,b))
    {
        c="";
        for(i=0;i<b.size();i++)
        {
            if(i==0&& b[i]==' ')
                while(b[i]!=' ') i++;
            if(b[i]==' ')
            {
                c+="";
                break;
            }
            c+=b[i];
        }
        name[c]++;
        if(name[c]==1)
        {
            a.push_back(c);
        }
        cas--;
        if(cas==0) break;
    }
    std::sort(a.begin(),a.end());
    for(vector<string>::iterator itr=a.begin();itr!=a.end();itr++)
        cout<<*itr<<" "<<name[*itr]<<endl;
    return 0;
}

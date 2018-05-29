#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <map>
using namespace std;
bool comp(string a, string b)
{
    return (a[1]==b[0]&&a[2]==b[1]);
}
int main()
{
    int cas;
    scanf("%d",&cas);
    register int i;
    string a,b;
    vector <string> pass,tempo;
    map<string,int> mymap;
    int ma=0;
    for(i=0; i<cas; i++)
    {
        cin>>a;
        pass.push_back(a);
        ma=max(ma,mymap[a]++);
    }
    //cout<<ma;
    for(i=0;i<=ma;i++)
    sort(pass.begin(),pass.end(),comp);
    //sort(pass.begin(),pass.end(),comp);
    string ans="";

    //printf("\n");
    //sort(pass.begin(),pass.end(),comp);
    //sort(pass.begin(),pass.end(),comp);
    int flag=0;
    //ans+=pass[0][0];
    for(i=0; i<pass.size()-1; i++)
    {
        if(pass[i][1]==pass[i+1][0]&&pass[i][2]==pass[i+1][1])
        {
            ans+=pass[i][0];
            //ans+=pass[i][2];
        }
        else
        {
            flag=1;
            break;
        }
    }
    ans+=pass[i];
    if(flag)
    printf("NO\n");
    else {
        cout<<"YES"<<endl<<ans<<endl;
    }
    //main();
    return 0;
}

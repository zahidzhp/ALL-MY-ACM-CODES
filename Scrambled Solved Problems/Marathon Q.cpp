#include<bits/stdc++.h>
#include<set>
#include<cstring>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

vector<int>ara1;
set<char>st;

map<char,int>mp;

set<char>::iterator it;
int main()
{
    int i,j,k,l,cnt,c,flag=0;
    string str,temp, t;

    scanf("%d",&k);

    cin>>str;

    if(k==1)
    {
        cout<<str;
    }

    else
    {
        for(i=0; i!=str.size(); i++)
        {
            mp[str[i]]++;
            if(mp[str[i]]%k==0){ t+=str[i];flag++ ; }
            if(mp[str[i]]==1) st.insert(str[i]);

        }

        int sum=0;

        for (it=st.begin(); it!=st.end(); ++it)
        if(mp[*it]%k!=0) { printf("-1"); return 0; }
        for(i=0;i<k;i++){
            for (cnt=0;cnt<flag;cnt++)
                std::cout <<t[cnt];}

    }
        cout<<endl;



    return 0;
}

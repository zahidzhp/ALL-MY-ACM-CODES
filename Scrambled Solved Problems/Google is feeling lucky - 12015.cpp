#include <bits/stdc++.h>

using namespace std;
int main()
{
    int cas;
    register int i,j;
    scanf("%d",&cas);
    vector<string> st;
    for(i=1;i<=cas;i++)
    {
        map<string,int> track;
        string a;
        int ma=0,t;
        for(j=0;j<10;j++)
        {
            cin>>a>>t;
            track[a]=t;
            ma=max(ma,t);
            st.push_back(a);
        }
        printf("Case #%d:\n",i);
        for(j=0;j<10;j++)
        {
            if(track[st[j]]==ma)
                cout<<st[j]<<endl;
        }
        st.clear();
    }
    return 0;
}

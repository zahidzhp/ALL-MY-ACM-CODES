#include <iostream>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    if(b.size()!=a.size()) cout<<"NO"<<endl;
    else if(a==b) cout<<"YES"<<endl;
    else{
            int i=0;
            int a0=0,b0=0;
        while(i<a.size())
        {
            if(a[i]=='0') a0++;
            if(b[i]=='0') b0++;
            i++;
        }
        if(a0==a.size()||b0==b.size()) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

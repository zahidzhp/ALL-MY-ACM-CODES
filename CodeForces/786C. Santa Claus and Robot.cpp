#include <iostream>
using namespace std;
int main()
{
    string a;
    int len;
    cin>>len>>a;
    register int i=0;
    int l=0,r=0,u=0,d=0,ans=0;
    while(i<len)
    {
        if(a[i]=='R') {
            r=1;
            if(l==1){
                ans++;
                l=0;
                d=0;
                u=0;
            }
        }
        if(a[i]=='L') {
            l=1;
            if(r==1){
                ans++;
                r=0;
                u=0;
                d=0;
            }
        }
        if(a[i]=='U') {
            u=1;
            if(d==1){
                ans++;
                d=0;
                r=0;
                l=0;
            }
        }
        if(a[i]=='D') {
            d=1;
            if(u==1){
                ans++;
                u=0;
                r=0;
                l=0;
            }
        }
        i++;
    }
    cout<<ans+1<<endl;
}

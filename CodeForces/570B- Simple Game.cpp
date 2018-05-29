#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    if(n==1&&m==1) cout<<m<<endl;
    else if(n-m>m-1) cout<<m+1<<endl;
    else if(n-m==m-1) cout<<m-1<<endl;
    else cout<<m-1<<endl;
}

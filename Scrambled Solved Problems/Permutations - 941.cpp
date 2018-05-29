#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    long long d,temp=1,arr[25];
    string a;
    register int i;
    arr[0]=1;
    for(i=1; i<21; i++)
    {
        temp=temp*i;
        arr[i]=temp;
    }
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        cin>>a>>d;
        d++;
        int out;
        sort(a.begin(),a.end());
        int len=a.size();
        for(i=0; i<len; i++)
        {
            out=0;
            while(arr[a.size()-1]<d)
            {
                d-=arr[a.size()-1];
                out++;
            }
            cout<<a[out];
            a.erase(a.begin()+out);
        }
        cout<<endl;
    }
    return 0;
}

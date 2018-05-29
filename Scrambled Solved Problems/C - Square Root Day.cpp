#include<iostream>
using namespace std;
#include<memory.h>
int ref[1000];

int main()
{
    memset(ref,0,sizeof(ref));
    for(int i=1;i<=12;i++)
        ref[i*i]=i;

    int cas,start,end,count;
    cin>>cas;
    while(cas--)
    {
        cin>>start;
        cin>>end;
        count = 0;
        for(int i=start;i<=end;i++)
        {
            if(ref[i%100]!=0||ref[i%1000]!=0)
                count++;
        }
        cout<<count<<endl;
    }
}

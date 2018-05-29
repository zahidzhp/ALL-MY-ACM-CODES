#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int cas,s=1;
    vector<long long> check;
    while(scanf("%d",&cas)==1&&cas)
    {
        printf("Case %d:\n",s);
        register int i,j;
        long long tem;
        for(i=0; i<cas; i++)
        {
            scanf("%lld",&tem);
            check.push_back(tem);
        }
        long long first=0,last=0;
        i=0;
        while(i!=check.size())
        {
            first=check[i];
            tem=0;
            if(i!=check.size()-1)
            while(check[i]==check[i+1]-1)
            {
                tem++;
                i++;
            }
            last=check[i];

            if(tem==0) printf("0%lld\n",first);
            else
            {
                string a="";
                printf("0%lld",first);
                while(first!=last)
                {
                    first/=10;
                    a+=(char)(last%10+'0');
                    last/=10;
                }
                reverse(a.begin(),a.end());
                cout<<"-"<<a<<endl;
            }
            i++;
        }
        s++;
        printf("\n");
        check.clear();
    }
    return 0;
}

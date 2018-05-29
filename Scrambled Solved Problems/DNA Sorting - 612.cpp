#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdio>

using namespace std;
int main()
{
    string a,b;
    int n,len,wed,in_val,blank=0;
    scanf("%d",&n);
    register int i,j,k,l;

    vector<string> vec;
    map<string,int> store;
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&len,&wed);
        for(j=0; j<wed; j++)
        {
            in_val=0;
            cin>>a;
            for(l=0; l<len; l++)
                for(k=l+1; k<len; k++)
                {
                    if((int)a[l]>(int)a[k]) in_val++;
                }
            store[a]=in_val;
            vec.push_back(a);
        }
        for(j=0; j<wed-1; j++)
        {
            for(k=0; k<wed-j-1; k++)
            {
                if(store[vec[k]]>store[vec[k+1]])
                {
                   swap(vec[k],vec[k+1]);
                }
            }
        }
        if(blank)

            cout<<endl;
        blank=1;

        for (std::vector<string>::iterator it = vec.begin() ; it != vec.end(); ++it)
            std::cout<<*it<<endl;
        vec.clear();
    }



    return 0;
}

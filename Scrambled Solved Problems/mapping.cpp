#include <iostream>
#include <map>
#include <cstdio>

using namespace std;
int main()
{
    std::map<std::string,int> mymap;
    string a;
    int k,i;
    scanf("%d",&k);
    for(i=0;i<k;i++){
    cin>>a;
    mymap[a]++;
    if(mymap[a]==1) printf("OK\n");
    else cout<<a<<mymap[a]-1<<endl;
    }

    return 0;
}


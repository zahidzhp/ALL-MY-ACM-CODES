#include <iostream>
#include <map>
#include <queue>
#include <cstdio>
#include <cstdlib>

using namespace std;
int main()
{
    int cas;
    string a;
    char b;
    std::map<string,int> subs;
    queue<string> words;
    scanf("%d",&cas);
    register int i,j;
    for(i=0; i<cas; i++)
    {
        scanf("%c",&b);
        getchar();
        while(getline(std::cin,a))
        {

            if(a.size()==0) break;
            words.push(a);
            for(j=1; j<=a.size(); j++)
            {
                printf("i'm in \n");
                subs[a.substr(0,j)]++;
            }
        }
        printf("i'm out\n");
        while(!words.empty())
        {
            a=words.front();
            words.pop();
            for(j=a.size();j>0; j--)
            {
                if(subs[a.substr(0,j)]==1)
                {
                    subs[a.substr(0,j)]--;
                    continue;
                }
                else if(subs[a.substr(0,j)]>1&&j==a.size())
                {
                    cout<<a<<" "<<a.substr(0,j)<<"\n";
                    while(j>0)
                    {
                        subs[a.substr(0,j)]--;
                        j--;
                    }
                    break;
                }
                else if(subs[a.substr(0,j)]>1&&j<a.size())
                {
                    cout<<a<<" "<<a.substr(0,j+1)<<"\n";
                    while(j>0)
                    {
                        subs[a.substr(0,j)]--;
                        j--;
                    }
                    break;
                }
                if(j==1)
                {
                    cout<<a<<" "<<a.substr(0,j+1)<<"\n";
                    subs[a.substr(0,j)];
                }
            }
        }
        printf("\n");
    }
    return 0;
}

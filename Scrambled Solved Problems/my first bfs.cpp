#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>

using namespace std;
vector<int> a[1000];
int dis[1000];
int visit[1000];

void bfs(int src)
{
    queue<int> b;
    b.push(src);
    dis[src]=0;
    visit[src]=1;
    while(!b.empty())
    {
        int u=b.front();
        b.pop();
            for(int i=0;i < a[u].size();i++)
            {
                int j=a[u][i];
                if(visit[j]==0)
                {
                    visit[j]=1;
                    b.push(j);
                    dis[j]=dis[u]+1;
                }
            }
    }
}


int main()
{
    int i,b,c,v,e;
    scanf("%d %d",&v,&e);
    for(i=0;i<e;i++)
    {
        scanf("%d %d",&c,&b);
        a[c].push_back(b);
        a[b].push_back(c);
    }
    int s,d;
    scanf("%d %d",&s,&d);
    bfs(s);
    printf("%d\n",dis[d]);
    return 0;

}

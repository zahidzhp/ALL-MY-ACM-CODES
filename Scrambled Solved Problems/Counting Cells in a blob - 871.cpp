#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <cstdio>
#include <cstdlib>
using namespace std;
std::vector<string> grid;
int r,c;
int visit[26][26];

int DFS(int a,int b)
{
    if(a<0||b<0||a>=r||b>=c||grid[a][b]=='0'||visit[a][b]==1)
        return 0;
    else if(grid[a][b]=='1')
    {
        visit[a][b]=1;
        return DFS(a-1,b-1)+DFS(a-1,b)+DFS(a-1,b+1)+DFS(a,b-1)+DFS(a,b+1)+DFS(a+1,b-1)+DFS(a+1,b)+DFS(a+1,b+1)+1;
    }
}

int main()
{
    int ca,ans=0;
    string s;
    scanf("%d",&ca);
    register int i,j;
    getchar();
    getchar();
    while(ca!=0)
    {
        r=0;
        c=0;
        ans=0;
        while(getline(cin,s)){
            if(s=="") break;
            grid.push_back(s);
            r++;
        }
        c=grid[0].size();
        register int i,j;
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            visit[i][j]=0;
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            {
                if(grid[i][j]=='1'&&visit[i][j]==0)
                    ans=max(ans,DFS(i,j));
            }
            printf("%d\n",ans);
            if(ca!=1) printf("\n");
        grid.clear();
        ca--;
    }
    return 0;
}

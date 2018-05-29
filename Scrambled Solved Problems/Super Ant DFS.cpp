#include <iostream>
#include <cstdio>

int r,c,t,time;
int grid[51][51],visit[51][51];
int dfs(int a,int b)
{
    if(a>r||b>c|a<0||b<0||visit[a][b]==1)
    {
        return 0;
    }
    else if(time==0)
    {
        visit[a][b]=1;
        return grid[a][b];
    }
    else {
            time--;
            visit[a][b]=1;

        return grid[a][b]+dfs(a+1,b)+dfs(a-1,+b)+dfs(a,b+1)+dfs(a,b-1)+dfs(a+1,b+1)+dfs(a+1,b-1)+dfs(a-1,b+1)+dfs(a-1,b-1);
    }
}


using namespace std;
int main()
{
    int cas, pos1,pos2,ans;
    register int i,j;
    scanf("%d",&cas);
    while(cas--)
    {
        ans=0;
        scanf("%d %d %d",&r,&c,&t);
        time=t;
        scanf("%d %d",&pos1,&pos2);
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            scanf("%d",&grid[i][j]);
        ans=dfs(pos1,pos2);
        printf("%d\n",ans);
    }
    return 0;
}

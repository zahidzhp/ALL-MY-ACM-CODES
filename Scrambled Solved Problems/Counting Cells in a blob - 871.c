#include <stdio.h>
#include <string.h>

int r,c;
char grid[26][26];
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
    int ca;
    scanf("%d",&ca);
    register int i,j;

    while(ca!=0)
    {
        int len;
        c
        while(gets())
    }
}

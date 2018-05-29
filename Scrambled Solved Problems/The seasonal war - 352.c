#include <stdio.h>
#include <stdlib.h>
char grid[26][26];
int visit[26][26];
int r;
void check(int a, int b)
{
    if(a<0||b<0||a>=r||b>=r||grid[a][b]=='0'||visit[a][b]==1) return ;
    else
    {
        visit[a][b]=1;
        check(a,b+1);
        check(a,b-1);
        check(a+1,b);
        check(a-1,b);
        check(a-1,b-1);
        check(a-1,b+1);
        check(a+1,b-1);
        check(a+1,b+1);
    }
}


int main()
{
    int cas=1,ans;
    while((scanf("%d",&r))==1)
    {
        if(r==0) return 0;
        ans=0;
        getchar();
        register int i,j;
        for(i=0;i<r;i++)
            for(j=0;j<r;j++)
        {
            scanf("%c",&grid[i][j]);
            if(grid[i][j]=='\n') j--;
            visit[i][j]=0;
        }

        for(i=0;i<r;i++)
            for(j=0;j<r;j++)
        {
            if(grid[i][j]=='1'&&visit[i][j]==0)
            {
                check(i,j);
                ans++;
            }
        }
        printf("Image number %d contains %d war eagles.\n",cas,ans);
        cas++;
    }
}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n,m;
    int cas=1;
    char grid[505][505];
    int ans[505][505];
    while(scanf("%d %d",&n,&m)&&n&&m)
    {
        if(cas!=1) printf("\n");
        getchar();
        register int i,j;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%c",&grid[i][j]);
                ans[i][j]=0;
            }
            getchar();
        }
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
            {
                if(grid[i][j]=='*')
                {
                    if(i>0)
                    {
                        ans[i-1][j]++;
                        ans[i-1][j+1]++;
                    }
                    ans[i+1][j]++;
                    ans[i][j+1]++;
                    if(j>0)
                    {
                        ans[i][j-1]++;
                        ans[i+1][j-1]++;
                    }
                    if(i>0&&j>0) ans[i-1][j-1]++;
                    ans[i+1][j+1]++;
                }
            }
        printf("Field #%d:\n",cas++);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(grid[i][j]!='*')
                    printf("%d",ans[i][j]);
                else printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

char grid[201][201];
int visit[201][201];
int r;
void checkb(int a,int b)
{
    if(a<0||b<0||a>=r||b>=r||grid[a][b]=='w'||visit[a][b]==1) return;
    else
    {
        visit[a][b]=1;
        checkb(a-1,b-1);
        checkb(a-1,b);
        checkb(a,b-1);
        checkb(a,b+1);
        checkb(a+1,b);
        checkb(a+1,b+1);
    }
}

void wcheck(int a,int b)
{
    if(a<0||b<0||a>=r||b>=r||grid[a][b]=='b'||visit[a][b]==2) return ;
    else
    {
        visit[a][b]=2;
        wcheck(a-1,b-1);
        wcheck(a-1,b);
        wcheck(a,b-1);
        wcheck(a,b+1);
        wcheck(a+1,b);
        wcheck(a+1,b+1);
    }
}

int main()
{
    int cas=1,k;
    register int i ,j;
    while((scanf("%d",&r))==1)
    {
        k=0;
        getchar();
        if(r==0) return 0;

        else
        {
            for(i=0; i<r; i++)
                for(j=0; j<r; j++)
                {
                    scanf("%c",&grid[i][j]);
                    if(grid[i][j]=='\n')j--;
                    visit[i][j]=0;
                }
            for(i=0; i<r; i++)
            {
                checkb(0,i);
            }
            for(i=0; i<r; i++)
                if(visit[r-1][i]==1)
                {
                    printf("%d B\n",cas);
                    k=1;
                    break;
                }
            if(k==0)
            {
                for(i=0; i<r; i++)
                {
                    wcheck(i,0);
                }
                for(i=0; i<r; i++)
                    if(visit[i][r-1]==2)
                    {
                        printf("%d W\n",cas);
                        break;
                    }
            }
        }
        cas++;
    }
}

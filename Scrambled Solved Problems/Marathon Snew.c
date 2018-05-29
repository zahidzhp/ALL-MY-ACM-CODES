#include <stdio.h>
#include <string.h>
int up(int a,int b);
int down(int a,int b);
int left(int a,int b);
int right(int a,int b);

int r,c,valr,valc;
char grid[10][10];

int up(int a,int b)
{
    if(a<0) return right(0,b+1);
    else if(grid[a][b]=='.')
    {
        grid[a][b]='a';
        return up(a-1,b)+1;
    }
    else if(grid[a][b]=='*')
    {
        if(grid[a+1][b+1]=='*')
        return right(a+1,b+1);
    }
    else if(grid[a][b]=='a') { grid[a][b]='b'; return down(a+1,b);}
    else if(grid[a][b]=='b') return 0;
}
int down(int a,int b)
{
    if(a>=r) return left(a-1,b-1);
    else if(grid[a][b]=='.')
    {
        grid[a][b]='a';
        return down(a+1,b)+1;
    }
    else if(grid[a][b]=='*')
    {
        if(grid[a-1][b-1]=='*') return 0;
        return left(a-1,b-1);
    }
    else if(grid[a][b]=='a') { grid[a][b]='b'; return up(a-1,b);}
    else if(grid[a][b]=='b') return 0;
}
int left(int a,int b)
{
    if(b<0) return up(a-1,0);

    else if(grid[a][b]=='.')
    {
        grid[a][b]='a';
        return left(a,b-1)+1;
    }
    else if(grid[a][b]=='*')
    {
        if(grid[a-1][b+1]=='*') return 0;
        return up(a-1,b+1);
    }
    else if(grid[a][b]=='a') { grid[a][b]='b'; return right(a,b+1);}
    else if(grid[a][b]=='b') return 0;
}
int right(int a,int b)
{

    if(b>=c) return down(a+1,b-1);
    else if(grid[a][b]=='.')
    {
        grid[a][b]='a';
        return right(a,b+1)+1;
    }
    else if(grid[a][b]=='*')
    {
        if(grid[a+1][b-1]=='*') return 0;
        return down(a+1,b-1);
    }
    else if(grid[a][b]=='a') { grid[a][b]='b'; return left(a,b-1);}
    else if(grid[a][b]=='b') return 0;
}


int main()
{
    scanf("%d %d",&r,&c);
    int ans=0;
    int i,j;
    getchar();
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
        {
            scanf("%c",&grid[i][j]);
            if(grid[i][j]=='\n') j--;
            else if(grid[i][j]=='U'||grid[i][j]=='D'||grid[i][j]=='L'||grid[i][j]=='R')
            {
                valr=i;
                valc=j;
            }

        }
    if(r==1||c==1)
    {
        if(r==1)
        {
            int k,l;
            k=valr;
            l=valc;
            ans++;
            while(grid[k][l-1]=='.')
            {
                ans++;
                l--;
            }
            k=valr;
            l=valc;
            while(grid[k][l+1]=='.')
            {
                ans++;
                l++;
            }
            printf("%d\n",ans);
            return 0;
        }
        else
        {


            int k,l;
            k=valr;
            l=valc;
            ans++;
            while(grid[k-1][l]=='.')
            {
                ans++;
                k--;
            }
            k=valr;
            l=valc;
            while(grid[k+1][l]=='.')
            {
                ans++;
                k++;
            }
            printf("%d\n",ans);
            return 0;
        }
    }

    if(grid[valr][valc]=='D')
    {
        grid[valr][valc]='a';
        ans=down(valr+1,valc)+1;
    }
    else if(grid[valr][valc]=='L')
    {
        grid[valr][valc]='a';
        ans=left(valr,valc-1)+1;
    }
    else if(grid[valr][valc]=='R')
    {
        grid[valr][valc]='a';
        ans=right(valr,valc+1)+1;
    }
    else if(grid[valr][valc]=='U')
    {
        grid[valr][valc]='a';
        ans= up(valr-1,valc)+1;
    }

    printf("%d\n",ans);
    return 0;
}

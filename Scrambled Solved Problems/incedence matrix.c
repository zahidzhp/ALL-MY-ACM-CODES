#include <stdio.h>

int a[100][100],adj[100][100];
int main()
{
    int edg,ver,k=0,ini,ini2;
    scanf("%d %d",&ver,&edg);
    register int i,j;
    for(i=1; i<=ver; i++)
        for(j=1; j<=edg; j++)
        {
            scanf("%d",&a[i][j]);
        }
    for(i=1;i<=edg;i++){
        for(j=1;j<=ver;j++)
        {
            if(a[i][j]==1&&k==0) {ini=j;k++;}
            else if(a[i][j]==1&&k==1) ini2=j;
        }
        adj[ini][ini2]=1;
        adj[ini2][ini]=1;
        k=0;
    }
    printf("\n\n\n");
    for(i=1;i<=ver;i++){
        for(j=1;j<=ver;j++)
        {
            if(adj[i][j]==1) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}

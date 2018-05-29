#include <stdio.h>

int a[100][100];
int main()
{
    int ver,edg,c,b;
    scanf("%d %d",&ver,&edg);
    register int i,j;
    for(i=0;i<edg;i++)
    {
        scanf("%d %d",&c,&b);
        a[c][b]=1;
        a[b][c]=1;
    }
    printf("Adjacency Matrix:\n\n");
    for(i=0;i<ver;i++){
        for(j=0;j<ver;j++)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");
    }





    return 0;
}

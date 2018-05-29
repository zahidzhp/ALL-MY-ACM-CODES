#include <stdio.h>
int main()
{
    int ara[101][101];
    int n,m,l,k,j,i;
    while(scanf("%d %d",&n,&m)==2)
    {
        l=0;
        for(i=0; i<n; i++)
        {
            k=0;
            for(j=0; j<m; j++)
            {
                scanf("%d",&ara[i][j]);
                if(ara[i][j]>0)
                k++;
            }
            if(k==j) l++;
        }
        printf("%d\n",l);
    }
}

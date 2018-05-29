#include<stdio.h>
int win[10][4];

int main()
{
    int M,N,x,y,i,j=0;
    while(scanf("%d",&N)==1)
    {
        if(N==0)
            break;
        for(i=0; i<N; i++)
        {
            scanf("%d %d %d %d",&win[i][0],&win[i][1],&win[i][2],&win[i][3]);
        }
        scanf("%d",&M);
        while(M--)
        {
            j=-1;
            scanf("%d %d",&x,&y);
            for(i=N-1; i>=0; i--)
            {
                if((x>=win[i][0] && x<=win[i][2]) && (y>=win[i][1] && y<=win[i][3]))
                {
                    printf("%d\n",i);
                    j=0;
                    break;
                }

            }
            if(j==-1)printf("-1\n");
        }
    }
    return 0;
}

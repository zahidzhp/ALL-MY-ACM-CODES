#include <bits/stdc++.h>
using namespace std;
int seq[35]= {0};
int last;
bool val;
int best[35][35002];

void reset(int n)
{
    int p=n*1000+2;
    for(register int i=0; i<n; i++)
    {
       for(register int j=0;j<p;j++)
        best[i][j]=-1;
    }
}

void aseq(int pos,int sum,int num)
{
    if(pos>=last) return;
    if(seq[pos]==sum&&num>=2){val= true; return;}
    if(best[pos][sum]!=-1) return;
    best[pos][sum]=1;
    if(!val) aseq(pos+1,sum,num);
    if(!val) aseq(pos+1,sum+seq[pos],num+1);
    return ;
}
int main()
{
    int cas,d=1;
    while(scanf("%d",&cas)==1)
    {
        reset(cas);
        register int i,j;
        last=cas;
        int t=0,temp=0;
        for(i=0; i<cas; i++)
        {
            scanf("%d",&seq[i]);
            if(seq[i]<=t)
            {
                //printf("%d %d\n",seq[i],t);
                temp=1;
            }
            t=seq[i];
        }
        if(temp)
        {
            printf("Case #%d:",d);
            for(i=0; i<cas; i++)
                printf(" %d",seq[i]);
            printf("\nThis is not an A-sequence.\n");
        }
        else
        {
            val= false;
            aseq(0,0,0);
            if(val)
            {
                printf("Case #%d:",d);
                for(i=0; i<cas; i++)
                    printf(" %d",seq[i]);
                printf("\nThis is not an A-sequence.\n");
            }
            else
            {
                printf("Case #%d:",d);
                for(i=0; i<cas; i++)
                    printf(" %d",seq[i]);
                printf("\nThis is an A-sequence.\n");
            }
        }
        d++;

    }
    return 0;
}

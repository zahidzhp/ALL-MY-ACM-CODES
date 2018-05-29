#include <bits/stdc++.h>

struct time
{
    int ti;
    char sign;
    bool operator <(const time & p )const
    {
        return ti<p.ti;
    }
};



using namespace std;
int main()
{
    struct time b;
    vector<struct time> k;
    int cas,h,m,s;
    char t;
    register int i,j;
    while(scanf("%d",&cas)==1)
    {
        if(cas==0) return 0;
        int numX=0;
        for(i=0; i<cas; i++)
        {
            scanf("%d %c %d %c %d %c",&h,&t,&m,&t,&s,&b.sign);
            if(b.sign=='X') numX++;
            b.ti=h*3600+m*60+s;
            k.push_back(b);
        }
        i=j=0;
        int man=0;
        sort(k.begin(),k.end());
        int ma=0;

        for(i=cas-1; i>=0; i--)
        {
            if(k[i].sign=='?')
            {
                if(numX<cas/2)
                {
                    k[i].sign='X';
                    numX++;
                }
                else k[i].sign='E';
            }
        }
        i=j=0;
        while(i<cas)
        {
            if(k[i].sign=='E') man++;
            else if(k[i].sign=='X') man--;
            ma=max(ma,man);
            i++;
        }
        printf("%d\n",ma);
        k.clear();
    }
}

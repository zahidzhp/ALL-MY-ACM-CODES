#include <bits/stdc++.h>
using namespace std;
double share[110];
int pos;
int last;
double best[100][100002];
void reset(int n)
{
    for(register int i=0; i<n; i++)
    {
       for(register int j=0;j<100002;j++)
        best[i][j]=-1;
    }
}
double ans;
double scount(int posi,double sum)
{
    if(posi>=last) return sum;
    if(posi==pos)
    {
        return (100/scount(posi+1,sum))*share[pos];
    }
    if(best[posi][(int)(sum*100)]!=-1) return best[posi][(int)(sum*100)];

    best[posi][(int)(sum*100)]=max((100/scount(posi+1,sum))*share[pos],(100/scount(posi+1,sum+share[posi]))*share[pos]);
    if(sum>50)
    return best[posi][(int)(sum*100)];

}

int main()
{
    int n,x;
    while(scanf("%d %d",&n,&x)&&n&&x)
    {
        reset(n);
        register int i;
        pos=x-1;
        last=n;
        for(i=0;i<n;i++)
        {
            scanf("%lf",&share[i]);
        }
        if(share[pos]>50)
        {
            printf("100.00\n");
            continue;
        }
        else
        {
            ans=0;
            scount(0,share[pos]);
            cout.precision(2);
            cout<<"ans->"<<fixed<<ans<<endl;
        }
    }
    return 0;
}
/*
    double d = 3.14159265358979;
    cout.precision(2);
    cout << "Pi: " << fixed << d << endl;
*/

#include <iostream>
#include <queue>
#include <cstdio>


using namespace std;
int main()
{
    std::queue<int> h,m;
    int a,ho,mi,ma=1;
    scanf("%d",&a);
    int time[25][61];
    register int i,j;
    for(i=0;i<25;i++)
        for(j=0;j<61;j++)
        time[i][j]=0;
    for(i=0;i<a;i++)
    {
        scanf("%d %d",&ho,&mi);
        time[ho][mi]++;
        if(time[ho][mi]==1){
        h.push(ho);
        m.push(mi);
        }
    }
    while(!h.empty())
    {
        ma=max(ma,time[h.front()][m.front()]);
        h.pop();
        m.pop();
    }
    printf("%d\n",ma);
    return 0;
}

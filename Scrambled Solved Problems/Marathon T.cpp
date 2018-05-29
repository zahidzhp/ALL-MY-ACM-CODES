#include <iostream>
#include <map>
#include <cstdio>
#include <queue>


using namespace std;
int main()
{
    std::map<int, std::map<int, int> > a;
    std::queue<int> in,las,se;
    register int i,j,k;
    int n,sec,ini,last;
    scanf("%d",&n);
    for(k=0;k<n;k++){
    scanf("%d %d %d",&sec,&ini,&last);
    in.push(ini);
    las.push(last);
    se.push(sec);
    if(ini<=last)
    {
        for(i=sec,j=ini;j<=last;i++,j++)
            a[i][j]++;
    }
    else{
        for(i=sec,j=ini;j>=last;i++,j--)
            a[i][j]++;
        }
    }

    register int ans=0;
    for(k=0;k<n;k++){
    ans=0;
    ini=in.front();
    in.pop();
    last=las.front();
    las.pop();
    sec=se.front();
    se.pop();
   // printf("IN %d\n%d %d %d\n\n",k,ini,last,sec);
    if(ini<=last)
    {

        for(i=sec,j=ini;j<=last;i++,j++){
            ans+=a[i][j]-1;
            //if(a[i][j]>1) printf("Sec->%d point->%d\n",i,j);
        }
    }
    else{
        for(i=sec,j=ini;j>=last;i++,j--){
            if(a[i][j]==a[j][i]==1) ans++;
            //if(a[i][j]>1) printf("Sec->%d point->%d\n",i,j);
            }
        }
    if(k==0) printf("%d",ans);
    else printf(" %d",ans);
    }
    return 0;

}
